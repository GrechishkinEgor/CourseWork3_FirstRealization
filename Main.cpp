#include <Windows.h>
#include "AppContext.h"

using namespace CourseWork;

[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CurrentApplicationContext);
	return 0;
}