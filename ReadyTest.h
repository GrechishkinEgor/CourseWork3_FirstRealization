#pragma once
#include "Test.h"

namespace CourseWork
{
	public ref class ReadyTest : TestBasic
	{
	protected:
		array<ReadyTask^>^ TasksList;

		void ReadFromFile(BinaryReader^ Reader) override;
	public:
		ReadyTest(Test^);

		array<ReadyTask^>^ GetTasksList();
		int CalculateTotalMarkInPercent();
		
		void WriteInFile(BinaryWriter^ Writer) override;
	};
}