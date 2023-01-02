#include "Test.h"

CourseWork::Test::Test()
{
    TestName = "";
    Id = 0;
    TasksList = gcnew array<Task^>(0);
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

void CourseWork::Test::AddNewTask(Task^ NewTask)
{
    array<Task^>::Resize(TasksList, TasksList->Length + 1);
    TasksList[TasksList->Length - 1] = NewTask;
}

System::String^ CourseWork::Test::GetTestName()
{
    return TestName;
}

int CourseWork::Test::GetId()
{
    return Id;
}

CourseWork::Task^ CourseWork::Test::GetTaskWithId(int Id)
{
    for (int i = 0; i < TasksList->Length; i++)
        if (TasksList[i]->GetId() == Id)
            return TasksList[i];
    return nullptr;
}

bool CourseWork::Test::RemoveTaskWithId(int Id)
{
    for (int i = 0; i < TasksList->Length; i++)
        if (TasksList[i]->GetId() == Id)
        {
            for (int j = i; j < TasksList->Length - 1; j++)
                TasksList[j] = TasksList[j + 1];
            array<Task^>::Resize(TasksList, TasksList->Length - 1);
            return true;
        }
    return false;
}

void CourseWork::Test::WriteInFile(BinaryWriter^ Writer)
{
    Writer->Write(TestName);
    Writer->Write(Id);
    Writer->Write(TasksList->Length);
    for (int i = 0; i < TasksList->Length; i++)
        TasksList[i]->WriteInFile(Writer);
    return;
}

void CourseWork::Test::ReadFromFile(BinaryReader^ Reader)
{
    TestName = Reader->ReadString();
    Id = Reader->ReadInt32();
    TasksList = gcnew array<Task^>(Reader->ReadInt32());
    for (int i = 0; i < TasksList->Length; i++)
        TasksList[i] = gcnew Task(Reader);
    return;
}
