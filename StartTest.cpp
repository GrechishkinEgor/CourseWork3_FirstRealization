#include "AppContext.h"

CourseWork::StartTest::StartTest(ReadyTest^ CurrentTest)
{
	InitializeComponent();
	TestNameTextBox->Text = CurrentTest->GetTestName();
	this->CurrentTest = CurrentTest;
}

System::Void CourseWork::StartTest::StartButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (StudentNameTextBox->Text->Trim() == "")
		MessageBox::Show("�� ������� ��� ���������.", "��� ���������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	else
	{
		try
		{
			FileStream^ NewFile = gcnew FileStream(StudentNameTextBox->Text + ".test", FileMode::CreateNew);
			NewFile->Close();
		}
		catch (IOException^ e)
		{
			MessageBox::Show("�������� � ������ ������ ��� ������ ����.", "��� ���������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return System::Void();
		}
		catch (ArgumentException^ e)
		{
			MessageBox::Show("��� ��������� �������� ������������ �������.", "��� ���������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return System::Void();
		}
		CurrentTest->SetStudentName(StudentNameTextBox->Text->Trim());
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	return System::Void();
}
