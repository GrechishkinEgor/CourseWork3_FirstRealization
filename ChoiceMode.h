#pragma once

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для ChoiceMode
	/// </summary>
	public ref class ChoiceMode : public System::Windows::Forms::Form
	{
	public:
		ChoiceMode(void)
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
		~ChoiceMode()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ TeacherModeButton;
	private: System::Windows::Forms::Button^ StudentModeButton;
	private: System::Windows::Forms::Label^ InfoLabel;
	private: System::Windows::Forms::Button^ ExitApplicationButton;
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
			this->TeacherModeButton = (gcnew System::Windows::Forms::Button());
			this->StudentModeButton = (gcnew System::Windows::Forms::Button());
			this->InfoLabel = (gcnew System::Windows::Forms::Label());
			this->ExitApplicationButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TeacherModeButton
			// 
			this->TeacherModeButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TeacherModeButton->Location = System::Drawing::Point(46, 147);
			this->TeacherModeButton->Name = L"TeacherModeButton";
			this->TeacherModeButton->Size = System::Drawing::Size(195, 38);
			this->TeacherModeButton->TabIndex = 1;
			this->TeacherModeButton->Text = L"Режим преподавателя";
			this->TeacherModeButton->UseVisualStyleBackColor = true;
			this->TeacherModeButton->Click += gcnew System::EventHandler(this, &ChoiceMode::TeacherModeButton_Click);
			// 
			// StudentModeButton
			// 
			this->StudentModeButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->StudentModeButton->Location = System::Drawing::Point(46, 103);
			this->StudentModeButton->Name = L"StudentModeButton";
			this->StudentModeButton->Size = System::Drawing::Size(195, 38);
			this->StudentModeButton->TabIndex = 0;
			this->StudentModeButton->Text = L"Режим учащегося";
			this->StudentModeButton->UseVisualStyleBackColor = true;
			this->StudentModeButton->Click += gcnew System::EventHandler(this, &ChoiceMode::StudentModeButton_Click);
			// 
			// InfoLabel
			// 
			this->InfoLabel->AutoSize = true;
			this->InfoLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InfoLabel->Location = System::Drawing::Point(55, 36);
			this->InfoLabel->Name = L"InfoLabel";
			this->InfoLabel->Size = System::Drawing::Size(177, 36);
			this->InfoLabel->TabIndex = 2;
			this->InfoLabel->Text = L"Выберите дальнейший \r\nрежим работы";
			this->InfoLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ExitApplicationButton
			// 
			this->ExitApplicationButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitApplicationButton->Location = System::Drawing::Point(46, 191);
			this->ExitApplicationButton->Name = L"ExitApplicationButton";
			this->ExitApplicationButton->Size = System::Drawing::Size(195, 38);
			this->ExitApplicationButton->TabIndex = 3;
			this->ExitApplicationButton->Text = L"Выйти из программы";
			this->ExitApplicationButton->UseVisualStyleBackColor = true;
			this->ExitApplicationButton->Click += gcnew System::EventHandler(this, &ChoiceMode::ExitApplicationButton_Click);
			// 
			// ChoiceMode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->ExitApplicationButton);
			this->Controls->Add(this->InfoLabel);
			this->Controls->Add(this->StudentModeButton);
			this->Controls->Add(this->TeacherModeButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"ChoiceMode";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Выбор режима работы";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ChoiceMode::ChoiceMode_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void StudentModeButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TeacherModeButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ExitApplicationButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ChoiceMode_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
};
}
