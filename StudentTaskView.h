#pragma once
/*Форма отображает текущий вопрос, а пользователь на него отвечает
* Форма вызывается модально.
* При нажатии на кнопку следующего вопроса в DialogResult выставляется ОК.
* Предыдущего вопроса - Cancel.
* Завершения теста - Abort.
*/

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StudentTaskView
	/// </summary>
	public ref class StudentTaskView : public System::Windows::Forms::Form
	{
	public:
		StudentTaskView(ReadyTask^ CurrentTask, int NumTask, int TaskCount);
		

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~StudentTaskView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BackButton;
	protected:
	private: System::Windows::Forms::Button^ NextButton;
	private: System::Windows::Forms::Panel^ NextBackButtonsPanel;
	private: System::Windows::Forms::Panel^ TopPanel;

	private: System::Windows::Forms::Button^ EndTestButton;
	private: System::Windows::Forms::Label^ NumQuestionLabel;
	private: System::Windows::Forms::TextBox^ QuestionTextBox;
	private: System::Windows::Forms::DataGridView^ AnswersGridView;
	private: System::Windows::Forms::DataGridViewButtonColumn^ RightFlag;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Answers;



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
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->NextBackButtonsPanel = (gcnew System::Windows::Forms::Panel());
			this->TopPanel = (gcnew System::Windows::Forms::Panel());
			this->EndTestButton = (gcnew System::Windows::Forms::Button());
			this->NumQuestionLabel = (gcnew System::Windows::Forms::Label());
			this->QuestionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AnswersGridView = (gcnew System::Windows::Forms::DataGridView());
			this->RightFlag = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Answers = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NextBackButtonsPanel->SuspendLayout();
			this->TopPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AnswersGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// BackButton
			// 
			this->BackButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->BackButton->Location = System::Drawing::Point(12, 12);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(141, 24);
			this->BackButton->TabIndex = 0;
			this->BackButton->Text = L"Предыдущий вопрос";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &StudentTaskView::BackButton_Click);
			// 
			// NextButton
			// 
			this->NextButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->NextButton->Location = System::Drawing::Point(491, 12);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(141, 23);
			this->NextButton->TabIndex = 1;
			this->NextButton->Text = L"Следующий вопрос";
			this->NextButton->UseVisualStyleBackColor = true;
			this->NextButton->Click += gcnew System::EventHandler(this, &StudentTaskView::NextButton_Click);
			// 
			// NextBackButtonsPanel
			// 
			this->NextBackButtonsPanel->BackColor = System::Drawing::SystemColors::Info;
			this->NextBackButtonsPanel->Controls->Add(this->BackButton);
			this->NextBackButtonsPanel->Controls->Add(this->NextButton);
			this->NextBackButtonsPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->NextBackButtonsPanel->Location = System::Drawing::Point(0, 300);
			this->NextBackButtonsPanel->Name = L"NextBackButtonsPanel";
			this->NextBackButtonsPanel->Size = System::Drawing::Size(644, 48);
			this->NextBackButtonsPanel->TabIndex = 2;
			// 
			// TopPanel
			// 
			this->TopPanel->BackColor = System::Drawing::SystemColors::Info;
			this->TopPanel->Controls->Add(this->EndTestButton);
			this->TopPanel->Controls->Add(this->NumQuestionLabel);
			this->TopPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->TopPanel->Location = System::Drawing::Point(0, 0);
			this->TopPanel->Name = L"TopPanel";
			this->TopPanel->Size = System::Drawing::Size(644, 45);
			this->TopPanel->TabIndex = 3;
			// 
			// EndTestButton
			// 
			this->EndTestButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->EndTestButton->Location = System::Drawing::Point(491, 12);
			this->EndTestButton->Name = L"EndTestButton";
			this->EndTestButton->Size = System::Drawing::Size(141, 23);
			this->EndTestButton->TabIndex = 4;
			this->EndTestButton->Text = L"Завершить тест";
			this->EndTestButton->UseVisualStyleBackColor = true;
			this->EndTestButton->Click += gcnew System::EventHandler(this, &StudentTaskView::EndTestButton_Click);
			// 
			// NumQuestionLabel
			// 
			this->NumQuestionLabel->AutoSize = true;
			this->NumQuestionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->NumQuestionLabel->Location = System::Drawing::Point(12, 17);
			this->NumQuestionLabel->Name = L"NumQuestionLabel";
			this->NumQuestionLabel->Size = System::Drawing::Size(61, 16);
			this->NumQuestionLabel->TabIndex = 0;
			this->NumQuestionLabel->Text = L"Вопрос: ";
			// 
			// QuestionTextBox
			// 
			this->QuestionTextBox->Enabled = false;
			this->QuestionTextBox->Location = System::Drawing::Point(12, 51);
			this->QuestionTextBox->Multiline = true;
			this->QuestionTextBox->Name = L"QuestionTextBox";
			this->QuestionTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->QuestionTextBox->Size = System::Drawing::Size(620, 56);
			this->QuestionTextBox->TabIndex = 4;
			// 
			// AnswersGridView
			// 
			this->AnswersGridView->AllowUserToAddRows = false;
			this->AnswersGridView->AllowUserToDeleteRows = false;
			this->AnswersGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->AnswersGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->RightFlag,
					this->Answers
			});
			this->AnswersGridView->Location = System::Drawing::Point(12, 113);
			this->AnswersGridView->Name = L"AnswersGridView";
			this->AnswersGridView->ReadOnly = true;
			this->AnswersGridView->Size = System::Drawing::Size(620, 181);
			this->AnswersGridView->TabIndex = 5;
			this->AnswersGridView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentTaskView::AnswersGridView_CellClick);
			// 
			// RightFlag
			// 
			this->RightFlag->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->RightFlag->HeaderText = L"";
			this->RightFlag->Name = L"RightFlag";
			this->RightFlag->ReadOnly = true;
			this->RightFlag->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->RightFlag->Width = 50;
			// 
			// Answers
			// 
			this->Answers->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Answers->HeaderText = L"";
			this->Answers->Name = L"Answers";
			this->Answers->ReadOnly = true;
			this->Answers->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// StudentTaskView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 348);
			this->Controls->Add(this->AnswersGridView);
			this->Controls->Add(this->QuestionTextBox);
			this->Controls->Add(this->TopPanel);
			this->Controls->Add(this->NextBackButtonsPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StudentTaskView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Задание";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &StudentTaskView::StudentTaskView_FormClosed);
			this->NextBackButtonsPanel->ResumeLayout(false);
			this->TopPanel->ResumeLayout(false);
			this->TopPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AnswersGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		ReadyTask^ CurrentTask;
	private: System::Void EndTestButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void AnswersGridView_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void StudentTaskView_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
private: System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void NextButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
