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
        MessageBox::Show("�� ��������� ���� \"�������� �����\"", "�������� �����", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
        return System::Void();
    }
    if (TeacherNameTextBox->Text->Trim() == "")
    {
        MessageBox::Show("�� ��������� ���� \"��� �������������\"", "��� �������������", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
        return System::Void();
    }
    if (TeacherPasswordTextBox->Text->Trim() == "")
    {
        MessageBox::Show("�� ��������� ���� \"������ �������������\"", "������ �������������", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
        return System::Void();
    }
    
    Course^ NewCourse = gcnew Course(CourseNameTextBox->Text, TeacherNameTextBox->Text, TeacherPasswordTextBox->Text);
    CurrentApplicationContext::SetNewCourse(NewCourse);
    this->DialogResult = System::Windows::Forms::DialogResult::OK;
    return System::Void();
}
