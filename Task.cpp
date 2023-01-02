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
