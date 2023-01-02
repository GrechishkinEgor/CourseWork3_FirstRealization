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
		void AddNewTask(Task^ NewTask);	//��������������

		String^ GetTestName();
		int GetId();
		Task^ GetTaskWithId(int Id);	//��������������

		bool RemoveTaskWithId(int Id);	//��������������

		void WriteInFile(BinaryWriter^ Writer);
		void ReadFromFile(BinaryReader^ Reader);
	};
}
