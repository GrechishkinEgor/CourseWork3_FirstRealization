#pragma once
/*Форма отображает курс для учащихся. Основное окно для учащихся
* При каждом новом показе через ShowOnlyStudentCourseViewWin() создается новый экземпляр
* Прочие окна, связанные с работой учащихся, показываются модально.
*/
namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StudentCourseView
	/// </summary>
	public ref class StudentCourseView : public System::Windows::Forms::Form
	{
	public:
		StudentCourseView(void);
		

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~StudentCourseView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ InfoPanel;
	protected:
	private: System::Windows::Forms::TextBox^ CourseNameTextBox;
	private: System::Windows::Forms::Label^ CourseNameLabel;
	private: System::Windows::Forms::DataGridView^ TestsDataGridView;


	private: System::Windows::Forms::Button^ ExitCourseButton;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TestName;

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
			this->ExitCourseButton = (gcnew System::Windows::Forms::Button());
			this->CourseNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CourseNameLabel = (gcnew System::Windows::Forms::Label());
			this->TestsDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TestName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->InfoPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TestsDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// InfoPanel
			// 
			this->InfoPanel->BackColor = System::Drawing::SystemColors::Info;
			this->InfoPanel->Controls->Add(this->ExitCourseButton);
			this->InfoPanel->Controls->Add(this->CourseNameTextBox);
			this->InfoPanel->Controls->Add(this->CourseNameLabel);
			this->InfoPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->InfoPanel->Location = System::Drawing::Point(0, 0);
			this->InfoPanel->Name = L"InfoPanel";
			this->InfoPanel->Size = System::Drawing::Size(670, 35);
			this->InfoPanel->TabIndex = 0;
			// 
			// ExitCourseButton
			// 
			this->ExitCourseButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ExitCourseButton->Location = System::Drawing::Point(553, 6);
			this->ExitCourseButton->Name = L"ExitCourseButton";
			this->ExitCourseButton->Size = System::Drawing::Size(105, 23);
			this->ExitCourseButton->TabIndex = 2;
			this->ExitCourseButton->Text = L"Выйти из курса";
			this->ExitCourseButton->UseVisualStyleBackColor = true;
			this->ExitCourseButton->Click += gcnew System::EventHandler(this, &StudentCourseView::ExitCourseButton_Click);
			// 
			// CourseNameTextBox
			// 
			this->CourseNameTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CourseNameTextBox->Enabled = false;
			this->CourseNameTextBox->Location = System::Drawing::Point(52, 6);
			this->CourseNameTextBox->Name = L"CourseNameTextBox";
			this->CourseNameTextBox->Size = System::Drawing::Size(495, 20);
			this->CourseNameTextBox->TabIndex = 1;
			// 
			// CourseNameLabel
			// 
			this->CourseNameLabel->AutoSize = true;
			this->CourseNameLabel->Location = System::Drawing::Point(12, 9);
			this->CourseNameLabel->Name = L"CourseNameLabel";
			this->CourseNameLabel->Size = System::Drawing::Size(34, 13);
			this->CourseNameLabel->TabIndex = 0;
			this->CourseNameLabel->Text = L"Курс:";
			// 
			// TestsDataGridView
			// 
			this->TestsDataGridView->AllowUserToAddRows = false;
			this->TestsDataGridView->AllowUserToDeleteRows = false;
			this->TestsDataGridView->AllowUserToResizeColumns = false;
			this->TestsDataGridView->AllowUserToResizeRows = false;
			this->TestsDataGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->TestsDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TestsDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->ID,
					this->TestName
			});
			this->TestsDataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TestsDataGridView->GridColor = System::Drawing::SystemColors::ActiveBorder;
			this->TestsDataGridView->Location = System::Drawing::Point(0, 35);
			this->TestsDataGridView->MultiSelect = false;
			this->TestsDataGridView->Name = L"TestsDataGridView";
			this->TestsDataGridView->ReadOnly = true;
			this->TestsDataGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->TestsDataGridView->Size = System::Drawing::Size(670, 309);
			this->TestsDataGridView->TabIndex = 2;
			this->TestsDataGridView->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentCourseView::TestsDataGridView_CellDoubleClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Visible = false;
			// 
			// TestName
			// 
			this->TestName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->TestName->HeaderText = L"Название теста";
			this->TestName->Name = L"TestName";
			this->TestName->ReadOnly = true;
			// 
			// StudentCourseView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(670, 344);
			this->Controls->Add(this->TestsDataGridView);
			this->Controls->Add(this->InfoPanel);
			this->Name = L"StudentCourseView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Режим учащегося";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &StudentCourseView::StudentCourseView_FormClosing);
			this->InfoPanel->ResumeLayout(false);
			this->InfoPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TestsDataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StudentCourseView_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void TestsDataGridView_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void ExitCourseButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
