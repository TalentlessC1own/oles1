#include "GetList.h"

Flat* GetListWithSetsNumberOfRooms(Flat* array, int size, int numberOfRooms, int& endSize)
{
	Flat* tmp_list = new Flat[size];
	endSize = 0;
	for (int i = 0; i < size; i++)
		if (array[i].GetNumberOfRooms() == numberOfRooms)
		{
			tmp_list[endSize] = array[i];
			endSize++;
		}
	Flat* endList = new Flat [endSize] ;
	for (int i = 0; i < endSize; i++)
		endList[i] = tmp_list[i];

	return endList;
}

Flat* GetListWithSetsNumberOfRoomsNFloorInterval(Flat* array, int size, int numberOfRooms, int highestFloor, int lowestFloor, int& endSize)
{
	Flat* tmp_list = new Flat[size];
	endSize = 0;
	for (int i = 0; i < size; i++)
		if (array[i].GetNumberOfRooms() == numberOfRooms && array[i].GetFloor() <= highestFloor && array[i].GetFloor() >= lowestFloor)
		{
			tmp_list[endSize] = array[i];
			endSize++;
		}
	Flat* endList = new Flat[endSize];
	for (int i = 0; i < endSize; i++)
		endList[i] = tmp_list[i];

	return endList;
}

Flat* GetListWithSpaceExceedingThen(Flat* array, int size, double space, int& endSize)
{
	Flat* tmp_list = new Flat[size];
	endSize = 0;
	for (int i = 0; i < size; i++)
		if (array[i].GetSpace() > space)
		{
			tmp_list[endSize] = array[i];
			endSize++;
		}
	Flat* endList = new Flat[endSize];
	for (int i = 0; i < endSize; i++)
		endList[i] = tmp_list[i];

	return endList;
}
