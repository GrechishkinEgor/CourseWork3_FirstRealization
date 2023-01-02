#include "AppContext.h"

CourseWork::CourseSettings::CourseSettings(void)
{
	InitializeComponent();
	Course^ CurrentCourse = CurrentApplicationContext::GetCourse();
	if (!CurrentCourse->IsInDevelopment())
	{
		CourseNameTextBox->Enabled = false;
		TeacherNameTextBox->Enabled = false;
		ChangePasswordButton->Enabled = false;
		FinishDevelopmentButton->Enabled = false;
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

System::Void CourseWork::CourseSettings::FinishDevelopmentButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (System::Windows::Forms::MessageBox::Show("¬ы уверены, что хотите завершить разработку курса? ѕосле завершени€ курс будет доступен учащимс€, но помен€ть настройки будет невозможно.", "«авершение разработки", System::Windows::Forms::MessageBoxButtons::OKCancel, System::Windows::Forms::MessageBoxIcon::Exclamation)
		== System::Windows::Forms::DialogResult::OK)
	{
		CurrentApplicationContext::GetCourse()->FinishDevelopment();
		this->Close();
	}
	return System::Void();
}

System::Void CourseWork::CourseSettings::ChangePasswordButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeTeacherPassword^ ChangeTeacherPasswordWin = gcnew ChangeTeacherPassword;
	ChangeTeacherPasswordWin->ShowDialog();
	return System::Void();
}
