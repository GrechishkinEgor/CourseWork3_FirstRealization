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
			this->InfoPanel->SuspendLayout();
			this->GeneralMenuStrip->SuspendLayout();
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
			this->GeneralMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�������ToolStripMenuItem });
			this->GeneralMenuStrip->Location = System::Drawing::Point(0, 0);
			this->GeneralMenuStrip->Name = L"GeneralMenuStrip";
			this->GeneralMenuStrip->Size = System::Drawing::Size(499, 24);
			this->GeneralMenuStrip->TabIndex = 1;
			this->GeneralMenuStrip->Text = L"menuStrip1";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TestView::�������ToolStripMenuItem_Click);
			// 
			// TestView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(499, 325);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		Test^ CurrentTest;	//������ �� ������� ����
#pragma endregion
	private: System::Void TestNameTextBox_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TestView_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
