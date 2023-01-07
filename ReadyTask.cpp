#include "ReadyTask.h"

void CourseWork::ReadyTask::ReadFromFile(BinaryReader^ Reader)
{
    TaskBasic::ReadFromFile(Reader);
    for (int i = 0; i < Answers->Length; i++)
        UserAnswer[i] = Reader->ReadBoolean();
    LastUserMark = Reader->ReadInt32();
    return;
}

void CourseWork::ReadyTask::WriteInFile(BinaryWriter^ Writer)
{
    TaskBasic::WriteInFile(Writer);
    for (int i = 0; i < Answers->Length; i++)
        Writer->Write(UserAnswer[i]);
    Writer->Write(LastUserMark);
    return;
}

CourseWork::ReadyTask::ReadyTask(Task^ SomeTask) : TaskBasic()
{
    this->Question = String::Copy(SomeTask->GetQuestion());
    array<String^>^ SomeTaskAnswers = SomeTask->GetAnswers();
    this->Answers = gcnew array<String^>(SomeTaskAnswers->Length);
    array<bool>^ SomeTaskRightAnswers = SomeTask->GetNumsOfRightAnswers();
    this->IsRightAnswer = gcnew array<bool>(SomeTaskAnswers->Length);
    
    if (SomeTask->IsAnswersRandomOrder())
    {
        array<bool>^ UsedAnswers = gcnew array<bool>(SomeTaskAnswers->Length);
        for (int i = 0; i < UsedAnswers->Length; i++)
            UsedAnswers[i] = false;
        Random^ Randomizer = gcnew Random();
        for (int i = 0; i < Answers->Length; i++)
        {
            int RandIndex = 0;
            do
                RandIndex = Randomizer->Next(SomeTaskAnswers->Length);
            while (UsedAnswers[RandIndex]);
            UsedAnswers[RandIndex] = true;
            Answers[i] = String::Copy(SomeTaskAnswers[RandIndex]);
            IsRightAnswer[i] = SomeTaskRightAnswers[RandIndex];
        }
    }
    else
        for (int i = 0; i < Answers->Length; i++)
            Answers[i] = String::Copy(SomeTaskAnswers[i]);

    this->ExecutionTime = SomeTask->GetExecutionTime();
    this->MaxMark = SomeTask->GetMaxMark();
    this->Id = SomeTask->GetId();
    UserAnswer = gcnew array<bool>(SomeTaskAnswers->Length);
    LastUserMark = 0;
    return;
        
}

CourseWork::ReadyTask::ReadyTask(BinaryReader^ Reader) : TaskBasic(Reader)
{
    
}

int CourseWork::ReadyTask::GetLastUserMark()
{
    return LastUserMark;
}

int CourseWork::ReadyTask::CheckAnswer(array<bool>^ UserAnswer)
{
    for (int i = 0; i < this->UserAnswer->Length; i++)
        this->UserAnswer[i] = UserAnswer[i];
    int RightAnswersCount = 0;
    for (int i = 0; i < this->UserAnswer->Length; i++)
        if (this->UserAnswer[i] == this->IsRightAnswer[i])
            RightAnswersCount++;
    LastUserMark = (int)((double)RightAnswersCount / this->Answers->Length * MaxMark);
    return LastUserMark;
}
