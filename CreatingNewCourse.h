#pragma once

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CreatingNewCourse
	/// </summary>
	public ref class CreatingNewCourse : public System::Windows::Forms::Form
	{
	public:
		CreatingNewCourse(void)
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
		~CreatingNewCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ CourseNameLabel;
	protected:
	private: System::Windows::Forms::TextBox^ CourseNameTextBox;
	private: System::Windows::Forms::Label^ TeacherNameLabel;
	private: System::Windows::Forms::TextBox^ TeacherNameTextBox;
	private: System::Windows::Forms::Label^ TeacherPasswordLabel;
	private: System::Windows::Forms::TextBox^ TeacherPasswordTextBox;
	private: System::Windows::Forms::GroupBox^ GeneralGroupBox;
	private: System::Windows::Forms::Button^ OKButton;
	private: System::Windows::Forms::Button^ CancelButton;

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
			this->CourseNameLabel = (gcnew System::Windows::Forms::Label());
			this->CourseNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TeacherNameLabel = (gcnew System::Windows::Forms::Label());
			this->TeacherNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TeacherPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->TeacherPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->GeneralGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->OKButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->GeneralGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// CourseNameLabel
			// 
			this->CourseNameLabel->AutoSize = true;
			this->CourseNameLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CourseNameLabel->Location = System::Drawing::Point(2, 27);
			this->CourseNameLabel->Name = L"CourseNameLabel";
			this->CourseNameLabel->Size = System::Drawing::Size(106, 16);
			this->CourseNameLabel->TabIndex = 0;
			this->CourseNameLabel->Text = L"Название курса:";
			// 
			// CourseNameTextBox
			// 
			this->CourseNameTextBox->Location = System::Drawing::Point(157, 27);
			this->CourseNameTextBox->MaxLength = 256;
			this->CourseNameTextBox->Name = L"CourseNameTextBox";
			this->CourseNameTextBox->Size = System::Drawing::Size(273, 20);
			this->CourseNameTextBox->TabIndex = 1;
			// 
			// TeacherNameLabel
			// 
			this->TeacherNameLabel->AutoSize = true;
			this->TeacherNameLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TeacherNameLabel->Location = System::Drawing::Point(2, 53);
			this->TeacherNameLabel->Name = L"TeacherNameLabel";
			this->TeacherNameLabel->Size = System::Drawing::Size(130, 16);
			this->TeacherNameLabel->TabIndex = 2;
			this->TeacherNameLabel->Text = L"Имя преподавателя:";
			// 
			// TeacherNameTextBox
			// 
			this->TeacherNameTextBox->Location = System::Drawing::Point(157, 53);
			this->TeacherNameTextBox->MaxLength = 256;
			this->TeacherNameTextBox->Name = L"TeacherNameTextBox";
			this->TeacherNameTextBox->Size = System::Drawing::Size(273, 20);
			this->TeacherNameTextBox->TabIndex = 3;
			// 
			// TeacherPasswordLabel
			// 
			this->TeacherPasswordLabel->AutoSize = true;
			this->TeacherPasswordLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TeacherPasswordLabel->Location = System::Drawing::Point(2, 79);
			this->TeacherPasswordLabel->Name = L"TeacherPasswordLabel";
			this->TeacherPasswordLabel->Size = System::Drawing::Size(149, 16);
			this->TeacherPasswordLabel->TabIndex = 4;
			this->TeacherPasswordLabel->Text = L"Пароль преподавателя:";
			// 
			// TeacherPasswordTextBox
			// 
			this->TeacherPasswordTextBox->Location = System::Drawing::Point(157, 79);
			this->TeacherPasswordTextBox->MaxLength = 64;
			this->TeacherPasswordTextBox->Name = L"TeacherPasswordTextBox";
			this->TeacherPasswordTextBox->PasswordChar = '*';
			this->TeacherPasswordTextBox->Size = System::Drawing::Size(273, 20);
			this->TeacherPasswordTextBox->TabIndex = 5;
			// 
			// GeneralGroupBox
			// 
			this->GeneralGroupBox->Controls->Add(this->TeacherPasswordTextBox);
			this->GeneralGroupBox->Controls->Add(this->TeacherPasswordLabel);
			this->GeneralGroupBox->Controls->Add(this->TeacherNameTextBox);
			this->GeneralGroupBox->Controls->Add(this->TeacherNameLabel);
			this->GeneralGroupBox->Controls->Add(this->CourseNameTextBox);
			this->GeneralGroupBox->Controls->Add(this->CourseNameLabel);
			this->GeneralGroupBox->Location = System::Drawing::Point(29, 25);
			this->GeneralGroupBox->Name = L"GeneralGroupBox";
			this->GeneralGroupBox->Size = System::Drawing::Size(444, 112);
			this->GeneralGroupBox->TabIndex = 6;
			this->GeneralGroupBox->TabStop = false;
			this->GeneralGroupBox->Text = L"Основная информация";
			// 
			// OKButton
			// 
			this->OKButton->Location = System::Drawing::Point(135, 275);
			this->OKButton->Name = L"OKButton";
			this->OKButton->Size = System::Drawing::Size(121, 21);
			this->OKButton->TabIndex = 7;
			this->OKButton->Text = L"ОК";
			this->OKButton->UseVisualStyleBackColor = true;
			this->OKButton->Click += gcnew System::EventHandler(this, &CreatingNewCourse::OKButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Location = System::Drawing::Point(262, 275);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(121, 21);
			this->CancelButton->TabIndex = 8;
			this->CancelButton->Text = L"Отмена";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &CreatingNewCourse::CancelButton_Click);
			// 
			// CreatingNewCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 325);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->OKButton);
			this->Controls->Add(this->GeneralGroupBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"CreatingNewCourse";
			this->Text = L"Создание нового курса";
			this->GeneralGroupBox->ResumeLayout(false);
			this->GeneralGroupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void OKButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
