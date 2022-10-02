#include "Flat.h"

Flat::Flat()
{
	address = "";
	floor = 0;
	numberOfRooms = 0;
	space = 0;
}

Flat::Flat(std::string valueAddress, int valueFloor, int valueNumberOfRooms, double valueSpace)
	:address(valueAddress),floor(valueFloor), numberOfRooms(valueNumberOfRooms),space(valueSpace)
{}

std::string Flat::GetAddress()
{
	return address;
}



int Flat::GetFloor()
{
	return floor;
}



int Flat::GetNumberOfRooms()
{
	return numberOfRooms;
}



double Flat::GetSpace()
{
	return space;
}



bool Flat::operator==(const Flat& other)
{
	return address == other.address && floor == other.floor 
		&& numberOfRooms == other.numberOfRooms && space == other.space;
}

bool Flat::operator!=(const Flat& other)
{
	return !(*this == other);
}


