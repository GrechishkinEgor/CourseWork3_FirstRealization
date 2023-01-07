#pragma once
#include "ReadyTask.h"

namespace CourseWork
{
	using namespace System;
	public ref class TestBasic abstract
	{
	protected:
		String^ TestName;
		int Id;

		virtual void ReadFromFile(BinaryReader^ Reader);
	public:
		TestBasic();
		TestBasic(BinaryReader^ Reader);

		String^ GetTestName();
		int GetId();

		virtual void WriteInFile(BinaryWriter^ Writer);
	};
}
