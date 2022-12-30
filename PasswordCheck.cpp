#include "AppContext.h"

System::Void CourseWork::PasswordCheck::OKButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!CurrentApplicationContext::CheckTeacherPassword(PasswordTextBox->Text))
    {
        System::Windows::Forms::MessageBox::Show("Неверный пароль", "", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        PasswordTextBox->Text = "";
    }
    else
    {
        this->DialogResult = System::Windows::Forms::DialogResult::OK;
        this->Close();
    }  
    return System::Void();
}

System::Void CourseWork::PasswordCheck::PasswordTextBox_PreviewKeyDown(System::Object^ sender, System::Windows::Forms::PreviewKeyDownEventArgs^ e)
{
    if (e->KeyCode == Keys::Enter)
        this->OKButton_Click(sender, e);
    return System::Void();
}
