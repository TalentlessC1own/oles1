
#include "CppUnitTest.h"
#include "../oles1/GetList.h"
#include "../oles1/GetList.cpp"
#include "..\oles1\Flat.h"
#include "..\oles1\Flat.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	private:
		const int testNumberOfRooms = 2;
		const int testHigherFloor = 7;
		const int testLowestFloor = 3;
		const double testSpace = 69.9;
		const int size = 3;

		int endSize = 0;

		Flat testList[3]
		{
			Flat("q",1,2,55.5),
			Flat("w",5,2,55.5),
			Flat("e",10,3,70.5)
		};

		Flat test1TrueList[2]
		{
			Flat("q",1,2,55.5),
			Flat("w",5,2,55.5)
		};

		Flat test2TrueList[1]
		{
			Flat("w",5,2,55.5)
		};

		Flat test3TrueList[1]
		{
			Flat("e",10,3,70.5)
		};

	public:
		bool listComparison(Flat* list1, Flat* list2, int tempSize)
		{
			for (int i = 0; i < tempSize; i++)
				if (list1[i] != list2[i])
					return false;
			return true;
		}
		TEST_METHOD(TestMethod1)
		{
			Flat* endTestList = GetListWithSetsNumberOfRooms(testList, 3, testNumberOfRooms, endSize);
			Assert::IsTrue(listComparison(endTestList, test1TrueList, endSize));
		}
		TEST_METHOD(TestMethod2)
		{
			Flat* endTestList = GetListWithSetsNumberOfRoomsNFloorInterval(testList, 3, testNumberOfRooms, testHigherFloor, testLowestFloor, endSize);
			Assert::IsTrue(listComparison(endTestList, test2TrueList, endSize));
		}
		TEST_METHOD(TestMethod3)
		{
			Flat* endTestList = GetListWithSpaceExceedingThen(testList, 3, testSpace, endSize);
			Assert::IsTrue(listComparison(endTestList, test3TrueList, endSize));
		}
	};
}
