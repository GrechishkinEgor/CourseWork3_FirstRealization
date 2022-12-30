#include "Test.h"

CourseWork::Test::Test()
{
    TestName = "";
    Id = 0;
}

CourseWork::Test::Test(String^ TestName) : Test()
{
    this->TestName = TestName;
}

CourseWork::Test::Test(BinaryReader^ Reader)
{
    ReadFromFile(Reader);
    return;
}

void CourseWork::Test::SetTestName(String^ Name)
{
    TestName = Name;
    return;
}

void CourseWork::Test::SetId(int Id)
{
    this->Id = Id;
    return;
}

System::String^ CourseWork::Test::GetTestName()
{
    return TestName;
}

int CourseWork::Test::GetId()
{
    return Id;
}

void CourseWork::Test::WriteInFile(BinaryWriter^ Writer)
{
    Writer->Write(TestName);
    Writer->Write(Id);
    return;
}

void CourseWork::Test::ReadFromFile(BinaryReader^ Reader)
{
    TestName = Reader->ReadString();
    Id = Reader->ReadInt32();
    return;
}
