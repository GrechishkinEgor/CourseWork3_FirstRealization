#pragma once

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� TeacherCourseView
	/// </summary>
	public ref class TeacherCourseView : public System::Windows::Forms::Form
	{
	public:
		TeacherCourseView(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~TeacherCourseView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ GeneralMenuStrip;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::Panel^ GeneralInfoPanel;
	private: System::Windows::Forms::TextBox^ CourseNameTextBox;
	private: System::Windows::Forms::Label^ CourseNameLabel;

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
			this->GeneralMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GeneralInfoPanel = (gcnew System::Windows::Forms::Panel());
			this->CourseNameLabel = (gcnew System::Windows::Forms::Label());
			this->CourseNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->GeneralMenuStrip->SuspendLayout();
			this->GeneralInfoPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// GeneralMenuStrip
			// 
			this->GeneralMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->���������ToolStripMenuItem,
					this->������������ToolStripMenuItem, this->���������ToolStripMenuItem, this->��������������ToolStripMenuItem
			});
			this->GeneralMenuStrip->Location = System::Drawing::Point(0, 0);
			this->GeneralMenuStrip->Name = L"GeneralMenuStrip";
			this->GeneralMenuStrip->Size = System::Drawing::Size(647, 24);
			this->GeneralMenuStrip->TabIndex = 0;
			this->GeneralMenuStrip->Text = L"menuStrip1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(78, 20);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->������������ToolStripMenuItem->Text = L"��������� ���...";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->���������ToolStripMenuItem->Text = L"����� ����";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(113, 20);
			this->��������������ToolStripMenuItem->Text = L"��������� �����";
			// 
			// GeneralInfoPanel
			// 
			this->GeneralInfoPanel->BackColor = System::Drawing::SystemColors::Info;
			this->GeneralInfoPanel->Controls->Add(this->CourseNameTextBox);
			this->GeneralInfoPanel->Controls->Add(this->CourseNameLabel);
			this->GeneralInfoPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->GeneralInfoPanel->Location = System::Drawing::Point(0, 24);
			this->GeneralInfoPanel->Name = L"GeneralInfoPanel";
			this->GeneralInfoPanel->Size = System::Drawing::Size(647, 44);
			this->GeneralInfoPanel->TabIndex = 1;
			// 
			// CourseNameLabel
			// 
			this->CourseNameLabel->AutoSize = true;
			this->CourseNameLabel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CourseNameLabel->Location = System::Drawing::Point(3, 9);
			this->CourseNameLabel->Name = L"CourseNameLabel";
			this->CourseNameLabel->Size = System::Drawing::Size(114, 20);
			this->CourseNameLabel->TabIndex = 0;
			this->CourseNameLabel->Text = L"�������� �����: ";
			// 
			// CourseNameTextBox
			// 
			this->CourseNameTextBox->Enabled = false;
			this->CourseNameTextBox->Location = System::Drawing::Point(123, 9);
			this->CourseNameTextBox->Name = L"CourseNameTextBox";
			this->CourseNameTextBox->Size = System::Drawing::Size(512, 20);
			this->CourseNameTextBox->TabIndex = 1;
			// 
			// TeacherCourseView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 340);
			this->Controls->Add(this->GeneralInfoPanel);
			this->Controls->Add(this->GeneralMenuStrip);
			this->MainMenuStrip = this->GeneralMenuStrip;
			this->Name = L"TeacherCourseView";
			this->Text = L"����� �������������";
			this->GeneralMenuStrip->ResumeLayout(false);
			this->GeneralMenuStrip->PerformLayout();
			this->GeneralInfoPanel->ResumeLayout(false);
			this->GeneralInfoPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
