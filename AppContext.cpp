#include "AppContext.h"

CourseWork::CurrentApplicationContext::CurrentApplicationContext()
{
    /*???????? ??????? ?????*/
    CurrentCourse = gcnew Course;
    Path = "";
    
    /*???????? ???? ???? (??? ?????????? ?????? HideAllForms)*/
    ChoiceModeWin = gcnew ChoiceMode;
    TeacherModeWin = gcnew TeacherMode;
    StudentModeWin = gcnew StudentMode;
    TeacherCourseViewWin = gcnew TeacherCourseView;
    StudentCourseViewWin = gcnew StudentCourseView;

    ChoiceModeWin->Show();
    return;
}

void CourseWork::CurrentApplicationContext::HideAllForms()
{
    ChoiceModeWin->Hide();
    TeacherModeWin->Hide();
    StudentModeWin->Hide();
    TeacherCourseViewWin->Hide();
    StudentCourseViewWin->Hide();
    return;
}

void CourseWork::CurrentApplicationContext::ShowOnlyChoiceModeWin()
{
    CurrentApplicationContext::HideAllForms();
    ChoiceModeWin->Show();
    return;
}

void CourseWork::CurrentApplicationContext::ShowOnlyTeacherModeWin()
{
    CurrentApplicationContext::HideAllForms();
    TeacherModeWin->Show();
    return;
}

void CourseWork::CurrentApplicationContext::ShowOnlyStudentModeWin()
{
    CurrentApplicationContext::HideAllForms();
    StudentModeWin->Show();
    return;
}

void CourseWork::CurrentApplicationContext::ShowOnlyTeacherCourseViewWin()
{
    HideAllForms();
    TeacherCourseViewWin = gcnew TeacherCourseView;
    TeacherCourseViewWin->Show();
    return;
}

void CourseWork::CurrentApplicationContext::ShowOnlyStudentCourseViewWin()
{
    HideAllForms();
    StudentCourseViewWin = gcnew StudentCourseView;
    StudentCourseViewWin->Show();
    return;
}

void CourseWork::CurrentApplicationContext::OpenCourse(System::String^ Path)
{
    System::IO::FileStream^ Stream = gcnew System::IO::FileStream(Path, System::IO::FileMode::Open);
    System::IO::BinaryReader^ Reader = gcnew System::IO::BinaryReader(Stream);
    CurrentCourse = gcnew Course(Reader);
    Reader->Close();
    CurrentApplicationContext::Path = Path;
    return;
}

void CourseWork::CurrentApplicationContext::SaveCourse(System::String^ Path)
{
    System::IO::FileStream^ Stream = gcnew System::IO::FileStream(Path, System::IO::FileMode::Create);
    System::IO::BinaryWriter^ Writer = gcnew System::IO::BinaryWriter(Stream);
    CurrentCourse->WriteInFile(Writer);
    Writer->Close();
    CurrentApplicationContext::Path = Path;
    return;
}

void CourseWork::CurrentApplicationContext::SetNewCourse(Course^ NewCourse)
{
    CurrentCourse = NewCourse;
    Path = "";
    return;
}

CourseWork::Course^ CourseWork::CurrentApplicationContext::GetCourse()
{
    return CurrentCourse;
}

System::String^ CourseWork::CurrentApplicationContext::GetPath()
{
    return Path;
}

bool CourseWork::CurrentApplicationContext::CheckTeacherPassword(String^ Password)
{
    return CurrentCourse->CheckPassword(Password);
}
