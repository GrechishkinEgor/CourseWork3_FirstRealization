#include "TestBasic.h"

void CourseWork::TestBasic::ReadFromFile(BinaryReader^ Reader)
{
    TestName = Reader->ReadString();
    Id = Reader->ReadInt32();
    return;
}

void CourseWork::TestBasic::WriteInFile(BinaryWriter^ Writer)
{
    Writer->Write(TestName);
    Writer->Write(Id);
    return;
}

CourseWork::TestBasic::TestBasic()
{
    TestName = "";
    Id = 0;
}

CourseWork::TestBasic::TestBasic(BinaryReader^ Reader)
{
    ReadFromFile(Reader);
    return;
}

System::String^ CourseWork::TestBasic::GetTestName()
{
    return TestName;
}

int CourseWork::TestBasic::GetId()
{
    return Id;
}