#include "AppContext.h"

System::Void CourseWork::CreatingNewTest::OKButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    Test^ NewTest = gcnew Test(this->TestNameTextBox->Text);
    Course^ CurrentCourse = CurrentApplicationContext::GetCourse();
    CurrentCourse->AddNewTest(NewTest);
    this->DialogResult = System::Windows::Forms::DialogResult::OK;
    this->Close();
    return System::Void();
}
