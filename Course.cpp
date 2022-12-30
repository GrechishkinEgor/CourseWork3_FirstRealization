#include "Course.h"

CourseWork::Course::Course()
{
    CourseName = "";
    TeacherName = "";
    TeacherPassword = "";
    InDevelopmentFlag = true;
}

CourseWork::Course::Course(System::String^ CourseName, System::String^ TeacherName, System::String^ TeacherPassword) : Course()
{
    this->CourseName = CourseName;
    this->TeacherName = TeacherName;
    this->TeacherPassword = TeacherPassword;
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
    return;
}

void CourseWork::Course::ReadFromFile(System::IO::BinaryReader^ Reader)
{
   CourseName = Reader->ReadString();
   TeacherName = Reader->ReadString();
   TeacherPassword = Reader->ReadString();
   InDevelopmentFlag = Reader->ReadBoolean();
   return;
}
