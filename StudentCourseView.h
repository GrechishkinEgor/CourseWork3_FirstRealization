#pragma once
/*����� ���������� ���� ��� ��������. �������� ���� ��� ��������
* ��� ������ ����� ������ ����� ShowOnlyStudentCourseViewWin() ��������� ����� ���������
* ������ ����, ��������� � ������� ��������, ������������ ��������.
*/
namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� StudentCourseView
	/// </summary>
	public ref class StudentCourseView : public System::Windows::Forms::Form
	{
	public:
		StudentCourseView(void)
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
		~StudentCourseView()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// StudentCourseView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"StudentCourseView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentCourseView";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &StudentCourseView::StudentCourseView_FormClosing);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StudentCourseView_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	};
}
