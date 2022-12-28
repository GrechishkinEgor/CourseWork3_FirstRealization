#include "AppContext.h"

System::Void CourseWork::ChoiceMode::StudentModeButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	CurrentApplicationContext::ShowOnlyStudentModeWin();
	return System::Void();
}

System::Void CourseWork::ChoiceMode::TeacherModeButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	CurrentApplicationContext::ShowOnlyTeacherModeWin();
	return System::Void();
}

System::Void CourseWork::ChoiceMode::ExitApplicationButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}
