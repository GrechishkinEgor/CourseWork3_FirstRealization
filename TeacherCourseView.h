#pragma once
/*Основное окно приложения в режиме преподавателя.
* Предназначено для редактирования текущего курса или просмотра результатов тестов
* При каждом новом показе создается новый экземпляр формы
* Окна, вызывающиеся из данного, вызываются в виде модальных - через метод ShowDialog
*/
namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TeacherCourseView
	/// </summary>
	public ref class TeacherCourseView : public System::Windows::Forms::Form
	{
	public:
		TeacherCourseView(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ новыйТестToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкиКурсаToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ SaveCourseDialog;
	private: System::Windows::Forms::DataGridView^ TestsDataGridView;
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
			this->GeneralMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->новыйТестToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкиКурсаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveCourseDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->TestsDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TestName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GeneralMenuStrip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TestsDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// GeneralMenuStrip
			// 
			this->GeneralMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->сохранитьToolStripMenuItem,
					this->сохранитьКакToolStripMenuItem, this->новыйТестToolStripMenuItem, this->настройкиКурсаToolStripMenuItem
			});
			this->GeneralMenuStrip->Location = System::Drawing::Point(0, 0);
			this->GeneralMenuStrip->Name = L"GeneralMenuStrip";
			this->GeneralMenuStrip->Size = System::Drawing::Size(688, 24);
			this->GeneralMenuStrip->TabIndex = 0;
			this->GeneralMenuStrip->Text = L"menuStrip1";
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(78, 20);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &TeacherCourseView::сохранитьToolStripMenuItem_Click);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как...";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &TeacherCourseView::сохранитьКакToolStripMenuItem_Click);
			// 
			// новыйТестToolStripMenuItem
			// 
			this->новыйТестToolStripMenuItem->Name = L"новыйТестToolStripMenuItem";
			this->новыйТестToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->новыйТестToolStripMenuItem->Text = L"Новый тест";
			this->новыйТестToolStripMenuItem->Click += gcnew System::EventHandler(this, &TeacherCourseView::новыйТестToolStripMenuItem_Click);
			// 
			// настройкиКурсаToolStripMenuItem
			// 
			this->настройкиКурсаToolStripMenuItem->Name = L"настройкиКурсаToolStripMenuItem";
			this->настройкиКурсаToolStripMenuItem->Size = System::Drawing::Size(113, 20);
			this->настройкиКурсаToolStripMenuItem->Text = L"Настройки курса";
			this->настройкиКурсаToolStripMenuItem->Click += gcnew System::EventHandler(this, &TeacherCourseView::настройкиКурсаToolStripMenuItem_Click);
			// 
			// SaveCourseDialog
			// 
			this->SaveCourseDialog->DefaultExt = L"course;";
			this->SaveCourseDialog->Filter = L"Курсы|*.course";
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
			this->TestsDataGridView->Location = System::Drawing::Point(0, 24);
			this->TestsDataGridView->MultiSelect = false;
			this->TestsDataGridView->Name = L"TestsDataGridView";
			this->TestsDataGridView->ReadOnly = true;
			this->TestsDataGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->TestsDataGridView->Size = System::Drawing::Size(688, 340);
			this->TestsDataGridView->TabIndex = 1;
			this->TestsDataGridView->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TeacherCourseView::TestsDataGridView_MouseDoubleClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			// 
			// TestName
			// 
			this->TestName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->TestName->HeaderText = L"Название теста";
			this->TestName->Name = L"TestName";
			this->TestName->ReadOnly = true;
			// 
			// TeacherCourseView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 364);
			this->Controls->Add(this->TestsDataGridView);
			this->Controls->Add(this->GeneralMenuStrip);
			this->MainMenuStrip = this->GeneralMenuStrip;
			this->Name = L"TeacherCourseView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Режим преподавателя";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &TeacherCourseView::TeacherCourseView_FormClosing);
			this->GeneralMenuStrip->ResumeLayout(false);
			this->GeneralMenuStrip->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TestsDataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void настройкиКурсаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TeacherCourseView_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void новыйТестToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TestsDataGridView_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

};
}
