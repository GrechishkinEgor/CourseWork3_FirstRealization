#include "AppContext.h"

using namespace CourseWork;

CourseWork::EditChoiceFewAnswer::EditChoiceFewAnswer(CourseWork::Task^ CurrentTask)
{
    InitializeComponent();
    this->CurrentTask = CurrentTask;
    QuestionTextBox->Text = CurrentTask->GetQuestion();
    if (CurrentTask->IsAnswersRandomOrder())
        RandomOrderOfAnswersCheckBox->CheckState = CheckState::Checked;
    else
        RandomOrderOfAnswersCheckBox->CheckState = CheckState::Unchecked;
    ExecutionTimeTextBox->Text = Convert::ToString(CurrentTask->GetExecutionTime());
    TotalMarkTextBox->Text = Convert::ToString(CurrentTask->GetMaxMark());
    array<String^>^ Answers = CurrentTask->GetAnswers();
    for (int i = 0; Answers->Length; i++)
        AnswersGridView->Rows->Add(Answers[i]);
    return;
}

System::Void CourseWork::EditChoiceFewAnswer::OKButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (QuestionTextBox->Text == "")
    {
        MessageBox::Show("Не указано вопрос.", "Вопрос", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        return System::Void();
    }
    

    try
    {
        Convert::ToInt32(TotalMarkTextBox->Text);
    }
    catch (...)
    {
        MessageBox::Show("Указано некорректное значение полного балла", "Балл за задание", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        return System::Void();
    }
    if (Convert::ToInt32(TotalMarkTextBox->Text) <= 0)
    {
        MessageBox::Show("Полный балл за задание не может быть отрицательным или нулевым", "Балл за задание", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        return System::Void();
    }


    if (ExecutionTimeTextBox->Text == "")
        ExecutionTimeTextBox->Text = "0";
    try
    {
        Convert::ToInt32(ExecutionTimeTextBox->Text);
    }
    catch (...)
    {
        MessageBox::Show("Указано некорректное значение времени выполнения", "Время выполнения", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        return System::Void();
    }
    if (Convert::ToInt32(ExecutionTimeTextBox->Text) < 0)
        ExecutionTimeTextBox->Text = "0";


    if (AnswersGridView->Rows->Count < 2)
    {
        MessageBox::Show("Количество ответов должно быть не меньше 2.", "Ответы", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        return System::Void();
    }
    for (int i = 0; i < AnswersGridView->Rows->Count; i++)
        if (AnswersGridView[0, i]->Value == "")
        {
            MessageBox::Show("Пустые варианты ответов не допускаются", "Ответы", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
            return System::Void();
        }
    

    CurrentTask->SetQuestion(QuestionTextBox->Text);
    CurrentTask->SetExecutionTime(Convert::ToInt32(ExecutionTimeTextBox->Text));
    CurrentTask->SetExecutionTime(Convert::ToInt32(ExecutionTimeTextBox->Text));
    for (int i = 0; i < AnswersGridView->Rows->Count; i++)
        CurrentTask->AddNewAnswer(Convert::ToString(AnswersGridView[0, i]->Value));
    CurrentTask->SetAnswersRandomOrder(RandomOrderOfAnswersCheckBox->CheckState == CheckState::Checked);
    this->DialogResult = System::Windows::Forms::DialogResult::OK;
    this->Close();
    
    return System::Void();
}
