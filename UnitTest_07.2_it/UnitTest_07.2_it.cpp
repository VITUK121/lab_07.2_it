#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_07.2_it/lab_07.2_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest072it
{
	TEST_CLASS(UnitTest072it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 6;
			int** arr = new int* [size];
			for (int i = 0; i != size; i++) {
				arr[i] = new int[size];
			}
			int a[6][6] = {{6,4,1,6,8,0},
						   {1,6,2,3,7,1},
						   {5,1,5,7,9,1},
						   {0,1,6,8,2,2},
						   {9,1,5,3,2,1},
						   {6,1,9,3,7,2}};
			for (int i = 0; i != size; i++) {
				for (int j = 0; j != size; j++) {
					arr[i][j] = a[i][j];
				}
			}

			Assert::AreEqual(8, max_on_1st_diag(arr,size));
		}
	};
}