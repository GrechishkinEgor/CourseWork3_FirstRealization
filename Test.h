#pragma once

namespace CourseWork
{
	using namespace System;
	using namespace System::IO;
	public ref class Test
	{
	private:
		String^ TestName;
	public:
		Test();
		Test(String^ TestName);
		Test(BinaryReader^ Reader);

		void SetTestName(String^ Name);

		String^ GetTestName();

		void WriteInFile(BinaryWriter^ Writer);
		void ReadFromFile(BinaryReader^ Reader);
	};
}
