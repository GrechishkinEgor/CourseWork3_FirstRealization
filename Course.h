#pragma once
#include "Test.h"

namespace CourseWork
{
	using namespace System;
	public ref class Course
	{
	private:
		System::String^ CourseName;
		System::String^ TeacherName;
		System::String^ TeacherPassword;
		bool InDevelopmentFlag;
		array<Test^>^ ListOfTests;
		int IdLastTest;
	public:
		Course();
		Course(System::String^ CourseName, System::String^ TeacherName, System::String^ TeacherPassword);
		Course(System::IO::BinaryReader^ Reader);

		String^ GetCourseName();
		String^ GetTeacherName();
		bool IsInDevelopment();
		bool CheckPassword(String^ UserPassword);
		array<Test^>^ GetListOfTests();		//Необходимо протестировать

		void SetCourseName(String^ Name);
		void SetTeacherName(String^ Name);
		bool SetNewPassword(String^ OldPassword, String^ NewPassword);	//Истина, если старый пароль верный и смена пароля прошла успешно
		void FinishDevelopment();

		void AddNewTest(Test^ NewTest);		//Необходимо протестировать
		bool RemoveTestWithId(int Id);		//Необходимо протестировать
		Test^ GetTestWithId(int Id);		//Необходимо протестировать
		
		void WriteInFile(System::IO::BinaryWriter^ Writer);
		void ReadFromFile(System::IO::BinaryReader^ Reader);
	};
}
