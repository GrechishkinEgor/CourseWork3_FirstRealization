#pragma once


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
	public:
		Course();
		Course(System::String^ CourseName, System::String^ TeacherName, System::String^ TeacherPassword);
		Course(System::IO::BinaryReader^ Reader);

		String^ GetCourseName();
		String^ GetTeacherName();
		bool IsInDevelopment();
		bool CheckPassword(String^ UserPassword);

		void SetCourseName(String^ Name);
		void SetTeacherName(String^ Name);

		void WriteInFile(System::IO::BinaryWriter^ Writer);
		void ReadFromFile(System::IO::BinaryReader^ Reader);
	};
}
