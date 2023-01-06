#include "AppContext.h"

System::Void CourseWork::CreatingNewCourse::CancelButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
    return System::Void();
}

System::Void CourseWork::CreatingNewCourse::OKButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (CourseNameTextBox->Text->Trim() == "")
    {
        MessageBox::Show("Не заполнено поле \"Название курса\"", "Название курса", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
        return System::Void();
    }
    if (TeacherNameTextBox->Text->Trim() == "")
    {
        MessageBox::Show("Не заполнено поле \"Имя преподавателя\"", "Имя преподавателя", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
        return System::Void();
    }
    if (TeacherPasswordTextBox->Text->Trim() == "")
    {
        MessageBox::Show("Не заполнено поле \"Пароль преподавателя\"", "Пароль преподавателя", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
        return System::Void();
    }
    
    Course^ NewCourse = gcnew Course(CourseNameTextBox->Text, TeacherNameTextBox->Text, TeacherPasswordTextBox->Text);
    CurrentApplicationContext::SetNewCourse(NewCourse);
    this->DialogResult = System::Windows::Forms::DialogResult::OK;
    return System::Void();
}
