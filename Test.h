#pragma once
#include "TestBasic.h"

namespace CourseWork
{
	using namespace System;
	using namespace System::IO;
	public ref class Test : TestBasic
	{
	protected:
		int IdLastTask;
		bool RandomOrder;
		array<Task^>^ TasksList;

		void ReadFromFile(BinaryReader^ Reader) override;
	public:
		Test();
		Test(String^ TestName);
		Test(BinaryReader^ Reader);

		Task^ GetTaskWithId(int Id);
		array<Task^>^ GetTasksList();
		
		void SetTestName(String^ Name);
		void SetId(int Id);
		void SetRandomOrderFlag(bool IsRandomOrder);
		bool IsTaskInRandomOrder();

		void AddNewTask(Task^ NewTask);
		bool RemoveTaskWithId(int Id);

		void WriteInFile(BinaryWriter^ Writer) override;	
	};
}
