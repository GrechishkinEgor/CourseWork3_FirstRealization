#pragma once
/*Создает или изменяет задание теста.
* Форма вызывается модально из TestView.
* В конструктор формы передается ссылка на задание.
* Если все поля формы заполнены верно и нажата кнопка ОК, в DialogResult выставляется OK
*/
extern ref class CourseWork::Task;
namespace CourseWork {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Сводка для EditChoiceFewAnswer
	/// </summary>
	public ref class EditChoiceFewAnswer : public System::Windows::Forms::Form
	{
	public:
		EditChoiceFewAnswer(Task^ CurrentTask);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EditChoiceFewAnswer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ QuestionPanel;
	private: System::Windows::Forms::CheckBox^ RandomOrderOfAnswersCheckBox;

	protected:

	private: System::Windows::Forms::TextBox^ QuestionTextBox;
	private: System::Windows::Forms::Button^ OKButton;
	private: System::Windows::Forms::DataGridView^ AnswersGridView;

	private: System::Windows::Forms::TextBox^ TotalMarkTextBox;
	private: System::Windows::Forms::Label^ TotalMark;


	private: System::Windows::Forms::TextBox^ ExecutionTimeTextBox;

	private: System::Windows::Forms::Label^ ExecutionTimeLabel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Answer;
	private: System::Windows::Forms::DataGridViewButtonColumn^ IsRight;
















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
			this->QuestionPanel = (gcnew System::Windows::Forms::Panel());
			this->ExecutionTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ExecutionTimeLabel = (gcnew System::Windows::Forms::Label());
			this->TotalMarkTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TotalMark = (gcnew System::Windows::Forms::Label());
			this->RandomOrderOfAnswersCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->QuestionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->OKButton = (gcnew System::Windows::Forms::Button());
			this->AnswersGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Answer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IsRight = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->QuestionPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AnswersGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// QuestionPanel
			// 
			this->QuestionPanel->BackColor = System::Drawing::SystemColors::Info;
			this->QuestionPanel->Controls->Add(this->ExecutionTimeTextBox);
			this->QuestionPanel->Controls->Add(this->ExecutionTimeLabel);
			this->QuestionPanel->Controls->Add(this->TotalMarkTextBox);
			this->QuestionPanel->Controls->Add(this->TotalMark);
			this->QuestionPanel->Controls->Add(this->RandomOrderOfAnswersCheckBox);
			this->QuestionPanel->Controls->Add(this->QuestionTextBox);
			this->QuestionPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->QuestionPanel->Location = System::Drawing::Point(0, 0);
			this->QuestionPanel->Name = L"QuestionPanel";
			this->QuestionPanel->Size = System::Drawing::Size(484, 145);
			this->QuestionPanel->TabIndex = 0;
			// 
			// ExecutionTimeTextBox
			// 
			this->ExecutionTimeTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ExecutionTimeTextBox->Location = System::Drawing::Point(403, 99);
			this->ExecutionTimeTextBox->MaxLength = 4;
			this->ExecutionTimeTextBox->Name = L"ExecutionTimeTextBox";
			this->ExecutionTimeTextBox->Size = System::Drawing::Size(69, 20);
			this->ExecutionTimeTextBox->TabIndex = 6;
			// 
			// ExecutionTimeLabel
			// 
			this->ExecutionTimeLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ExecutionTimeLabel->AutoSize = true;
			this->ExecutionTimeLabel->Location = System::Drawing::Point(235, 102);
			this->ExecutionTimeLabel->Name = L"ExecutionTimeLabel";
			this->ExecutionTimeLabel->Size = System::Drawing::Size(165, 13);
			this->ExecutionTimeLabel->TabIndex = 5;
			this->ExecutionTimeLabel->Text = L"Ограничение по времени (сек):";
			// 
			// TotalMarkTextBox
			// 
			this->TotalMarkTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->TotalMarkTextBox->Location = System::Drawing::Point(403, 69);
			this->TotalMarkTextBox->MaxLength = 4;
			this->TotalMarkTextBox->Name = L"TotalMarkTextBox";
			this->TotalMarkTextBox->Size = System::Drawing::Size(69, 20);
			this->TotalMarkTextBox->TabIndex = 4;
			// 
			// TotalMark
			// 
			this->TotalMark->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->TotalMark->AutoSize = true;
			this->TotalMark->Location = System::Drawing::Point(260, 72);
			this->TotalMark->Name = L"TotalMark";
			this->TotalMark->Size = System::Drawing::Size(137, 13);
			this->TotalMark->TabIndex = 3;
			this->TotalMark->Text = L"Полный балл за задание:";
			// 
			// RandomOrderOfAnswersCheckBox
			// 
			this->RandomOrderOfAnswersCheckBox->AutoSize = true;
			this->RandomOrderOfAnswersCheckBox->Location = System::Drawing::Point(12, 69);
			this->RandomOrderOfAnswersCheckBox->Name = L"RandomOrderOfAnswersCheckBox";
			this->RandomOrderOfAnswersCheckBox->Size = System::Drawing::Size(209, 17);
			this->RandomOrderOfAnswersCheckBox->TabIndex = 1;
			this->RandomOrderOfAnswersCheckBox->Text = L"Случайный порядок ответов в тесте";
			this->RandomOrderOfAnswersCheckBox->UseVisualStyleBackColor = true;
			// 
			// QuestionTextBox
			// 
			this->QuestionTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->QuestionTextBox->Location = System::Drawing::Point(12, 12);
			this->QuestionTextBox->Multiline = true;
			this->QuestionTextBox->Name = L"QuestionTextBox";
			this->QuestionTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->QuestionTextBox->Size = System::Drawing::Size(460, 51);
			this->QuestionTextBox->TabIndex = 0;
			// 
			// OKButton
			// 
			this->OKButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->OKButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->OKButton->Location = System::Drawing::Point(143, 324);
			this->OKButton->MinimumSize = System::Drawing::Size(200, 0);
			this->OKButton->Name = L"OKButton";
			this->OKButton->Size = System::Drawing::Size(204, 25);
			this->OKButton->TabIndex = 1;
			this->OKButton->Text = L"ОК";
			this->OKButton->UseVisualStyleBackColor = true;
			this->OKButton->Click += gcnew System::EventHandler(this, &EditChoiceFewAnswer::OKButton_Click);
			// 
			// AnswersGridView
			// 
			this->AnswersGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->AnswersGridView->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->AnswersGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->AnswersGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Answer,
					this->IsRight
			});
			this->AnswersGridView->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->AnswersGridView->Location = System::Drawing::Point(0, 143);
			this->AnswersGridView->MultiSelect = false;
			this->AnswersGridView->Name = L"AnswersGridView";
			this->AnswersGridView->Size = System::Drawing::Size(484, 164);
			this->AnswersGridView->TabIndex = 2;
			this->AnswersGridView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EditChoiceFewAnswer::AnswersGridView_CellClick);
			// 
			// Answer
			// 
			this->Answer->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Answer->HeaderText = L"Ответ";
			this->Answer->Name = L"Answer";
			// 
			// IsRight
			// 
			this->IsRight->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->IsRight->HeaderText = L"Правильность";
			this->IsRight->Name = L"IsRight";
			this->IsRight->Text = L"Неправильный";
			this->IsRight->Width = 86;
			// 
			// EditChoiceFewAnswer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 361);
			this->Controls->Add(this->AnswersGridView);
			this->Controls->Add(this->OKButton);
			this->Controls->Add(this->QuestionPanel);
			this->MinimumSize = System::Drawing::Size(500, 400);
			this->Name = L"EditChoiceFewAnswer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Выбор нескольких ответов";
			this->QuestionPanel->ResumeLayout(false);
			this->QuestionPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AnswersGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Task^ CurrentTask;
private: System::Void OKButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void AnswersGridView_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
