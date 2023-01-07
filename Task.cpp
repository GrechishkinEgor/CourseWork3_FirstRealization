#include "Task.h"

CourseWork::Task::Task() : TaskBasic()
{
    AnswersRandomOrder = false;
}

CourseWork::Task::Task(BinaryReader^ Reader) : TaskBasic(Reader)
{

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

void CourseWork::Task::AddNewAnswer(String^ Answer, bool IsRight)
{
    array<String^>::Resize(this->Answers, this->Answers->Length + 1);
    this->Answers[this->Answers->Length - 1] = Answer;
    array<bool>::Resize(this->IsRightAnswer, this->IsRightAnswer->Length + 1);
    this->IsRightAnswer[this->IsRightAnswer->Length - 1] = IsRight;
    return;
}

void CourseWork::Task::SetFlagOfRightAnswer(int IndexOfAnswer, bool IsRight)
{
    if (IndexOfAnswer < IsRightAnswer->Length)
        IsRightAnswer[IndexOfAnswer] = IsRight;
    return;
}

void CourseWork::Task::ClearAnswers()
{
    array<bool>::Resize(IsRightAnswer, 0);
    array<String^>::Resize(Answers, 0);
}

void CourseWork::Task::SetFlagOfOneRightAnswer(bool IsOneRightAnswer)
{
    this->IsWithOneRightAnswer = IsOneRightAnswer;
    return;
}

void CourseWork::Task::ReadFromFile(BinaryReader^ Reader)
{
    TaskBasic::ReadFromFile(Reader);
    AnswersRandomOrder = Reader->ReadBoolean();
    return;
}

void CourseWork::Task::WriteInFile(BinaryWriter^ Writer)
{
    TaskBasic::WriteInFile(Writer);
    Writer->Write(AnswersRandomOrder);
    return;
}
