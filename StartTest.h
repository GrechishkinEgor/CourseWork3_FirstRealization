#pragma once
/*��������� ���� ��� ����������� �����
* ���� ���������� �������� �� StudentCourseView
* ��� ������� ������ "������ ����" � DialogResult ������������ ��
*/
namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� StartTest
	/// </summary>
	public ref class StartTest : public System::Windows::Forms::Form
	{
	public:
		StartTest(ReadyTest^ CurrentTest);

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~StartTest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NameTestLabel;
	protected:
	private: System::Windows::Forms::TextBox^ TestNameTextBox;
	private: System::Windows::Forms::Label^ StudentNameLabel;

	private: System::Windows::Forms::TextBox^ StudentNameTextBox;
	private: System::Windows::Forms::Button^ StartButton;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->NameTestLabel = (gcnew System::Windows::Forms::Label());
			this->TestNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StudentNameLabel = (gcnew System::Windows::Forms::Label());
			this->StudentNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NameTestLabel
			// 
			this->NameTestLabel->AutoSize = true;
			this->NameTestLabel->Location = System::Drawing::Point(12, 9);
			this->NameTestLabel->Name = L"NameTestLabel";
			this->NameTestLabel->Size = System::Drawing::Size(91, 13);
			this->NameTestLabel->TabIndex = 0;
			this->NameTestLabel->Text = L"�������� �����:";
			// 
			// TestNameTextBox
			// 
			this->TestNameTextBox->Enabled = false;
			this->TestNameTextBox->Location = System::Drawing::Point(109, 6);
			this->TestNameTextBox->Name = L"TestNameTextBox";
			this->TestNameTextBox->Size = System::Drawing::Size(265, 20);
			this->TestNameTextBox->TabIndex = 1;
			// 
			// StudentNameLabel
			// 
			this->StudentNameLabel->AutoSize = true;
			this->StudentNameLabel->Location = System::Drawing::Point(14, 35);
			this->StudentNameLabel->Name = L"StudentNameLabel";
			this->StudentNameLabel->Size = System::Drawing::Size(89, 13);
			this->StudentNameLabel->TabIndex = 2;
			this->StudentNameLabel->Text = L"��� ���������:";
			// 
			// StudentNameTextBox
			// 
			this->StudentNameTextBox->Location = System::Drawing::Point(109, 32);
			this->StudentNameTextBox->Name = L"StudentNameTextBox";
			this->StudentNameTextBox->Size = System::Drawing::Size(265, 20);
			this->StudentNameTextBox->TabIndex = 3;
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(109, 83);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(163, 21);
			this->StartButton->TabIndex = 4;
			this->StartButton->Text = L"������ ����";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &StartTest::StartButton_Click);
			// 
			// StartTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(386, 128);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->StudentNameTextBox);
			this->Controls->Add(this->StudentNameLabel);
			this->Controls->Add(this->TestNameTextBox);
			this->Controls->Add(this->NameTestLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"StartTest";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������ ����";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		ReadyTest^ CurrentTest;
#pragma endregion
	private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
