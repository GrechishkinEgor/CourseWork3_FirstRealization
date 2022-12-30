#include "AppContext.h"

System::Void CourseWork::TeacherCourseView::íàñòðîéêèÊóðñàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    CourseSettings^ CourseSettingsWin = gcnew CourseSettings;
    CourseSettingsWin->ShowDialog();
    return System::Void();
}

System::Void CourseWork::TeacherCourseView::TeacherCourseView_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    Application::Exit();
    return System::Void();
}

System::Void CourseWork::TeacherCourseView::ñîõðàíèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (CurrentApplicationContext::GetPath() == "")
    {
        if (SaveCourseDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            CurrentApplicationContext::SaveCourse(SaveCourseDialog->FileName);
    }
    else
        CurrentApplicationContext::SaveCourse(CurrentApplicationContext::GetPath());
    return System::Void();
}

System::Void CourseWork::TeacherCourseView::ñîõðàíèòüÊàêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (SaveCourseDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        CurrentApplicationContext::SaveCourse(SaveCourseDialog->FileName);
}
