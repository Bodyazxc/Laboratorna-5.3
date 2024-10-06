#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna5.3/Laboratorna5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = s(2.0);
			Assert::AreEqual(result, 0.158772, 0.1);
		}
	};
}
