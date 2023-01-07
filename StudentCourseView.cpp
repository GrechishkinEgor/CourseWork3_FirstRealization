#include "AppContext.h"

CourseWork::StudentCourseView::StudentCourseView(void)
{
	InitializeComponent();
	Course^ CurrentCourse = CurrentApplicationContext::GetCourse();
	CourseNameTextBox->Text = CurrentCourse->GetCourseName();
	array<Test^>^ TestList = CurrentCourse->GetListOfTests();
	for (int i = 0; i < TestList->Length; i++)
		this->TestsDataGridView->Rows->Add(TestList[i]->GetId(), TestList[i]->GetTestName());
}

System::Void CourseWork::StudentCourseView::StudentCourseView_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    Application::Exit();
    return System::Void();
}

System::Void CourseWork::StudentCourseView::TestsDataGridView_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (MessageBox::Show("Вы уверены, что хотите начать тест \"" + TestsDataGridView[1, TestsDataGridView->CurrentCell->RowIndex]->Value + "\"?", "Начать тест", MessageBoxButtons::OKCancel, MessageBoxIcon::Question)
		== System::Windows::Forms::DialogResult::OK)
	{
		this->Hide();
		Course^ CurrentCourse = CurrentApplicationContext::GetCourse();
		Test^ CurrentTest = CurrentCourse->GetTestWithId(Convert::ToInt32(TestsDataGridView[0, TestsDataGridView->CurrentCell->RowIndex]->Value));
		ReadyTest^ ReadyCurrentTest = gcnew ReadyTest(CurrentTest);
		array<ReadyTask^>^ TasksList = ReadyCurrentTest->GetTasksList();	
		System::Windows::Forms::DialogResult Result;
		int IndexCurrentTask = 0;
		do
		{
			StudentTaskView^ StudentTaskViewWin = gcnew StudentTaskView(TasksList[IndexCurrentTask], IndexCurrentTask + 1, TasksList->Length);
			Result = StudentTaskViewWin->ShowDialog();
			if (Result == System::Windows::Forms::DialogResult::OK)
				IndexCurrentTask++;
			if (Result == System::Windows::Forms::DialogResult::Cancel)
				IndexCurrentTask--;
		} while (Result != System::Windows::Forms::DialogResult::Abort);

		this->Show();
		MessageBox::Show("Вы набрали " + Convert::ToString(ReadyCurrentTest->CalculateTotalMarkInPercent()) + "% за тест.");
	}
	return System::Void();
}
