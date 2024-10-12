#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab06.4(rec)/Lab06.4(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { -5, 0, 2, 3, 8, 10, 12 };
			int count = CountInRange(arr, 7, 0, 10);
			Assert::AreEqual(5, count);
		}
	};
}
