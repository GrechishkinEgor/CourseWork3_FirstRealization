#include "Task.h"

CourseWork::Task::Task()
{
    Question = "";
    Answers = gcnew array<String^>(0);
    MaxMark = 0;
    ExecutionTime = 0;
    Id = 0;
}

CourseWork::Task::Task(BinaryReader^ Reader)
{
    ReadFromFile(Reader);
}

CourseWork::String^ CourseWork::Task::GetQuestion()
{
    return Question;
}

array<CourseWork::String^>^ CourseWork::Task::GetAnswers()
{
    return Answers;
}

int CourseWork::Task::GetMaxMark()
{
    return MaxMark;
}

int CourseWork::Task::GetExecutionTime()
{
    return ExecutionTime;
}

int CourseWork::Task::GetId()
{
    return Id;
}

bool CourseWork::Task::IsAnswersRandomOrder()
{
    return AnswersRandomOrder;
}

void CourseWork::Task::SetQuestion(String^ Question)
{
    this->Question = Question;
}

void CourseWork::Task::SetMaxMark(int Mark)
{
    MaxMark = Mark;
}

void CourseWork::Task::SetExecutionTime(int Time)
{
    ExecutionTime = Time;
}

void CourseWork::Task::SetId(int Id)
{
    this->Id = Id;
}

void CourseWork::Task::SetAnswersRandomOrder(bool Random)
{
    AnswersRandomOrder = Random;
}

void CourseWork::Task::ReadFromFile(BinaryReader^ Reader)
{
    Question = Reader->ReadString();
    Answers = gcnew array<String^>(Reader->ReadInt32());
    for (int i = 0; i < Answers->Length; i++)
        Answers[i] = Reader->ReadString();
    MaxMark = Reader->ReadInt32();
    ExecutionTime = Reader->ReadInt32();
    Id = Reader->ReadInt32();
    AnswersRandomOrder = Reader->ReadBoolean();
    return;
}

void CourseWork::Task::WriteInFile(BinaryWriter^ Writer)
{
    Writer->Write(Question);
    Writer->Write(Answers->Length);
    for (int i = 0; i < Answers->Length; i++)
        Writer->Write(Answers[i]);
    Writer->Write(MaxMark);
    Writer->Write(ExecutionTime);
    Writer->Write(Id);
    Writer->Write(AnswersRandomOrder);
    return;
}
