#include "AppContext.h"

CourseWork::TestView::TestView(Test^ CurrentTest)
{
	InitializeComponent();
	this->CurrentTest = CurrentTest;
	this->TestNameTextBox->Text = CurrentTest->GetTestName();
	array<Task^>^ TasksList = CurrentTest->GetTasksList();
	for (int i = 0; i < TasksList->Length; i++)
		TasksGridView->Rows->Add(TasksList[i]->GetId(), TasksList[i]->GetQuestion());
	RandomOrderCheckBox->CheckState = CurrentTest->IsTaskInRandomOrder() ? CheckState::Checked : CheckState::Unchecked;

	if (!CurrentApplicationContext::GetCourse()->IsInDevelopment())
	{
		TestNameTextBox->Enabled = false;
		???????????????ToolStripMenuItem->Enabled = false;
		???????ToolStripMenuItem->Enabled = false;
		RandomOrderCheckBox->Enabled = false;
	}
		
	return;
}

System::Void CourseWork::TestView::TestNameTextBox_Leave(System::Object^ sender, System::EventArgs^ e)
{
	this->CurrentTest->SetTestName(this->TestNameTextBox->Text);
	return System::Void();
}

System::Void CourseWork::TestView::???????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (System::Windows::Forms::MessageBox::Show("?? ???????, ??? ?????? ???????????? ??????? ?????", "???????? ?????", System::Windows::Forms::MessageBoxButtons::OKCancel, System::Windows::Forms::MessageBoxIcon::Exclamation)
		== System::Windows::Forms::DialogResult::OK)
	{
		this->DialogResult = System::Windows::Forms::DialogResult::Abort;
		this->Close();
	}
	return System::Void();
}

System::Void CourseWork::TestView::TestView_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	this->TestNameTextBox_Leave(sender, e);
	return System::Void();
}

System::Void CourseWork::TestView::???????????????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Task^ NewTask = gcnew Task();
	EditChoiceFewAnswer^ EditChoiceFewAnswersWin = gcnew EditChoiceFewAnswer(NewTask);
	if (EditChoiceFewAnswersWin->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		CurrentTest->AddNewTask(NewTask);
		TasksGridView->Rows->Add(NewTask->GetId(), NewTask->GetQuestion());
	}
		
	return System::Void();
}

System::Void CourseWork::TestView::TasksGridView_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	int TaskId = Convert::ToInt32(this->TasksGridView[0, this->TasksGridView->CurrentCell->RowIndex]->Value);
	Task^ CurrentTask = CurrentTest->GetTaskWithId(TaskId);
	EditChoiceFewAnswer^ EditChoiceFewAnswerWin = gcnew EditChoiceFewAnswer(CurrentTask);
	if (EditChoiceFewAnswerWin->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		TasksGridView[1, this->TasksGridView->CurrentCell->RowIndex]->Value = CurrentTask->GetQuestion();
	return System::Void();
}

System::Void CourseWork::TestView::RandomOrderCheckBox_CheckStateChanged(System::Object^ sender, System::EventArgs^ e)
{
	CurrentTest->SetRandomOrderFlag(RandomOrderCheckBox->CheckState == CheckState::Checked);
	return System::Void();
}
