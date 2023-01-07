#include "Test.h"

CourseWork::Test::Test() : TestBasic()
{
    IdLastTask = 0;
    RandomOrder = false;
    TasksList = gcnew array<Task^>(0);
}

CourseWork::Test::Test(String^ TestName) : Test()
{
    this->TestName = TestName;
}

CourseWork::Test::Test(BinaryReader^ Reader) : TestBasic(Reader)
{
    return;
}

void CourseWork::Test::SetRandomOrderFlag(bool IsRandomOrder)
{
    RandomOrder = IsRandomOrder;
    return;
}

bool CourseWork::Test::IsTaskInRandomOrder()
{
    return RandomOrder;
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

void CourseWork::Test::ReadFromFile(BinaryReader^ Reader)
{
    TestBasic::ReadFromFile(Reader);
    IdLastTask = Reader->ReadInt32();
    RandomOrder = Reader->ReadBoolean();
    TasksList = gcnew array<Task^>(Reader->ReadInt32());
    for (int i = 0; i < TasksList->Length; i++)
        TasksList[i] = gcnew Task(Reader);
    return;
}

void CourseWork::Test::WriteInFile(BinaryWriter^ Writer)
{
    TestBasic::WriteInFile(Writer);
    Writer->Write(IdLastTask);
    Writer->Write(RandomOrder);
    Writer->Write(TasksList->Length);
    for (int i = 0; i < TasksList->Length; i++)
        TasksList[i]->WriteInFile(Writer);
    return;
}

void CourseWork::Test::AddNewTask(Task^ NewTask)
{
    array<Task^>::Resize(TasksList, TasksList->Length + 1);
    this->IdLastTask++;
    NewTask->SetId(this->IdLastTask);
    TasksList[TasksList->Length - 1] = NewTask;
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

CourseWork::Task^ CourseWork::Test::GetTaskWithId(int Id)
{
    for (int i = 0; i < TasksList->Length; i++)
        if (TasksList[i]->GetId() == Id)
            return TasksList[i];
    return nullptr;
}

array<CourseWork::Task^>^ CourseWork::Test::GetTasksList()
{
    return TasksList;
}
