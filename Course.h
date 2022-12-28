#pragma once


namespace CourseWork
{
	public ref class Course
	{
	private:
		System::String^ CourseName;
		System::String^ TeacherName;
		System::String^ TeacherPassword;
	public:
		Course();
		Course(System::String^ CourseName, System::String^ TeacherName, System::String^ TeacherPassword);
		Course(System::IO::BinaryReader^ Reader);

		void WriteInFile(System::IO::BinaryWriter^ Writer);
		void ReadFromFile(System::IO::BinaryReader^ Reader);
	};
}
