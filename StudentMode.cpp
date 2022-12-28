#include "AppContext.h"

System::Void CourseWork::StudentMode::ReturnToChoiceModeButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	CurrentApplicationContext::ShowOnlyChoiceModeWin();
	return System::Void();
}
