#include "pch.h"
#include "CppUnitTest.h"
#include "../PDS_2/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestImplication)
		{
			Assert::IsTrue(implication(false, false));
			Assert::IsFalse(implication(true, false));
			Assert::IsTrue(implication(false, true));
			Assert::IsTrue(implication(true, true));
		}

		TEST_METHOD(TestFn)
		{
			Assert::AreEqual(fn(false, false, false), true);
			Assert::AreEqual(fn(false, false, true), true);
			Assert::AreEqual(fn(false, true, false), true);
			Assert::AreEqual(fn(false, true, true), true);
			Assert::AreEqual(fn(true, false, false), false);
			Assert::AreEqual(fn(true, false, true), true);
			Assert::AreEqual(fn(true, true, false), true);
			Assert::AreEqual(fn(true, true, true), true);
		}
	};
}
