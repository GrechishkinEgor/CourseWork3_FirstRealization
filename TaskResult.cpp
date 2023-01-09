#include "AppContext.h"

CourseWork::TaskResult::TaskResult(ReadyTask^ CurrentTask)
{
	InitializeComponent();
	this->CurrentTask = CurrentTask;
	QuestionTextBox->Text = CurrentTask->GetQuestion();
	array<String^>^ Answers = CurrentTask->GetAnswers();
	array<bool>^ RightAnswers = CurrentTask->GetNumsOfRightAnswers();
	array<bool>^ UserAnswers = CurrentTask->GetUserAnswer();
	for (int i = 0; i < Answers->Length; i++)
		AnswersGridView->Rows->Add(Answers[i], UserAnswers[i] ? "+" : "", RightAnswers[i] ? "+" : "");
	MarkLabel->Text = MarkLabel->Text + " " + Convert::ToString(CurrentTask->GetLastUserMark()) + "/" + Convert::ToString(CurrentTask->GetMaxMark()) + " - " + Convert::ToString((int)((double)CurrentTask->GetLastUserMark() / CurrentTask->GetMaxMark() * 100)) + "%";
}
