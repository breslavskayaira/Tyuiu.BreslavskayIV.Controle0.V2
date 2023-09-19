#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BreslavskayaIV.Controle0.V2.Task2.Lib/Tyuiu.BreslavskayaIV.Controle0.V2.Task2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuBreslavskayaIVControle0V2Task2Test
{
	TEST_CLASS(TyuiuBreslavskayaIVControle0V2Task2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V2* date = new Service1();
			int x = 0;
			int y = 2;
			int z = 0;
			int r;
			r = date->Rezultat(x, y, z);
			Assert::AreEqual(1, r);
		}
	};
}
