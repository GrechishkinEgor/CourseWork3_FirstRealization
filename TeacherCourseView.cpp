#include "AppContext.h"

CourseWork::TeacherCourseView::TeacherCourseView(void)
{
    InitializeComponent();
    Course^ CurrentCourse = CurrentApplicationContext::GetCourse();
    array<Test^>^ TestList = CurrentCourse->GetListOfTests();
    for (int i = 0; i < TestList->Length; i++)
        this->TestsDataGridView->Rows->Add(TestList[i]->GetId(), TestList[i]->GetTestName());

    if (!CurrentApplicationContext::GetCourse()->IsInDevelopment())
    {
        ?????????ToolStripMenuItem->Enabled = false;
        //????????????ToolStripMenuItem->Enabled = false;
        ?????????ToolStripMenuItem->Enabled = false;
    }
    return;
}

System::Void CourseWork::TeacherCourseView::??????????????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    CourseSettings^ CourseSettingsWin = gcnew CourseSettings;
    CourseSettingsWin->ShowDialog();
    return System::Void();
}

System::Void CourseWork::TeacherCourseView::TeacherCourseView_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    Application::Exit();
    return System::Void();
}

System::Void CourseWork::TeacherCourseView::?????????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (CurrentApplicationContext::GetPath() == "")
    {
        if (SaveCourseDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            CurrentApplicationContext::SaveCourse(SaveCourseDialog->FileName);
    }
    else
        CurrentApplicationContext::SaveCourse(CurrentApplicationContext::GetPath());
    return System::Void();
}

System::Void CourseWork::TeacherCourseView::????????????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (SaveCourseDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        CurrentApplicationContext::SaveCourse(SaveCourseDialog->FileName);
}

System::Void CourseWork::TeacherCourseView::?????????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    CreatingNewTest^ CreatingNewTestWin = gcnew CreatingNewTest;
    if (CreatingNewTestWin->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        Course^ CurrentCourse = CurrentApplicationContext::GetCourse();
        array<Test^>^ TestList = CurrentCourse->GetListOfTests();
        this->TestsDataGridView->Rows->Add(TestList[TestList->Length - 1]->GetId(), TestList[TestList->Length - 1]->GetTestName());
    }
    return System::Void();
}

System::Void CourseWork::TeacherCourseView::?????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    CurrentApplicationContext::ShowOnlyTeacherModeWin();
    return System::Void();
}

System::Void CourseWork::TeacherCourseView::TestsDataGridView_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    Course^ CurrentCourse = CurrentApplicationContext::GetCourse();
    int TestId = Convert::ToInt32(this->TestsDataGridView[0, this->TestsDataGridView->CurrentCell->RowIndex]->Value);
    Test^ CurrentTest = CurrentCourse->GetTestWithId(TestId);
    TestView^ TestViewWin = gcnew TestView(CurrentTest);
    this->Hide();
    if (TestViewWin->ShowDialog() == System::Windows::Forms::DialogResult::Abort)
    {
        CurrentCourse->RemoveTestWithId(TestId);
        this->TestsDataGridView->Rows->Remove(this->TestsDataGridView->Rows[this->TestsDataGridView->CurrentCell->RowIndex]);
    }
    else
        this->TestsDataGridView[1, this->TestsDataGridView->CurrentCell->RowIndex]->Value = CurrentTest->GetTestName();
    this->Show();
    return System::Void();
}
