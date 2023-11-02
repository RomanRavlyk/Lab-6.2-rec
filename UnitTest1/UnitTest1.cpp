#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.2 rec/Lab 6.2 rec.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 10, -2, 3, 9, 7, 6, 2, -10, 9, 10 };
			int n = sizeof(a) / sizeof(a[0]);
			swapArrayHalves(a, 0, n - 1);
			int b[] = { 10, 9, -10, 2, 6, 7, 9, 3, -2, 10 };
			for (int i = 0; i < 10; i++) {
				Assert::AreEqual(a[i], b[i]);
			}
		}
	};
}
