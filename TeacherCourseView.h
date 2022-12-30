#pragma once
/*�������� ���� ���������� � ������ �������������.
* ������������� ��� �������������� �������� ����� ��� ��������� ����������� ������
* ��� ������ ����� ������ ��������� ����� ��������� �����
* ����, ������������ �� �������, ���������� � ���� ��������� - ����� ����� ShowDialog
*/
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
	private: System::Windows::Forms::SaveFileDialog^ SaveCourseDialog;




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
			this->SaveCourseDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->GeneralMenuStrip->SuspendLayout();
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
			this->GeneralMenuStrip->Size = System::Drawing::Size(688, 24);
			this->GeneralMenuStrip->TabIndex = 0;
			this->GeneralMenuStrip->Text = L"menuStrip1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(78, 20);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TeacherCourseView::���������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->������������ToolStripMenuItem->Text = L"��������� ���...";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TeacherCourseView::������������ToolStripMenuItem_Click);
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
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TeacherCourseView::��������������ToolStripMenuItem_Click);
			// 
			// SaveCourseDialog
			// 
			this->SaveCourseDialog->DefaultExt = L"course;";
			this->SaveCourseDialog->Filter = L"�����|*.course";
			// 
			// TeacherCourseView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 364);
			this->Controls->Add(this->GeneralMenuStrip);
			this->MainMenuStrip = this->GeneralMenuStrip;
			this->Name = L"TeacherCourseView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����� �������������";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &TeacherCourseView::TeacherCourseView_FormClosing);
			this->GeneralMenuStrip->ResumeLayout(false);
			this->GeneralMenuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TeacherCourseView_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
