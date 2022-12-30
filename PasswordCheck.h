#pragma once
/*����� ���������� ��� ����� ������ �������������.
* ������� �� ������ �� �������� �������� ������ ����� ����� CurrentApplicationContext::CheckTeacherPassword
* ���� ������ ������, �� � �������� ����� DialogResult ������������ �������� �� � ����� �����������
* � ������ ��������� ������ �������� ��������������� ��������� � ������������ ������������ ������ ������ ������
* ������������� �������� ������ ����� ��� ��������� ���� (����� ����� ShowDialog)
*/
namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� PasswordCheck
	/// </summary>
	public ref class PasswordCheck : public System::Windows::Forms::Form
	{
	public:
		PasswordCheck(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~PasswordCheck()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ InfoLabel;
	protected:
	private: System::Windows::Forms::TextBox^ PasswordTextBox;
	private: System::Windows::Forms::Button^ OKButton;

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
			this->InfoLabel = (gcnew System::Windows::Forms::Label());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->OKButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// InfoLabel
			// 
			this->InfoLabel->AutoSize = true;
			this->InfoLabel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InfoLabel->Location = System::Drawing::Point(100, 28);
			this->InfoLabel->Name = L"InfoLabel";
			this->InfoLabel->Size = System::Drawing::Size(114, 20);
			this->InfoLabel->TabIndex = 0;
			this->InfoLabel->Text = L"������� ������:";
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Location = System::Drawing::Point(43, 63);
			this->PasswordTextBox->MaxLength = 64;
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->PasswordChar = '*';
			this->PasswordTextBox->Size = System::Drawing::Size(229, 20);
			this->PasswordTextBox->TabIndex = 1;
			this->PasswordTextBox->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &PasswordCheck::PasswordTextBox_PreviewKeyDown);
			// 
			// OKButton
			// 
			this->OKButton->Location = System::Drawing::Point(104, 117);
			this->OKButton->Name = L"OKButton";
			this->OKButton->Size = System::Drawing::Size(101, 21);
			this->OKButton->TabIndex = 2;
			this->OKButton->Text = L"��";
			this->OKButton->UseVisualStyleBackColor = true;
			this->OKButton->Click += gcnew System::EventHandler(this, &PasswordCheck::OKButton_Click);
			// 
			// PasswordCheck
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(306, 163);
			this->Controls->Add(this->OKButton);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->InfoLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"PasswordCheck";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���� ������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OKButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PasswordTextBox_PreviewKeyDown(System::Object^ sender, System::Windows::Forms::PreviewKeyDownEventArgs^ e);
	};
}
