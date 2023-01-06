#pragma once
#include "Task.h"

namespace CourseWork
{
	using namespace System;
	using namespace System::IO;
	public ref class Test
	{
	private:
		String^ TestName;
		int Id;
		array<Task^>^ TasksList;
		int IdLastTask;
		bool RandomOrder;
	public:
		Test();
		Test(String^ TestName);
		Test(BinaryReader^ Reader);

		void SetTestName(String^ Name);
		void SetId(int Id);
		void AddNewTask(Task^ NewTask);
		void SetRandomOrderFlag(bool IsRandomOrder);

		String^ GetTestName();
		int GetId();
		Task^ GetTaskWithId(int Id);
		array<Task^>^ GetTasksList();
		bool IsTaskInRandomOrder();

		bool RemoveTaskWithId(int Id);

		void WriteInFile(BinaryWriter^ Writer);
		void ReadFromFile(BinaryReader^ Reader);
	};
}
