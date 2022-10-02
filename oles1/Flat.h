#pragma once
#include <iostream>
class Flat
{
private:
	std::string address;
	int floor;
	int numberOfRooms;
	double space;
public:
	Flat();
	Flat(std::string valueAddress, int valueFloor, int valueNumberOfRooms, double valueSpace);

	std::string GetAddress();

	int GetFloor();

	int GetNumberOfRooms();

	double GetSpace();


	bool operator == (const Flat& other);
	bool operator!=(const Flat& other);
};

