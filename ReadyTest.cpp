#include "ReadyTest.h"

using namespace CourseWork;

void CourseWork::ReadyTest::ReadFromFile(BinaryReader^ Reader)
{
    TestBasic::ReadFromFile(Reader);
    TasksList = gcnew array<ReadyTask^>(Reader->ReadInt32());
    for (int i = 0; i < TasksList->Length; i++)
        TasksList[i] = gcnew ReadyTask(Reader);
    return;
}

void CourseWork::ReadyTest::WriteInFile(BinaryWriter^ Writer)
{
    TestBasic::WriteInFile(Writer);
    Writer->Write(TasksList->Length);
    for (int i = 0; i < TasksList->Length; i++)
        TasksList[i]->WriteInFile(Writer);
    return;
}

CourseWork::ReadyTest::ReadyTest(Test^ SomeTest)
{
    TestName = SomeTest->GetTestName();
    Id = SomeTest->GetId();
    array<Task^>^ SomeTestTasks = SomeTest->GetTasksList();
    TasksList = gcnew array<ReadyTask^>(SomeTestTasks->Length);
    for (int i = 0; i < SomeTestTasks->Length; i++)
        TasksList[i] = gcnew ReadyTask(SomeTestTasks[i]);
    return;
}

array<ReadyTask^>^ CourseWork::ReadyTest::GetTasksList()
{
    return TasksList;
}

int CourseWork::ReadyTest::CalculateTotalMarkInPercent()
{
    int SumMarks = 0, SumMaxMarks = 0;
    for (int i = 0; i < TasksList->Length; i++)
    {
        SumMarks += TasksList[i]->GetLastUserMark();
        SumMaxMarks += TasksList[i]->GetMaxMark();
    }
    return (int)((double)SumMarks / SumMaxMarks * 100);
}
