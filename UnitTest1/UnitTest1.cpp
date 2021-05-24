#include "pch.h"
#include "CppUnitTest.h"
#include "../Figure.h"
#include "../Figure.cpp"
#include "../Rectangle.h"
#include "../Rectangle.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Rectangle A(6, 6);
			int f = A.perimeter();
			Assert::AreEqual(f, 24);
		}
	};
}