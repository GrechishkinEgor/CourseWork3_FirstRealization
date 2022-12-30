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
		TeacherCourseView(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

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
			this->GeneralMenuStrip->SuspendLayout();
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
			// TeacherCourseView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 364);
			this->Controls->Add(this->GeneralMenuStrip);
			this->MainMenuStrip = this->GeneralMenuStrip;
			this->Name = L"TeacherCourseView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Режим преподавателя";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &TeacherCourseView::TeacherCourseView_FormClosing);
			this->GeneralMenuStrip->ResumeLayout(false);
			this->GeneralMenuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void настройкиКурсаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TeacherCourseView_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
