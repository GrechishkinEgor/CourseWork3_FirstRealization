#pragma once
#include "ChoiceMode.h"
#include "TeacherMode.h"
#include "StudentMode.h"
#include "CreatingNewCourse.h"
#include "TeacherCourseView.h"
#include "CourseSettings.h"
#include "PasswordCheck.h"
#include "CreatingNewTest.h"
#include "ChangeTeacherPassword.h"
#include "Course.h"
#include "TestView.h"

/*������� �������� ���������� (ApplicationContext).
* ��� ��������� � ������� ����� ������������ � ���� ������������ ����.
* ������ ������������ ���� ������������ �� ���� ������ cpp, ����������� ������ ����.
* ��� ������� ���������� ����� Application::Run ���� ��� ���������� ������������ ����������� ApplicationContext.
* ��������� ������ ���������� ��� �������� � ����� Run.
* ����������� ��������� ����� ������������� � ������������.
* �����, ������� ������������ �������� (����� ����� ShowDialog), �� ���������� � ������ ����������� ����� ���������.
* ��������� ����� ������ ����� ���� ���������, ������ �� ������� �������� � ����������� ����.
* �������� ������ HideAllForms ���������������� ������ �� ����������� �����.
* ����������� ����� ��������� �� ����� ��� ������ �������, ������������ � ShowOnly (��� ����� ������ �������� HideAllForms).
* ��� ������������� ������ ShowOnly ������� ����� ��������� �����.
* ������ ���� �������� ������ ������ �� �������� ����� � ������ ����� ����� � ������.
* ����� ����� ����� ��������������� ��������, ��������� �� ������� ����
*/
namespace CourseWork
{
	using namespace System;
	public ref class CurrentApplicationContext : ApplicationContext
	{
	private:
		/*������ ���� ����������*/
		static ChoiceMode^ ChoiceModeWin;
		static TeacherMode^ TeacherModeWin;
		static StudentMode^ StudentModeWin;
		static TeacherCourseView^ TeacherCourseViewWin;

		/*�������� � ���������� ����*/
		static Course^ CurrentCourse;
		static String^ Path;			//���� � ������
	public:
		/* ������ ����������� �� ���������. ��������� ��� �������� ������� ������ Application::Run
		 * ����� �������������� ����������� ������� ����������� ������� �����������.
		 * ��������� ����� ������������ �������� � ������ ����������� �����.
		*/
		CurrentApplicationContext();	
		
		/* ��������� ������ ������� �������� �� ����� ����.
		*  ������, ������������ � ShowOnly, �������� ����� HideAllForms, � ����� ���������� ��������������� �����.
		*/
		//�������� �� ������������ ��� ����
		static void HideAllForms();
		static void ShowOnlyChoiceModeWin();
		static void ShowOnlyTeacherModeWin();
		static void ShowOnlyStudentModeWin();
		static void ShowOnlyTeacherCourseViewWin();

		/* 
		*  ��������� ������ ������� �������� �� ������ � ������.
		*/
		//��������� ���� �� ����� Path
		static void OpenCourse(System::String^ Path);
		//��������� ���� � ���� Path
		static void SaveCourse(System::String^ Path);
		//���������� ������ � ����� �����
		static void SetNewCourse(Course^ NewCourse);
		//�������� ������ � ������� �����
		static Course^ GetCourse();
		//�������� ���� ����� � ������ ("", ���� ����� ���)
		static String^ GetPath();
		//�������� ������ �������������. ������ - ������ ������
		static bool CheckTeacherPassword(String^ Password);
	};

	
}