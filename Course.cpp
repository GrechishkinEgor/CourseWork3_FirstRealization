#include "Course.h"

CourseWork::Course::Course()
{
    CourseName = "";
    TeacherName = "";
    TeacherPassword = "";
    InDevelopmentFlag = true;
    ListOfTests = gcnew array<Test^, 1>(0);
}

CourseWork::Course::Course(System::String^ CourseName, System::String^ TeacherName, System::String^ TeacherPassword) : Course()
{
    this->CourseName = CourseName;
    this->TeacherName = TeacherName;
    this->TeacherPassword = TeacherPassword->Trim(' '); //Удаление пробелов в начале и конце пароля
    return;
}

CourseWork::Course::Course(System::IO::BinaryReader^ Reader)
{
    ReadFromFile(Reader);
    return;
}

System::String^ CourseWork::Course::GetCourseName()
{
    return CourseName;
}

System::String^ CourseWork::Course::GetTeacherName()
{
    return TeacherName;
}

bool CourseWork::Course::IsInDevelopment()
{
    return InDevelopmentFlag;
}

bool CourseWork::Course::CheckPassword(String^ UserPassword)
{
    return TeacherPassword == UserPassword->Trim(' '); //Усекаются пробелы в начале и конце
}

void CourseWork::Course::SetCourseName(String^ Name)
{
    CourseName = Name;
    return;
}

void CourseWork::Course::SetTeacherName(String^ Name)
{
    TeacherName = Name;
    return;
}

void CourseWork::Course::WriteInFile(System::IO::BinaryWriter^ Writer)
{
    Writer->Write(CourseName);
    Writer->Write(TeacherName);
    Writer->Write(TeacherPassword);
    Writer->Write(InDevelopmentFlag);
    Writer->Write(ListOfTests->Length);
    for (Int32 i = 0; i < ListOfTests->Length; i++)
        ListOfTests[i]->WriteInFile(Writer);
    return;
}

void CourseWork::Course::ReadFromFile(System::IO::BinaryReader^ Reader)
{
   CourseName = Reader->ReadString();
   TeacherName = Reader->ReadString();
   TeacherPassword = Reader->ReadString();
   InDevelopmentFlag = Reader->ReadBoolean();
   ListOfTests = gcnew array<Test^>(Reader->ReadInt32());
   for (Int32 i = 0; i < ListOfTests->Length; i++)
       ListOfTests[i] = gcnew Test(Reader);
   return;
}
