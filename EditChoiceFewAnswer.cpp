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
    array<bool>^ NumsOfRightAnswers = CurrentTask->GetNumsOfRightAnswers();
    
    for (int i = 0; i < Answers->Length; i++)
        AnswersGridView->Rows->Add(Answers[i], NumsOfRightAnswers[i] ? "Правильный" : "");
       
        
    return;
}

System::Void CourseWork::EditChoiceFewAnswer::OKButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (QuestionTextBox->Text == "")
    {
        MessageBox::Show("Не указан вопрос.", "Вопрос", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
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


    bool FlagRightAnswers = false;
    if (AnswersGridView->Rows->Count < 3)
    {
        MessageBox::Show("Количество ответов должно быть не меньше 2.", "Ответы", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        return System::Void();
    }
    for (int i = 0; i < AnswersGridView->Rows->Count; i++)
    {
        if (AnswersGridView[0, i]->Value == "")
        {
            MessageBox::Show("Пустые варианты ответов не допускаются.", "Ответы", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
            return System::Void();
        }
        DataGridViewButtonCell^ CurrentCell = (DataGridViewButtonCell^)AnswersGridView->Rows[i]->Cells[1];
        if (CurrentCell->Value == "Правильный")
            FlagRightAnswers = true;
    }
    if (!FlagRightAnswers)
    {
        MessageBox::Show("Ни один ответ не является правильным.", "Ответы", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        return System::Void();
    }
    

    CurrentTask->SetQuestion(QuestionTextBox->Text);
    CurrentTask->SetExecutionTime(Convert::ToInt32(ExecutionTimeTextBox->Text));
    CurrentTask->ClearAnswers();
    for (int i = 0; i < AnswersGridView->Rows->Count - 1; i++)
        CurrentTask->AddNewAnswer(Convert::ToString(AnswersGridView[0, i]->Value), AnswersGridView->Rows[i]->Cells[1]->Value == "Правильный");
    CurrentTask->SetAnswersRandomOrder(RandomOrderOfAnswersCheckBox->CheckState == CheckState::Checked);
    CurrentTask->SetMaxMark(Convert::ToInt32(TotalMarkTextBox->Text));
    this->DialogResult = System::Windows::Forms::DialogResult::OK;
    this->Close();
    
    return System::Void();
}

System::Void CourseWork::EditChoiceFewAnswer::AnswersGridView_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    if (AnswersGridView->CurrentCell->ColumnIndex == 1)
    {
        if (AnswersGridView->CurrentCell->Value == "Правильный")
            AnswersGridView->CurrentCell->Value = "";
        else
            AnswersGridView->CurrentCell->Value = "Правильный";
    }
    return System::Void();
}
