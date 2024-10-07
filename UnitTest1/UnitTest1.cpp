#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.4(it).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestCountPositiveElements)
		{
			double arr[] = { -2.5, 0, 3.7, 1, -4.2, 6.3 };
			int n = sizeof(arr) / sizeof(arr[0]);
			int positiveCount = countPositiveElements(arr, n);
			Assert::AreEqual(3, positiveCount);
		}
		TEST_METHOD(TestSumAfterLastZero)
		{
			double arr1[] = { 1, 2, 0, 3, 4, 5 };
			double arr2[] = { 1, 2, 3, 4, 5 };
			int n1 = sizeof(arr1) / sizeof(arr1[0]);
			int n2 = sizeof(arr2) / sizeof(arr2[0]);
			double sum1 = sumAfterLastZero(arr1, n1);
			Assert::AreEqual(12.0, sum1);
			double sum2 = sumAfterLastZero(arr2, n2);
			Assert::AreEqual(0.0, sum2);
		}
		TEST_METHOD(TestTransformArray)
		{
			double arr[] = { 3.5, 1.0, 0.9, 4.2, 0, 2.1 };
			double expectedTransformedArr[] = { 1.0, 0.9, 0, 3.5, 4.2, 2.1 };
			int n = sizeof(arr) / sizeof(arr[0]);
			double transformedArr[6];
			transformArray(arr, n, transformedArr);
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(expectedTransformedArr[i], transformedArr[i]);
			}
		}
	};
}
