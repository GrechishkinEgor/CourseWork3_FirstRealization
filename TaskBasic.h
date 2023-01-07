#pragma once

namespace CourseWork
{
	using namespace System;
	using namespace System::IO;
	public ref class TaskBasic abstract
	{
	protected:
		String^ Question;
		array<String^>^ Answers;
		array<bool>^ IsRightAnswer;
		int MaxMark;
		int ExecutionTime;
		int Id;

		virtual void ReadFromFile(BinaryReader^ Reader);
	public:
		TaskBasic();
		TaskBasic(BinaryReader^ Reader);

		String^ GetQuestion();
		array<String^>^ GetAnswers();
		int GetMaxMark();
		int GetExecutionTime();
		int GetId();
		array<bool>^ GetNumsOfRightAnswers();

		virtual void WriteInFile(BinaryWriter^ Writer);
	};
}