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
	public:
		Test();
		Test(String^ TestName);
		Test(BinaryReader^ Reader);

		void SetTestName(String^ Name);
		void SetId(int Id);
		void AddNewTask(Task^ NewTask);	//Протестировать

		String^ GetTestName();
		int GetId();
		Task^ GetTaskWithId(int Id);	//Протестировать

		bool RemoveTaskWithId(int Id);	//Протестировать

		void WriteInFile(BinaryWriter^ Writer);
		void ReadFromFile(BinaryReader^ Reader);
	};
}
