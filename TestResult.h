#pragma once

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TestResult
	/// </summary>
	public ref class TestResult : public System::Windows::Forms::Form
	{
	public:
		TestResult(ReadyTest^ CurrentTest);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TestResult()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NameTestLabel;
	protected:
	private: System::Windows::Forms::TextBox^ TestNameTextBox;
	private: System::Windows::Forms::Panel^ InfoPanel;
	private: System::Windows::Forms::DataGridView^ TasksGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Question;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Mark;
	private: System::Windows::Forms::Label^ TotalMarkLabel;

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
			this->NameTestLabel = (gcnew System::Windows::Forms::Label());
			this->TestNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->InfoPanel = (gcnew System::Windows::Forms::Panel());
			this->TasksGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Question = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Mark = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TotalMarkLabel = (gcnew System::Windows::Forms::Label());
			this->InfoPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TasksGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// NameTestLabel
			// 
			this->NameTestLabel->AutoSize = true;
			this->NameTestLabel->Location = System::Drawing::Point(12, 12);
			this->NameTestLabel->Name = L"NameTestLabel";
			this->NameTestLabel->Size = System::Drawing::Size(91, 13);
			this->NameTestLabel->TabIndex = 0;
			this->NameTestLabel->Text = L"Название теста:";
			// 
			// TestNameTextBox
			// 
			this->TestNameTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TestNameTextBox->Enabled = false;
			this->TestNameTextBox->Location = System::Drawing::Point(109, 9);
			this->TestNameTextBox->Name = L"TestNameTextBox";
			this->TestNameTextBox->Size = System::Drawing::Size(433, 20);
			this->TestNameTextBox->TabIndex = 1;
			// 
			// InfoPanel
			// 
			this->InfoPanel->BackColor = System::Drawing::SystemColors::Info;
			this->InfoPanel->Controls->Add(this->TotalMarkLabel);
			this->InfoPanel->Controls->Add(this->NameTestLabel);
			this->InfoPanel->Controls->Add(this->TestNameTextBox);
			this->InfoPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->InfoPanel->Location = System::Drawing::Point(0, 0);
			this->InfoPanel->Name = L"InfoPanel";
			this->InfoPanel->Size = System::Drawing::Size(554, 62);
			this->InfoPanel->TabIndex = 2;
			// 
			// TasksGridView
			// 
			this->TasksGridView->AllowUserToAddRows = false;
			this->TasksGridView->AllowUserToDeleteRows = false;
			this->TasksGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->TasksGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TasksGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Question,
					this->Mark
			});
			this->TasksGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TasksGridView->Location = System::Drawing::Point(0, 62);
			this->TasksGridView->Name = L"TasksGridView";
			this->TasksGridView->ReadOnly = true;
			this->TasksGridView->Size = System::Drawing::Size(554, 239);
			this->TasksGridView->TabIndex = 3;
			// 
			// Question
			// 
			this->Question->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Question->HeaderText = L"Вопрос";
			this->Question->Name = L"Question";
			this->Question->ReadOnly = true;
			// 
			// Mark
			// 
			this->Mark->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Mark->HeaderText = L"Оценка";
			this->Mark->Name = L"Mark";
			this->Mark->ReadOnly = true;
			this->Mark->Width = 70;
			// 
			// TotalMarkLabel
			// 
			this->TotalMarkLabel->AutoSize = true;
			this->TotalMarkLabel->Location = System::Drawing::Point(12, 35);
			this->TotalMarkLabel->Name = L"TotalMarkLabel";
			this->TotalMarkLabel->Size = System::Drawing::Size(149, 13);
			this->TotalMarkLabel->TabIndex = 2;
			this->TotalMarkLabel->Text = L"Процент выполнения теста:";
			// 
			// TestResult
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(554, 301);
			this->Controls->Add(this->TasksGridView);
			this->Controls->Add(this->InfoPanel);
			this->Name = L"TestResult";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Результаты теста";
			this->InfoPanel->ResumeLayout(false);
			this->InfoPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TasksGridView))->EndInit();
			this->ResumeLayout(false);

		}
		ReadyTest^ CurrentTest;
#pragma endregion
	};
}
