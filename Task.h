#pragma once

namespace CourseWork {
	using namespace System;
	using namespace System::IO;
	public ref class Task
	{
	private:
		String^ Question;
		array<String^>^ Answers;
		int MaxMark;
		int ExecutionTime;
		int Id;

	public:
		Task();
		Task(BinaryReader^ Reader);

		String^ GetQuestion();
		array<String^>^ GetAnswers();
		int GetMaxMark();
		int GetExecutionTime();
		int GetId();

		void SetQuestion(String^ Question);
		void SetMaxMark(int Mark);
		void SetExecutionTime(int Time);
		void SetId(int Id);

		void ReadFromFile(BinaryReader^ Reader);
		void WriteInFile(BinaryWriter^ Writer);
	};
}
