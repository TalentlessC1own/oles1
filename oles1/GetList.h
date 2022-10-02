#pragma once
#include "Flat.h"

Flat* GetListWithSetsNumberOfRooms(Flat* array, int size, int numberOfRooms, int& endSize);

Flat* GetListWithSetsNumberOfRoomsNFloorInterval(Flat* array, int size, int numberOfRooms, int highestFloor, int lowestFloor, int& endSize);

Flat* GetListWithSpaceExceedingThen(Flat* array, int size, double space, int& endSize);