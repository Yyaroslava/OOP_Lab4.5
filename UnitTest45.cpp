#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab4.5/Time.cpp"
#include "../OOP Lab4.5/Date.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest45
{
	TEST_CLASS(UnitTest45)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time A(1, 1, 1, 0), B(1, 1, 1, 0);
			Assert::AreEqual(A == B, true);
		}
	};
}
