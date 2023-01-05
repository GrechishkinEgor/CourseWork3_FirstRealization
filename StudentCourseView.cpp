#include "AppContext.h"

System::Void CourseWork::StudentCourseView::StudentCourseView_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    Application::Exit();
    return System::Void();
}
