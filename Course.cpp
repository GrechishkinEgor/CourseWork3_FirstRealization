#include "Course.h"

CourseWork::Course::Course()
{
    
}

CourseWork::Course::Course(System::String^ CourseName, System::String^ TeacherName, System::String^ TeacherPassword)
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

void CourseWork::Course::WriteInFile(System::IO::BinaryWriter^ Writer)
{
    Writer->Write(CourseName);
    Writer->Write(TeacherName);
    Writer->Write(TeacherPassword);
    return;
}

void CourseWork::Course::ReadFromFile(System::IO::BinaryReader^ Reader)
{
   CourseName = Reader->ReadString();
   TeacherName = Reader->ReadString();
   TeacherPassword = Reader->ReadString();
   return;
}
