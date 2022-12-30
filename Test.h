#pragma once

namespace CourseWork
{
	using namespace System;
	using namespace System::IO;
	public ref class Test
	{
	private:
		String^ TestName;
		int Id;
	public:
		Test();
		Test(String^ TestName);
		Test(BinaryReader^ Reader);

		void SetTestName(String^ Name);
		void SetId(int Id);

		String^ GetTestName();
		int GetId();

		void WriteInFile(BinaryWriter^ Writer);
		void ReadFromFile(BinaryReader^ Reader);
	};
}
