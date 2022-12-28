#include "AppContext.h"

CourseWork::CurrentApplicationContext::CurrentApplicationContext()
{
    /*Создание всех окон (для корректной работы HideAllForms)*/
    ChoiceModeWin = gcnew ChoiceMode;
    TeacherModeWin = gcnew TeacherMode;
    StudentModeWin = gcnew StudentMode;
    CreatingNewCourseWin = gcnew CreatingNewCourse;

    /*Создание пустого курса*/
    CurrentCourse = gcnew Course;

    ChoiceModeWin->Show();
    return;
}

void CourseWork::CurrentApplicationContext::HideAllForms()
{
    ChoiceModeWin->Hide();
    TeacherModeWin->Hide();
    StudentModeWin->Hide();
    CreatingNewCourseWin->Hide();
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

void CourseWork::CurrentApplicationContext::ShowOnlyCreatingNewCourseWin()
{
    HideAllForms();
    CreatingNewCourseWin = gcnew CreatingNewCourse;
    CreatingNewCourseWin->Show();
    return;
}

void CourseWork::CurrentApplicationContext::OpenCourse(System::String^ Path)
{
    System::IO::FileStream^ Stream = gcnew System::IO::FileStream(Path, System::IO::FileMode::Open);
    System::IO::BinaryReader^ Reader = gcnew System::IO::BinaryReader(Stream);
    CurrentCourse = gcnew Course(Reader);
    Reader->Close();
    return;
}

void CourseWork::CurrentApplicationContext::SaveCourse(System::String^ Path)
{
    System::IO::FileStream^ Stream = gcnew System::IO::FileStream(Path, System::IO::FileMode::Open);
    System::IO::BinaryWriter^ Writer = gcnew System::IO::BinaryWriter(Stream);
    CurrentCourse->WriteInFile(Writer);
    Writer->Close();
    return;
}

void CourseWork::CurrentApplicationContext::SetNewCourse(Course^ NewCourse)
{
    CurrentCourse = NewCourse;
    return;
}
