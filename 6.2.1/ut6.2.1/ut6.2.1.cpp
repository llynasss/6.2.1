#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ut621
{
	TEST_CLASS(ut621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k[4] = { 0,1,2,3 };

			change(k, 4);

			Assert::AreEqual(k[0], 1);
		}
	};
}
