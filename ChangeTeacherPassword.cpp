#include "AppContext.h"

System::Void CourseWork::ChangeTeacherPassword::OKButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (NewPasswordTextBox->Text != RepeatPasswordTextBox->Text)
        System::Windows::Forms::MessageBox::Show("Поля \"Новый пароль\" и \"Повторите пароль\" не совпадают", "Пароли не совпадают", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
    else
        if (CurrentApplicationContext::GetCourse()->SetNewPassword(OldPasswordTextBox->Text, NewPasswordTextBox->Text))
            this->Close();
        else
            System::Windows::Forms::MessageBox::Show("Введен неверный старый пароль", "Неверный пароль", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
    return System::Void();
}
