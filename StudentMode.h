#pragma once

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StudentMode
	/// </summary>
	public ref class StudentMode : public System::Windows::Forms::Form
	{
	public:
		StudentMode(void)
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
		~StudentMode()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ InfoLabel;
	private: System::Windows::Forms::Button^ OpenCourseButton;
	private: System::Windows::Forms::Button^ ReturnToChoiceModeButton;
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
			this->InfoLabel = (gcnew System::Windows::Forms::Label());
			this->OpenCourseButton = (gcnew System::Windows::Forms::Button());
			this->ReturnToChoiceModeButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// InfoLabel
			// 
			this->InfoLabel->AutoSize = true;
			this->InfoLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InfoLabel->Location = System::Drawing::Point(47, 62);
			this->InfoLabel->Name = L"InfoLabel";
			this->InfoLabel->Size = System::Drawing::Size(191, 18);
			this->InfoLabel->TabIndex = 4;
			this->InfoLabel->Text = L"Режим работы: учащийся";
			// 
			// OpenCourseButton
			// 
			this->OpenCourseButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OpenCourseButton->Location = System::Drawing::Point(39, 124);
			this->OpenCourseButton->Name = L"OpenCourseButton";
			this->OpenCourseButton->Size = System::Drawing::Size(213, 38);
			this->OpenCourseButton->TabIndex = 5;
			this->OpenCourseButton->Text = L"Открыть курс";
			this->OpenCourseButton->UseVisualStyleBackColor = true;
			// 
			// ReturnToChoiceModeButton
			// 
			this->ReturnToChoiceModeButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ReturnToChoiceModeButton->Location = System::Drawing::Point(39, 168);
			this->ReturnToChoiceModeButton->Name = L"ReturnToChoiceModeButton";
			this->ReturnToChoiceModeButton->Size = System::Drawing::Size(213, 38);
			this->ReturnToChoiceModeButton->TabIndex = 6;
			this->ReturnToChoiceModeButton->Text = L"Вернуться";
			this->ReturnToChoiceModeButton->UseVisualStyleBackColor = true;
			this->ReturnToChoiceModeButton->Click += gcnew System::EventHandler(this, &StudentMode::ReturnToChoiceModeButton_Click);
			// 
			// StudentMode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->ReturnToChoiceModeButton);
			this->Controls->Add(this->OpenCourseButton);
			this->Controls->Add(this->InfoLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"StudentMode";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Режим учащегося";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReturnToChoiceModeButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
