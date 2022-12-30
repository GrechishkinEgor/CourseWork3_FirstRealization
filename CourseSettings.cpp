#include "AppContext.h"

CourseWork::CourseSettings::CourseSettings(void)
{
	InitializeComponent();
	Course^ CurrentCourse = CurrentApplicationContext::GetCourse();
	if (!CurrentCourse->IsInDevelopment())
	{
		CourseNameTextBox->Enabled = false;
		TeacherNameTextBox->Enabled = false;
	}
	CourseNameTextBox->Text = CurrentCourse->GetCourseName();
	TeacherNameTextBox->Text = CurrentCourse->GetTeacherName();
	return;
}

System::Void CourseWork::CourseSettings::OKButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Course^ CurrentCourse = CurrentApplicationContext::GetCourse();
	if (CurrentCourse->IsInDevelopment())
	{
		CurrentCourse->SetCourseName(CourseNameTextBox->Text);
		CurrentCourse->SetTeacherName(TeacherNameTextBox->Text);
	}
	this->Close();
	return System::Void();
}
