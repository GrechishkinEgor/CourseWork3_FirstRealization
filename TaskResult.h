#pragma once

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TaskResult
	/// </summary>
	public ref class TaskResult : public System::Windows::Forms::Form
	{
	public:
		TaskResult(ReadyTask^ CurrentTask);
		

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TaskResult()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ InfoPanel;
	protected:
	private: System::Windows::Forms::Label^ MarkLabel;
	private: System::Windows::Forms::TextBox^ QuestionTextBox;
	private: System::Windows::Forms::DataGridView^ AnswersGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Answer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UserAnswer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RightAnswer;

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
			this->InfoPanel = (gcnew System::Windows::Forms::Panel());
			this->MarkLabel = (gcnew System::Windows::Forms::Label());
			this->QuestionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AnswersGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Answer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UserAnswer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RightAnswer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->InfoPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AnswersGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// InfoPanel
			// 
			this->InfoPanel->BackColor = System::Drawing::SystemColors::Info;
			this->InfoPanel->Controls->Add(this->MarkLabel);
			this->InfoPanel->Controls->Add(this->QuestionTextBox);
			this->InfoPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->InfoPanel->Location = System::Drawing::Point(0, 0);
			this->InfoPanel->Name = L"InfoPanel";
			this->InfoPanel->Size = System::Drawing::Size(455, 103);
			this->InfoPanel->TabIndex = 0;
			// 
			// MarkLabel
			// 
			this->MarkLabel->AutoSize = true;
			this->MarkLabel->Location = System::Drawing::Point(12, 78);
			this->MarkLabel->Name = L"MarkLabel";
			this->MarkLabel->Size = System::Drawing::Size(48, 13);
			this->MarkLabel->TabIndex = 1;
			this->MarkLabel->Text = L"Оценка:";
			// 
			// QuestionTextBox
			// 
			this->QuestionTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->QuestionTextBox->Enabled = false;
			this->QuestionTextBox->Location = System::Drawing::Point(12, 12);
			this->QuestionTextBox->Multiline = true;
			this->QuestionTextBox->Name = L"QuestionTextBox";
			this->QuestionTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->QuestionTextBox->Size = System::Drawing::Size(431, 63);
			this->QuestionTextBox->TabIndex = 0;
			// 
			// AnswersGridView
			// 
			this->AnswersGridView->AllowUserToAddRows = false;
			this->AnswersGridView->AllowUserToDeleteRows = false;
			this->AnswersGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->AnswersGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->AnswersGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Answer,
					this->UserAnswer, this->RightAnswer
			});
			this->AnswersGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AnswersGridView->Location = System::Drawing::Point(0, 103);
			this->AnswersGridView->Name = L"AnswersGridView";
			this->AnswersGridView->ReadOnly = true;
			this->AnswersGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->AnswersGridView->Size = System::Drawing::Size(455, 216);
			this->AnswersGridView->TabIndex = 1;
			// 
			// Answer
			// 
			this->Answer->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Answer->HeaderText = L"Вариант ответа";
			this->Answer->Name = L"Answer";
			this->Answer->ReadOnly = true;
			// 
			// UserAnswer
			// 
			this->UserAnswer->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->UserAnswer->HeaderText = L"Ответ учащегося";
			this->UserAnswer->Name = L"UserAnswer";
			this->UserAnswer->ReadOnly = true;
			this->UserAnswer->Width = 109;
			// 
			// RightAnswer
			// 
			this->RightAnswer->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->RightAnswer->HeaderText = L"Правильный ответ";
			this->RightAnswer->Name = L"RightAnswer";
			this->RightAnswer->ReadOnly = true;
			this->RightAnswer->Width = 116;
			// 
			// TaskResult
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 319);
			this->Controls->Add(this->AnswersGridView);
			this->Controls->Add(this->InfoPanel);
			this->Name = L"TaskResult";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Задание";
			this->InfoPanel->ResumeLayout(false);
			this->InfoPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AnswersGridView))->EndInit();
			this->ResumeLayout(false);

		}
		ReadyTask^ CurrentTask;
#pragma endregion
	};
}
