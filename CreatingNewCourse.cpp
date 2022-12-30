#include "AppContext.h"

System::Void CourseWork::CreatingNewCourse::CancelButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    CurrentApplicationContext::ShowOnlyTeacherModeWin();
    return System::Void();
}

System::Void CourseWork::CreatingNewCourse::OKButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    Course^ NewCourse = gcnew Course(CourseNameTextBox->Text, TeacherNameTextBox->Text, TeacherPasswordTextBox->Text);
    CurrentApplicationContext::SetNewCourse(NewCourse);
    CurrentApplicationContext::ShowOnlyTeacherCourseViewWin();
    return System::Void();
}

System::Void CourseWork::CreatingNewCourse::CreatingNewCourse_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    CurrentApplicationContext::ShowOnlyTeacherModeWin();
    return System::Void();
}
