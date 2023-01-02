#pragma once
/*���������� ���������� � ��������� �����.
* ���� ���������� �������� �� ����� TeacherCourseView.
* � ����������� ���������� ������ �� ��������� ����.
* ���� ���� ���������, �� � DialogResult ������������ Abort.
*/
extern ref class Test;
namespace CourseWork {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� TestView
	/// </summary>
	public ref class TestView : public System::Windows::Forms::Form
	{
	
	public:
		TestView(Test^ CurrentTest);

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~TestView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ InfoPanel;
	protected:
	private: System::Windows::Forms::TextBox^ TestNameTextBox;
	private: System::Windows::Forms::Label^ TestNameLabel;

	private: System::Windows::Forms::MenuStrip^ GeneralMenuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ TasksGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TasksList;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->InfoPanel = (gcnew System::Windows::Forms::Panel());
			this->TestNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TestNameLabel = (gcnew System::Windows::Forms::Label());
			this->GeneralMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TasksGridView = (gcnew System::Windows::Forms::DataGridView());
			this->TasksList = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->InfoPanel->SuspendLayout();
			this->GeneralMenuStrip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TasksGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// InfoPanel
			// 
			this->InfoPanel->BackColor = System::Drawing::SystemColors::Info;
			this->InfoPanel->Controls->Add(this->TestNameTextBox);
			this->InfoPanel->Controls->Add(this->TestNameLabel);
			this->InfoPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->InfoPanel->Location = System::Drawing::Point(0, 24);
			this->InfoPanel->Name = L"InfoPanel";
			this->InfoPanel->Size = System::Drawing::Size(499, 36);
			this->InfoPanel->TabIndex = 0;
			// 
			// TestNameTextBox
			// 
			this->TestNameTextBox->Location = System::Drawing::Point(52, 9);
			this->TestNameTextBox->Name = L"TestNameTextBox";
			this->TestNameTextBox->Size = System::Drawing::Size(435, 20);
			this->TestNameTextBox->TabIndex = 1;
			this->TestNameTextBox->TextChanged += gcnew System::EventHandler(this, &TestView::TestNameTextBox_TextChanged);
			this->TestNameTextBox->Leave += gcnew System::EventHandler(this, &TestView::TestNameTextBox_Leave);
			// 
			// TestNameLabel
			// 
			this->TestNameLabel->AutoSize = true;
			this->TestNameLabel->Location = System::Drawing::Point(12, 9);
			this->TestNameLabel->Name = L"TestNameLabel";
			this->TestNameLabel->Size = System::Drawing::Size(34, 13);
			this->TestNameLabel->TabIndex = 0;
			this->TestNameLabel->Text = L"����:";
			// 
			// GeneralMenuStrip
			// 
			this->GeneralMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���������������ToolStripMenuItem,
					this->�������ToolStripMenuItem
			});
			this->GeneralMenuStrip->Location = System::Drawing::Point(0, 0);
			this->GeneralMenuStrip->Name = L"GeneralMenuStrip";
			this->GeneralMenuStrip->Size = System::Drawing::Size(499, 24);
			this->GeneralMenuStrip->TabIndex = 1;
			this->GeneralMenuStrip->Text = L"menuStrip1";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(88, 20);
			this->�������ToolStripMenuItem->Text = L"������� ����";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TestView::�������ToolStripMenuItem_Click);
			// 
			// TasksGridView
			// 
			this->TasksGridView->AllowUserToAddRows = false;
			this->TasksGridView->AllowUserToDeleteRows = false;
			this->TasksGridView->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->TasksGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TasksGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->TasksList });
			this->TasksGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TasksGridView->Location = System::Drawing::Point(0, 60);
			this->TasksGridView->MultiSelect = false;
			this->TasksGridView->Name = L"TasksGridView";
			this->TasksGridView->ReadOnly = true;
			this->TasksGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->TasksGridView->Size = System::Drawing::Size(499, 265);
			this->TasksGridView->TabIndex = 2;
			// 
			// TasksList
			// 
			this->TasksList->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->TasksList->HeaderText = L"�������";
			this->TasksList->Name = L"TasksList";
			this->TasksList->ReadOnly = true;
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(117, 20);
			this->���������������ToolStripMenuItem->Text = L"�������� �������";
			// 
			// TestView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(499, 325);
			this->Controls->Add(this->TasksGridView);
			this->Controls->Add(this->InfoPanel);
			this->Controls->Add(this->GeneralMenuStrip);
			this->MainMenuStrip = this->GeneralMenuStrip;
			this->Name = L"TestView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &TestView::TestView_FormClosing);
			this->InfoPanel->ResumeLayout(false);
			this->InfoPanel->PerformLayout();
			this->GeneralMenuStrip->ResumeLayout(false);
			this->GeneralMenuStrip->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TasksGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		Test^ CurrentTest;	//������ �� ������� ����
#pragma endregion
	private: System::Void TestNameTextBox_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TestView_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
private: System::Void TestNameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
