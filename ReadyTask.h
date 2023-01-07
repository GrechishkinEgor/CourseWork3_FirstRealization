#pragma once
#include "Task.h"

namespace CourseWork
{
	public ref class ReadyTask : TaskBasic
	{
	protected:
		array<bool>^ UserAnswer;
		int LastUserMark;

		void ReadFromFile(BinaryReader^ Reader) override;
	public:
		ReadyTask(Task^);
		ReadyTask(BinaryReader^ Reader);

		int GetLastUserMark();

		int CheckAnswer(array<bool>^ UserAnswer);

		void WriteInFile(BinaryWriter^ Writer) override;
	};
}