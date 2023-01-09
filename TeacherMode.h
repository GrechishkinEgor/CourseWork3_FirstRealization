#pragma once
/*��������� ���� ����������, ��������������� ��� ������ ������ ������.
* ����������� ��������� ��������� ��������� � ������������ CurrentApplicationContext.
* �������� ���� ��������� ��� ����������.
* ��� �������������� �������� ����� ���������� ������������ ����� Hide().
*/
namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� TeacherMode
	/// </summary>
	public ref class TeacherMode : public System::Windows::Forms::Form
	{
	public:
		TeacherMode(void)
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
		~TeacherMode()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ CreatingNewCourseButton;
	private: System::Windows::Forms::Button^ OpenCourseButton;
	private: System::Windows::Forms::Button^ ReturnToChoiceModeButton;
	private: System::Windows::Forms::Label^ InfoLabel;
	private: System::Windows::Forms::OpenFileDialog^ OpenCourseDialog;
	private: System::Windows::Forms::Button^ CheckTestButton;
	private: System::Windows::Forms::OpenFileDialog^ OpenTestDialog;
	protected:

	protected:

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
			this->CreatingNewCourseButton = (gcnew System::Windows::Forms::Button());
			this->OpenCourseButton = (gcnew System::Windows::Forms::Button());
			this->ReturnToChoiceModeButton = (gcnew System::Windows::Forms::Button());
			this->InfoLabel = (gcnew System::Windows::Forms::Label());
			this->OpenCourseDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->CheckTestButton = (gcnew System::Windows::Forms::Button());
			this->OpenTestDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// CreatingNewCourseButton
			// 
			this->CreatingNewCourseButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CreatingNewCourseButton->Location = System::Drawing::Point(37, 103);
			this->CreatingNewCourseButton->Name = L"CreatingNewCourseButton";
			this->CreatingNewCourseButton->Size = System::Drawing::Size(213, 38);
			this->CreatingNewCourseButton->TabIndex = 0;
			this->CreatingNewCourseButton->Text = L"������� ����� ����";
			this->CreatingNewCourseButton->UseVisualStyleBackColor = true;
			this->CreatingNewCourseButton->Click += gcnew System::EventHandler(this, &TeacherMode::CreatingNewCourseButton_Click);
			// 
			// OpenCourseButton
			// 
			this->OpenCourseButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OpenCourseButton->Location = System::Drawing::Point(37, 147);
			this->OpenCourseButton->Name = L"OpenCourseButton";
			this->OpenCourseButton->Size = System::Drawing::Size(213, 38);
			this->OpenCourseButton->TabIndex = 1;
			this->OpenCourseButton->Text = L"������� ������������ ����";
			this->OpenCourseButton->UseVisualStyleBackColor = true;
			this->OpenCourseButton->Click += gcnew System::EventHandler(this, &TeacherMode::OpenCourseButton_Click);
			// 
			// ReturnToChoiceModeButton
			// 
			this->ReturnToChoiceModeButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ReturnToChoiceModeButton->Location = System::Drawing::Point(37, 234);
			this->ReturnToChoiceModeButton->Name = L"ReturnToChoiceModeButton";
			this->ReturnToChoiceModeButton->Size = System::Drawing::Size(213, 38);
			this->ReturnToChoiceModeButton->TabIndex = 3;
			this->ReturnToChoiceModeButton->Text = L"���������";
			this->ReturnToChoiceModeButton->UseVisualStyleBackColor = true;
			this->ReturnToChoiceModeButton->Click += gcnew System::EventHandler(this, &TeacherMode::ReturnToChoiceModeButton_Click);
			// 
			// InfoLabel
			// 
			this->InfoLabel->AutoSize = true;
			this->InfoLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InfoLabel->Location = System::Drawing::Point(25, 57);
			this->InfoLabel->Name = L"InfoLabel";
			this->InfoLabel->Size = System::Drawing::Size(234, 18);
			this->InfoLabel->TabIndex = 3;
			this->InfoLabel->Text = L"����� ������: �������������";
			// 
			// OpenCourseDialog
			// 
			this->OpenCourseDialog->Filter = L"�����|*.course";
			// 
			// CheckTestButton
			// 
			this->CheckTestButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CheckTestButton->Location = System::Drawing::Point(37, 190);
			this->CheckTestButton->Name = L"CheckTestButton";
			this->CheckTestButton->Size = System::Drawing::Size(213, 38);
			this->CheckTestButton->TabIndex = 2;
			this->CheckTestButton->Text = L"���������� ���������� �����";
			this->CheckTestButton->UseVisualStyleBackColor = true;
			this->CheckTestButton->Click += gcnew System::EventHandler(this, &TeacherMode::CheckTestButton_Click);
			// 
			// OpenTestDialog
			// 
			this->OpenTestDialog->Filter = L"�����|*.test";
			// 
			// TeacherMode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 307);
			this->Controls->Add(this->CheckTestButton);
			this->Controls->Add(this->InfoLabel);
			this->Controls->Add(this->ReturnToChoiceModeButton);
			this->Controls->Add(this->OpenCourseButton);
			this->Controls->Add(this->CreatingNewCourseButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"TeacherMode";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����� �������������";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &TeacherMode::TeacherMode_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReturnToChoiceModeButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CreatingNewCourseButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TeacherMode_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
private: System::Void OpenCourseButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CheckTestButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
