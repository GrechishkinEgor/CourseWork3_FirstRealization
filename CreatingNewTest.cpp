#include "AppContext.h"

System::Void CourseWork::CreatingNewTest::OKButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (TestNameTextBox->Text->Trim() == "")
    {
        MessageBox::Show("Не заполнено поле \"Название теста\"", "Название теста", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
        return System::Void();
    }
    
    Test^ NewTest = gcnew Test(this->TestNameTextBox->Text);
    NewTest->SetRandomOrderFlag(RandomOrderCheckBox->CheckState == CheckState::Checked);
    Course^ CurrentCourse = CurrentApplicationContext::GetCourse();
    CurrentCourse->AddNewTest(NewTest);
    this->DialogResult = System::Windows::Forms::DialogResult::OK;
    this->Close();
    return System::Void();
}
