#include "Output.h"

void FileOutput(Flat* array, std::string var, int endSize)
{
	std::ofstream fileRecorder = CheckFileOutput();

	fileRecorder << var << std::endl;

	for (int i = 0; i < endSize; i++)
	{
		fileRecorder << "Flat #" << i + 1 << std::endl;

		fileRecorder << "Address is " + array[i].GetAddress() << std::endl;

		fileRecorder << "Floor is " + std::to_string(array[i].GetFloor()) << std::endl;

		fileRecorder << "Number of rooms is " + std::to_string(array[i].GetNumberOfRooms()) << std::endl;

		fileRecorder << "Space is " + std::to_string(array[i].GetSpace()) + "\n" << std::endl;
	}

	std::cout << "File saved successfully!!!" << std::endl;;
	
	fileRecorder.close();
}


void InitialFileOutput(Flat* array, int size )
{
	std::ofstream fileRecorder = CheckFileOutput();
	fileRecorder << size << std::endl;
	for (int i = 0; i < size; i++)
	{
		fileRecorder << array[i].GetAddress() << std::endl;
		fileRecorder << array[i].GetFloor() << std::endl;
		fileRecorder << array[i].GetNumberOfRooms() << std::endl;
		fileRecorder << array[i].GetSpace() << std::endl;

	}
}

void ConsoleOutput(Flat* array, std::string var, int endSize)
{

	std::cout << var;
	for (int i = 0; i < endSize; i++)
	{
		std::cout << "Flat #" << i + 1 << std::endl;

		std::cout << "Address is " + array[i].GetAddress() << std::endl;;
		
		std::cout << "Floor is " + std::to_string(array[i].GetFloor()) << std::endl;

		std::cout << "Number of rooms is " + std::to_string(array[i].GetNumberOfRooms()) << std::endl;

		std::cout << "Space is " + std::to_string(array[i].GetSpace()) + "\n" << std::endl;
	}
}
