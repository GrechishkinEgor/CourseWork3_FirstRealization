#pragma once
/*Данная форма создает новый тест в текущем курсе.
* Вызывается как модальное окно из формы TeacherCourseView.
* При каждом показе создается новый экземпляр.
* При успешном добавлении теста в курс в свойстве DialogResult выставляет ОК и форма закрывается.
*/
namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CreatingNewTest
	/// </summary>
	public ref class CreatingNewTest : public System::Windows::Forms::Form
	{
	public:
		CreatingNewTest(void)
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
		~CreatingNewTest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GeneralGroupBox;
	protected:
	private: System::Windows::Forms::TextBox^ TestNameTextBox;
	private: System::Windows::Forms::Label^ TestNameLabel;
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
			this->GeneralGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->TestNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TestNameLabel = (gcnew System::Windows::Forms::Label());
			this->OKButton = (gcnew System::Windows::Forms::Button());
			this->GeneralGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// GeneralGroupBox
			// 
			this->GeneralGroupBox->Controls->Add(this->TestNameTextBox);
			this->GeneralGroupBox->Controls->Add(this->TestNameLabel);
			this->GeneralGroupBox->Location = System::Drawing::Point(12, 12);
			this->GeneralGroupBox->Name = L"GeneralGroupBox";
			this->GeneralGroupBox->Size = System::Drawing::Size(332, 73);
			this->GeneralGroupBox->TabIndex = 0;
			this->GeneralGroupBox->TabStop = false;
			this->GeneralGroupBox->Text = L"Основное";
			// 
			// TestNameTextBox
			// 
			this->TestNameTextBox->Location = System::Drawing::Point(103, 25);
			this->TestNameTextBox->MaxLength = 256;
			this->TestNameTextBox->Name = L"TestNameTextBox";
			this->TestNameTextBox->Size = System::Drawing::Size(223, 20);
			this->TestNameTextBox->TabIndex = 1;
			// 
			// TestNameLabel
			// 
			this->TestNameLabel->AutoSize = true;
			this->TestNameLabel->Location = System::Drawing::Point(6, 25);
			this->TestNameLabel->Name = L"TestNameLabel";
			this->TestNameLabel->Size = System::Drawing::Size(91, 13);
			this->TestNameLabel->TabIndex = 0;
			this->TestNameLabel->Text = L"Название теста:";
			// 
			// OKButton
			// 
			this->OKButton->Location = System::Drawing::Point(142, 206);
			this->OKButton->Name = L"OKButton";
			this->OKButton->Size = System::Drawing::Size(82, 24);
			this->OKButton->TabIndex = 1;
			this->OKButton->Text = L"ОК";
			this->OKButton->UseVisualStyleBackColor = true;
			this->OKButton->Click += gcnew System::EventHandler(this, &CreatingNewTest::OKButton_Click);
			// 
			// CreatingNewTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 263);
			this->Controls->Add(this->OKButton);
			this->Controls->Add(this->GeneralGroupBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"CreatingNewTest";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Новый тест";
			this->GeneralGroupBox->ResumeLayout(false);
			this->GeneralGroupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void OKButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
