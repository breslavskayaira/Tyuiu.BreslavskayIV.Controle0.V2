#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BreslavskayaIV.Controle0.V2.Task1.Lib/Tyuiu.BreslavskayaIV.Controle0.V2.Task1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuBreslavskayaIVControle0V2Task1Test
{
	TEST_CLASS(TyuiuBreslavskayaIVControle0V2Task1Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V1* date = new Service0();
			float x = 1;
			float z = 1;
			float y;
			y = date->Chislo(x, z);
			int f;
			f = int(y);
			Assert::AreEqual(0, f);
		}
	};
}
