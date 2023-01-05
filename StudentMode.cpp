#include "AppContext.h"

System::Void CourseWork::StudentMode::ReturnToChoiceModeButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	CurrentApplicationContext::ShowOnlyChoiceModeWin();
	return System::Void();
}

System::Void CourseWork::StudentMode::StudentMode_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void CourseWork::StudentMode::OpenCourseButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (OpenCourseDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		CurrentApplicationContext::OpenCourse(OpenCourseDialog->FileName);
		Course^ CurrentCourse = CurrentApplicationContext::GetCourse();
		if (CurrentCourse->IsInDevelopment())
			MessageBox::Show("Данный курс не завершен преподавателем.", "Курс в разработке", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		else
			CurrentApplicationContext::ShowOnlyStudentCourseViewWin();
	}
	return System::Void();
}
