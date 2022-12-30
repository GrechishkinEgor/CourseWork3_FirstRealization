#include "Test.h"

CourseWork::Test::Test()
{
    TestName = "";
}

CourseWork::Test::Test(String^ TestName) : Test()
{
    this->TestName = TestName;
}

CourseWork::Test::Test(BinaryReader^ Reader)
{
    ReadFromFile(Reader);
}

void CourseWork::Test::SetTestName(String^ Name)
{
    TestName = Name;
    return;
}

System::String^ CourseWork::Test::GetTestName()
{
    return TestName;
}

void CourseWork::Test::WriteInFile(BinaryWriter^ Writer)
{
    Writer->Write(TestName);
    return;
}

void CourseWork::Test::ReadFromFile(BinaryReader^ Reader)
{
    TestName = Reader->ReadString();
    return;
}
