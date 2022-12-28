#include "AppContext.h"

System::Void CourseWork::TeacherMode::ReturnToChoiceModeButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	CurrentApplicationContext::ShowOnlyChoiceModeWin();
	return System::Void();
}

System::Void CourseWork::TeacherMode::CreatingNewCourseButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	CurrentApplicationContext::ShowOnlyCreatingNewCourseWin();
	return System::Void();
}

System::Void CourseWork::TeacherMode::TeacherMode_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	Application::Exit();
	return System::Void();
}
