#include "AppContext.h"

CourseWork::TestResult::TestResult(ReadyTest^ CurrentTest)
{
	InitializeComponent();
	this->CurrentTest = CurrentTest;
	TestNameTextBox->Text = CurrentTest->GetTestName();
	array<ReadyTask^>^ TasksList = CurrentTest->GetTasksList();
	for (int i = 0; i < TasksList->Length; i++)
		TasksGridView->Rows->Add(TasksList[i]->GetQuestion(), Convert::ToString(TasksList[i]->GetLastUserMark()) + "/" + Convert::ToString(TasksList[i]->GetMaxMark()) + " - " + Convert::ToString((int)((double)TasksList[i]->GetLastUserMark() / TasksList[i]->GetMaxMark() * 100)) + "%");
	TotalMarkLabel->Text = TotalMarkLabel->Text + " " + Convert::ToString(CurrentTest->CalculateTotalMarkInPercent()) + "%";
}

System::Void CourseWork::TestResult::TasksGridView_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	TaskResult^ TaskResultWin = gcnew TaskResult(CurrentTest->GetTasksList()[TasksGridView->CurrentCell->RowIndex]);
	TaskResultWin->ShowDialog();
	return System::Void();
}
