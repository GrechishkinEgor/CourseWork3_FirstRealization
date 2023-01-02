#pragma once
/*Форма меняет пароль преподавателя в текущем курсе
* Форма вызывается модально
*/
namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ChangeTeacherPassword
	/// </summary>
	public ref class ChangeTeacherPassword : public System::Windows::Forms::Form
	{
	public:
		ChangeTeacherPassword(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ChangeTeacherPassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ OldPasswordLabel;
	protected:
	private: System::Windows::Forms::Label^ NewPasswordLabel;
	private: System::Windows::Forms::Label^ RepeatPasswordLabel;
	private: System::Windows::Forms::TextBox^ OldPasswordTextBox;
	private: System::Windows::Forms::TextBox^ NewPasswordTextBox;
	private: System::Windows::Forms::TextBox^ RepeatPasswordTextBox;
	private: System::Windows::Forms::Button^ OKButton;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->OldPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->NewPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->RepeatPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->OldPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NewPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RepeatPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->OKButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// OldPasswordLabel
			// 
			this->OldPasswordLabel->AutoSize = true;
			this->OldPasswordLabel->Location = System::Drawing::Point(12, 15);
			this->OldPasswordLabel->Name = L"OldPasswordLabel";
			this->OldPasswordLabel->Size = System::Drawing::Size(84, 13);
			this->OldPasswordLabel->TabIndex = 0;
			this->OldPasswordLabel->Text = L"Старый пароль";
			// 
			// NewPasswordLabel
			// 
			this->NewPasswordLabel->AutoSize = true;
			this->NewPasswordLabel->Location = System::Drawing::Point(12, 41);
			this->NewPasswordLabel->Name = L"NewPasswordLabel";
			this->NewPasswordLabel->Size = System::Drawing::Size(80, 13);
			this->NewPasswordLabel->TabIndex = 1;
			this->NewPasswordLabel->Text = L"Новый пароль";
			// 
			// RepeatPasswordLabel
			// 
			this->RepeatPasswordLabel->AutoSize = true;
			this->RepeatPasswordLabel->Location = System::Drawing::Point(12, 68);
			this->RepeatPasswordLabel->Name = L"RepeatPasswordLabel";
			this->RepeatPasswordLabel->Size = System::Drawing::Size(103, 13);
			this->RepeatPasswordLabel->TabIndex = 2;
			this->RepeatPasswordLabel->Text = L"Повторите пароль:";
			// 
			// OldPasswordTextBox
			// 
			this->OldPasswordTextBox->Location = System::Drawing::Point(134, 12);
			this->OldPasswordTextBox->Name = L"OldPasswordTextBox";
			this->OldPasswordTextBox->Size = System::Drawing::Size(293, 20);
			this->OldPasswordTextBox->TabIndex = 3;
			// 
			// NewPasswordTextBox
			// 
			this->NewPasswordTextBox->Location = System::Drawing::Point(134, 38);
			this->NewPasswordTextBox->Name = L"NewPasswordTextBox";
			this->NewPasswordTextBox->Size = System::Drawing::Size(293, 20);
			this->NewPasswordTextBox->TabIndex = 4;
			// 
			// RepeatPasswordTextBox
			// 
			this->RepeatPasswordTextBox->Location = System::Drawing::Point(134, 68);
			this->RepeatPasswordTextBox->Name = L"RepeatPasswordTextBox";
			this->RepeatPasswordTextBox->Size = System::Drawing::Size(293, 20);
			this->RepeatPasswordTextBox->TabIndex = 5;
			// 
			// OKButton
			// 
			this->OKButton->Location = System::Drawing::Point(167, 111);
			this->OKButton->Name = L"OKButton";
			this->OKButton->Size = System::Drawing::Size(108, 22);
			this->OKButton->TabIndex = 6;
			this->OKButton->Text = L"ОК";
			this->OKButton->UseVisualStyleBackColor = true;
			this->OKButton->Click += gcnew System::EventHandler(this, &ChangeTeacherPassword::OKButton_Click);
			// 
			// ChangeTeacherPassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(439, 152);
			this->Controls->Add(this->OKButton);
			this->Controls->Add(this->RepeatPasswordTextBox);
			this->Controls->Add(this->NewPasswordTextBox);
			this->Controls->Add(this->OldPasswordTextBox);
			this->Controls->Add(this->RepeatPasswordLabel);
			this->Controls->Add(this->NewPasswordLabel);
			this->Controls->Add(this->OldPasswordLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"ChangeTeacherPassword";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Смена пароля";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OKButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
