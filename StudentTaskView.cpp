#include "AppContext.h"

CourseWork::StudentTaskView::StudentTaskView(ReadyTask^ CurrentTask, int NumTask, int TaskCount)
{
	InitializeComponent();
	QuestionTextBox->Text = CurrentTask->GetQuestion();
	array<String^>^ Answers = CurrentTask->GetAnswers();
	array<bool>^ UserAnswer = CurrentTask->GetUserAnswer();
	for (int i = 0; i < Answers->Length; i++)
		AnswersGridView->Rows->Add(UserAnswer[i] ? "+" : "", Answers[i]);
	NumQuestionLabel->Text = NumQuestionLabel->Text + " " + Convert::ToString(NumTask) + "/" + Convert::ToString(TaskCount);

	if (NumTask == TaskCount)
		NextButton->Enabled = false;
	if (NumTask == 1)
		BackButton->Enabled = false;

	this->CurrentTask = CurrentTask;
	return;
}

System::Void CourseWork::StudentTaskView::EndTestButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->DialogResult = System::Windows::Forms::DialogResult::Abort;
	this->Close();
	return System::Void();
}

System::Void CourseWork::StudentTaskView::AnswersGridView_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (AnswersGridView->CurrentCell->ColumnIndex == 0)
		if (AnswersGridView->CurrentCell->Value == "")
			AnswersGridView->CurrentCell->Value = "+";
		else
			AnswersGridView->CurrentCell->Value = "";
}

System::Void CourseWork::StudentTaskView::StudentTaskView_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	array<bool>^ UserAnswers = gcnew array<bool>(CurrentTask->GetAnswers()->Length);
	for (int i = 0; i < UserAnswers->Length; i++)
		if (AnswersGridView[0, i]->Value == "+")
			UserAnswers[i] = true;
		else
			UserAnswers[i] = false;
	CurrentTask->CheckAnswer(UserAnswers);
}

System::Void CourseWork::StudentTaskView::BackButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
	this->Close();
	return System::Void();
}

System::Void CourseWork::StudentTaskView::NextButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->DialogResult = System::Windows::Forms::DialogResult::OK;
	this->Close();
	return System::Void();
}
