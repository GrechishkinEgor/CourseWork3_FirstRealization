#include "ReadyTest.h"

using namespace CourseWork;

void CourseWork::ReadyTest::ReadFromFile(BinaryReader^ Reader)
{
    TestBasic::ReadFromFile(Reader);
    TasksList = gcnew array<ReadyTask^>(Reader->ReadInt32());
    for (int i = 0; i < TasksList->Length; i++)
        TasksList[i] = gcnew ReadyTask(Reader);
    StudentName = Reader->ReadString();
    return;
}

void CourseWork::ReadyTest::WriteInFile(BinaryWriter^ Writer)
{
    TestBasic::WriteInFile(Writer);
    Writer->Write(TasksList->Length);
    for (int i = 0; i < TasksList->Length; i++)
        TasksList[i]->WriteInFile(Writer);
    Writer->Write(StudentName);
    return;
}

CourseWork::ReadyTest::ReadyTest(Test^ SomeTest)
{
    TestName = SomeTest->GetTestName();
    Id = SomeTest->GetId();
    array<Task^>^ SomeTestTasks = SomeTest->GetTasksList();
    TasksList = gcnew array<ReadyTask^>(SomeTestTasks->Length);
    if (SomeTest->IsTaskInRandomOrder())
    {
        array<bool>^ UsedTasks = gcnew array<bool>(SomeTestTasks->Length);
        for (int i = 0; i < UsedTasks->Length; i++)
            UsedTasks[i] = false;
        Random^ Randomizer = gcnew Random();
        for (int i = 0; i < SomeTestTasks->Length; i++)
        {
            int RandIndex = 0;
            do
                RandIndex = Randomizer->Next(SomeTestTasks->Length);
            while (UsedTasks[RandIndex]);
            UsedTasks[RandIndex] = true;
            TasksList[i] = gcnew ReadyTask(SomeTestTasks[RandIndex]);
        }
    }
    else
    {
        for (int i = 0; i < SomeTestTasks->Length; i++)
            TasksList[i] = gcnew ReadyTask(SomeTestTasks[i]);
    }
    
    StudentName = "";
    return;
}

CourseWork::ReadyTest::ReadyTest(BinaryReader^ Reader) : TestBasic(Reader)
{
}

array<ReadyTask^>^ CourseWork::ReadyTest::GetTasksList()
{
    return TasksList;
}

String^ CourseWork::ReadyTest::GetStudentName()
{
    return StudentName;
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

void CourseWork::ReadyTest::SetStudentName(String^ Name)
{
    StudentName = Name;
}
