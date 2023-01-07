#include "TaskBasic.h"
using namespace CourseWork;


void CourseWork::TaskBasic::ReadFromFile(BinaryReader^ Reader)
{
    Question = Reader->ReadString();
    Answers = gcnew array<String^>(Reader->ReadInt32());
    for (int i = 0; i < Answers->Length; i++)
        Answers[i] = Reader->ReadString();
    IsRightAnswer = gcnew array<bool>(Answers->Length);
    for (int i = 0; i < IsRightAnswer->Length; i++)
        IsRightAnswer[i] = Reader->ReadBoolean();
    MaxMark = Reader->ReadInt32();
    ExecutionTime = Reader->ReadInt32();
    Id = Reader->ReadInt32();
    IsWithOneRightAnswer = Reader->ReadBoolean();
    return;
}

void CourseWork::TaskBasic::WriteInFile(BinaryWriter^ Writer)
{
    Writer->Write(Question);
    Writer->Write(Answers->Length);
    for (int i = 0; i < Answers->Length; i++)
        Writer->Write(Answers[i]);
    for (int i = 0; i < IsRightAnswer->Length; i++)
        Writer->Write(IsRightAnswer[i]);
    Writer->Write(MaxMark);
    Writer->Write(ExecutionTime);
    Writer->Write(Id);
    Writer->Write(IsWithOneRightAnswer);
    return;
}

CourseWork::TaskBasic::TaskBasic()
{
    Question = "";
    Answers = gcnew array<String^>(0);
    IsRightAnswer = gcnew array<bool>(0);
    MaxMark = 0;
    ExecutionTime = 0;
    Id = 0;
}

CourseWork::TaskBasic::TaskBasic(BinaryReader^ Reader)
{
    ReadFromFile(Reader);
    return;
}

CourseWork::String^ CourseWork::TaskBasic::GetQuestion()
{
    return Question;
}

array<CourseWork::String^>^ CourseWork::TaskBasic::GetAnswers()
{
    return Answers;
}

int CourseWork::TaskBasic::GetMaxMark()
{
    return MaxMark;
}

int CourseWork::TaskBasic::GetExecutionTime()
{
    return ExecutionTime;
}

int CourseWork::TaskBasic::GetId()
{
    return Id;
}

array<bool>^ CourseWork::TaskBasic::GetNumsOfRightAnswers()
{
    return IsRightAnswer;
}

bool CourseWork::TaskBasic::IsTaskWithOneRightAnswer()
{
    return IsWithOneRightAnswer;
}


