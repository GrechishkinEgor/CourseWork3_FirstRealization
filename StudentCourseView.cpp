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
	MessageBox::Show("");
	return System::Void();
}
