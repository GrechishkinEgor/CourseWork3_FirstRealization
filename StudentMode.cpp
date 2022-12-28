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
