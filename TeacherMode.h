#pragma once

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TeacherMode
	/// </summary>
	public ref class TeacherMode : public System::Windows::Forms::Form
	{
	public:
		TeacherMode(void)
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
		~TeacherMode()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ CreatingNewCourseButton;
	private: System::Windows::Forms::Button^ OpenCourseButton;
	private: System::Windows::Forms::Button^ ReturnToChoiceModeButton;
	private: System::Windows::Forms::Label^ InfoLabel;
	protected:

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
			this->CreatingNewCourseButton = (gcnew System::Windows::Forms::Button());
			this->OpenCourseButton = (gcnew System::Windows::Forms::Button());
			this->ReturnToChoiceModeButton = (gcnew System::Windows::Forms::Button());
			this->InfoLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// CreatingNewCourseButton
			// 
			this->CreatingNewCourseButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CreatingNewCourseButton->Location = System::Drawing::Point(37, 103);
			this->CreatingNewCourseButton->Name = L"CreatingNewCourseButton";
			this->CreatingNewCourseButton->Size = System::Drawing::Size(213, 38);
			this->CreatingNewCourseButton->TabIndex = 0;
			this->CreatingNewCourseButton->Text = L"Создать новый курс";
			this->CreatingNewCourseButton->UseVisualStyleBackColor = true;
			this->CreatingNewCourseButton->Click += gcnew System::EventHandler(this, &TeacherMode::CreatingNewCourseButton_Click);
			// 
			// OpenCourseButton
			// 
			this->OpenCourseButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OpenCourseButton->Location = System::Drawing::Point(37, 147);
			this->OpenCourseButton->Name = L"OpenCourseButton";
			this->OpenCourseButton->Size = System::Drawing::Size(213, 38);
			this->OpenCourseButton->TabIndex = 1;
			this->OpenCourseButton->Text = L"Открыть существующий курс";
			this->OpenCourseButton->UseVisualStyleBackColor = true;
			// 
			// ReturnToChoiceModeButton
			// 
			this->ReturnToChoiceModeButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ReturnToChoiceModeButton->Location = System::Drawing::Point(37, 191);
			this->ReturnToChoiceModeButton->Name = L"ReturnToChoiceModeButton";
			this->ReturnToChoiceModeButton->Size = System::Drawing::Size(213, 38);
			this->ReturnToChoiceModeButton->TabIndex = 2;
			this->ReturnToChoiceModeButton->Text = L"Вернуться";
			this->ReturnToChoiceModeButton->UseVisualStyleBackColor = true;
			this->ReturnToChoiceModeButton->Click += gcnew System::EventHandler(this, &TeacherMode::ReturnToChoiceModeButton_Click);
			// 
			// InfoLabel
			// 
			this->InfoLabel->AutoSize = true;
			this->InfoLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InfoLabel->Location = System::Drawing::Point(25, 57);
			this->InfoLabel->Name = L"InfoLabel";
			this->InfoLabel->Size = System::Drawing::Size(234, 18);
			this->InfoLabel->TabIndex = 3;
			this->InfoLabel->Text = L"Режим работы: преподаватель";
			// 
			// TeacherMode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->InfoLabel);
			this->Controls->Add(this->ReturnToChoiceModeButton);
			this->Controls->Add(this->OpenCourseButton);
			this->Controls->Add(this->CreatingNewCourseButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"TeacherMode";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Режим преподавателя";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &TeacherMode::TeacherMode_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReturnToChoiceModeButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CreatingNewCourseButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TeacherMode_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
