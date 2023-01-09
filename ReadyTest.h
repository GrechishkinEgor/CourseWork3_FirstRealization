#pragma once
#include "Test.h"

namespace CourseWork
{
	public ref class ReadyTest : TestBasic
	{
	protected:
		array<ReadyTask^>^ TasksList;
		String^ StudentName;

		void ReadFromFile(BinaryReader^ Reader) override;
	public:
		ReadyTest(Test^);

		array<ReadyTask^>^ GetTasksList();
		String^ GetStudentName();
		int CalculateTotalMarkInPercent();
		
		void SetStudentName(String^ Name);

		void WriteInFile(BinaryWriter^ Writer) override;
	};
}