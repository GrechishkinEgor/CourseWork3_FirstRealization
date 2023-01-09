#include "AppContext.h"

System::Void CourseWork::TeacherMode::ReturnToChoiceModeButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	CurrentApplicationContext::ShowOnlyChoiceModeWin();
	return System::Void();
}

System::Void CourseWork::TeacherMode::CreatingNewCourseButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	CreatingNewCourse^ CreatingNewCourseWin = gcnew CreatingNewCourse;
	if (CreatingNewCourseWin->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		CurrentApplicationContext::ShowOnlyTeacherCourseViewWin();
	return System::Void();
}

System::Void CourseWork::TeacherMode::TeacherMode_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void CourseWork::TeacherMode::OpenCourseButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (OpenCourseDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		CurrentApplicationContext::OpenCourse(OpenCourseDialog->FileName);
		PasswordCheck^ PasswordCheckWin = gcnew PasswordCheck;
		if (PasswordCheckWin->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			CurrentApplicationContext::ShowOnlyTeacherCourseViewWin();
	}
	return System::Void();
}

System::Void CourseWork::TeacherMode::CheckTestButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (OpenTestDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FileStream^ TestFile = gcnew FileStream(OpenTestDialog->FileName, FileMode::Open);
		BinaryReader^ TestReader = gcnew BinaryReader(TestFile);
		ReadyTest^ CurrentTest = gcnew ReadyTest(TestReader);
		TestResult^ TestResultWin = gcnew TestResult(CurrentTest);
		TestResultWin->ShowDialog();
		TestFile->Close();
	}
	return System::Void();
}
