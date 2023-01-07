#pragma once
#include "TaskBasic.h"

namespace CourseWork {
	using namespace System;
	using namespace System::IO;
	public ref class Task : TaskBasic
	{
	protected:
		bool AnswersRandomOrder;
		void ReadFromFile(BinaryReader^ Reader) override;
	public:
		Task();
		Task(BinaryReader^ Reader);

		bool IsAnswersRandomOrder();

		void SetQuestion(String^ Question);
		void SetMaxMark(int Mark);
		void SetExecutionTime(int Time);
		void SetId(int Id);
		void SetAnswersRandomOrder(bool Random);
		void AddNewAnswer(String^ Answer, bool IsRight);
		void SetFlagOfRightAnswer(int IndexOfAnswer, bool IsRight);
		void ClearAnswers();
		
		void WriteInFile(BinaryWriter^ Writer) override;
	};
}
