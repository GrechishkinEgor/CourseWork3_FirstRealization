#pragma once
/*Отображает настройки открытого в данный момент курса (экземпляр курса хранится CurrentApplicationContext).
* Данное окно вызывается как модальное из формы TeacherCourseView.
* Каждый новый показ данного окна должен происходить через создание нового экземпляра, т.к. данные по курсу загружаются в конструкторе формы.
* Если курс находится в разработке, то в форме есть возможность редактирования настроек.
* Нажатие на кнопку ОК сохранит настройки, указанные в данной форме, если курс в разработке.
* В любых других случаях сохранения не происходит.
* Нажатие на кнопку ОК закрывает окно через метод Close().
*/
namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CourseSettings
	/// </summary>
	public ref class CourseSettings : public System::Windows::Forms::Form
	{
	public:
		CourseSettings(void);
		

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CourseSettings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ CourseNameLabel;
	private: System::Windows::Forms::TextBox^ CourseNameTextBox;
	private: System::Windows::Forms::Label^ TeacherNameLabel;
	private: System::Windows::Forms::TextBox^ TeacherNameTextBox;
	private: System::Windows::Forms::Button^ OKButton;
	protected:

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
			this->OKButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// CourseNameLabel
			// 
			this->CourseNameLabel->AutoSize = true;
			this->CourseNameLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CourseNameLabel->Location = System::Drawing::Point(28, 27);
			this->CourseNameLabel->Name = L"CourseNameLabel";
			this->CourseNameLabel->Size = System::Drawing::Size(106, 16);
			this->CourseNameLabel->TabIndex = 1;
			this->CourseNameLabel->Text = L"Название курса:";
			// 
			// CourseNameTextBox
			// 
			this->CourseNameTextBox->Location = System::Drawing::Point(171, 27);
			this->CourseNameTextBox->MaxLength = 256;
			this->CourseNameTextBox->Name = L"CourseNameTextBox";
			this->CourseNameTextBox->Size = System::Drawing::Size(273, 20);
			this->CourseNameTextBox->TabIndex = 2;
			// 
			// TeacherNameLabel
			// 
			this->TeacherNameLabel->AutoSize = true;
			this->TeacherNameLabel->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TeacherNameLabel->Location = System::Drawing::Point(28, 53);
			this->TeacherNameLabel->Name = L"TeacherNameLabel";
			this->TeacherNameLabel->Size = System::Drawing::Size(130, 16);
			this->TeacherNameLabel->TabIndex = 3;
			this->TeacherNameLabel->Text = L"Имя преподавателя:";
			// 
			// TeacherNameTextBox
			// 
			this->TeacherNameTextBox->Location = System::Drawing::Point(171, 53);
			this->TeacherNameTextBox->MaxLength = 256;
			this->TeacherNameTextBox->Name = L"TeacherNameTextBox";
			this->TeacherNameTextBox->Size = System::Drawing::Size(273, 20);
			this->TeacherNameTextBox->TabIndex = 4;
			// 
			// OKButton
			// 
			this->OKButton->Location = System::Drawing::Point(182, 225);
			this->OKButton->Name = L"OKButton";
			this->OKButton->Size = System::Drawing::Size(116, 26);
			this->OKButton->TabIndex = 5;
			this->OKButton->Text = L"OK";
			this->OKButton->UseVisualStyleBackColor = true;
			this->OKButton->Click += gcnew System::EventHandler(this, &CourseSettings::OKButton_Click);
			// 
			// CourseSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(475, 274);
			this->Controls->Add(this->OKButton);
			this->Controls->Add(this->TeacherNameTextBox);
			this->Controls->Add(this->TeacherNameLabel);
			this->Controls->Add(this->CourseNameTextBox);
			this->Controls->Add(this->CourseNameLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"CourseSettings";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Настройки курса";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OKButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
