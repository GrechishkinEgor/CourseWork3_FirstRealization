#include "AppContext.h"

CourseWork::TestView::TestView(Test^ CurrentTest)
{
	InitializeComponent();
	this->CurrentTest = CurrentTest;
	this->TestNameTextBox->Text = CurrentTest->GetTestName();
	return;
}

System::Void CourseWork::TestView::TestNameTextBox_Leave(System::Object^ sender, System::EventArgs^ e)
{
	this->CurrentTest->SetTestName(this->TestNameTextBox->Text);
	return System::Void();
}

System::Void CourseWork::TestView::óäàëèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (System::Windows::Forms::MessageBox::Show("Âû óâåðåíû, ÷òî õîòèòå áåçâîçâðàòíî óäàëèòü òåñò?", "Óäàëåíèå òåñòà", System::Windows::Forms::MessageBoxButtons::OKCancel, System::Windows::Forms::MessageBoxIcon::Question)
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

System::Void CourseWork::TestView::äîáàâèòüÇàäàíèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Task^ NewTask = gcnew Task();
	EditChoiceFewAnswer^ EditChoiceFewAnswersWin = gcnew EditChoiceFewAnswer(NewTask);
	if (EditChoiceFewAnswersWin->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		CurrentTest->AddNewTask(NewTask);
		TasksGridView->Rows->Add(NewTask->GetQuestion());
	}
		
	return System::Void();
}
