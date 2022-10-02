#include "Flat.h"
#include"Menu.h"
#include "Input.h"
#include "Output.h"
#include "GetList.h"


enum class InputType
{
	Console = 1,
	File
};


enum class ListType
{
	NumberOfRooms = 1,
	NumberOfRoomsAndFloor,
	Space
};

enum class Answer
{
	Yes = 1,
	No
};


int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Kutkin Les 415 kr 1" << std::endl;
	while (true)
	{

		Flat* array = nullptr;
		int count = 0;

		InputType inputVar = static_cast<InputType>(AscUserInputType());

		switch (inputVar)
		{
		case InputType::Console:
			std::cout << "Enter flats count. " << std::endl;
			count = CheckIntValue();
			array = ConsoleInput(count);
			break;


		case InputType::File:
			array = FileInput();
			break;
		}

		if (inputVar == InputType::Console)
		{
			Answer initialDataVar = static_cast<Answer> (AscInitialDataSaveMenu());
			if (initialDataVar == Answer::Yes)
				InitialFileOutput(array, count);
		}


		Flat* endList = nullptr;
		int endSize = 0;

		int wishNumberOfRooms = 0;
		int wishHighestFloor = 0;
		int wishLowestFloor = 0;
		double wishSpace = 0;
		std::string listType;

		ListType var = static_cast<ListType>(AscUserMenu());
		switch (var)
		{
		case ListType::NumberOfRooms:
			std::cout << "������� ���������� ������:";
			wishNumberOfRooms = CheckIntValue();
			listType = "�������� � " + std::to_string(wishNumberOfRooms) + " ���������b\n";
			endList = GetListWithSetsNumberOfRooms(array, count, wishNumberOfRooms, endSize);
			break;

		case ListType::NumberOfRoomsAndFloor:
			std::cout << "������� ���������� ������:";
			wishNumberOfRooms = CheckIntValue();
			std::cout << std::endl;
			std::cout << "������� ������� ������� ����� :";
			wishHighestFloor = CheckIntValue();
			std::cout << std::endl;
			std::cout << "������� ������ ������� ����� :";
			wishLowestFloor = CheckIntValue();

			listType = "�������� � " + std::to_string(wishNumberOfRooms) + " ���������, ����������� ����� " + std::to_string(wishLowestFloor)+ "�" + std::to_string(wishHighestFloor) + " ������� \n";

			endList = GetListWithSetsNumberOfRoomsNFloorInterval(array, count, wishNumberOfRooms, wishHighestFloor, wishLowestFloor, endSize);
			break;

		case ListType::Space:
			std::cout << "������� ����������� ������� :";
			wishSpace = CheckDoubleValue();
			listType = "�������� ������� ������� ��������� " + std::to_string(wishSpace) + " \n";
			endList = GetListWithSpaceExceedingThen(array, count, wishSpace, endSize);
			break;
		}

		InputType outputVar = static_cast<InputType> (AscOutputType());

		switch (outputVar)
		{
		case InputType::Console:
			ConsoleOutput(array,listType, endSize);
			break;
		case InputType::File:
			FileOutput(array,listType, endSize);
			break;
		}

		delete[] array;
		delete[] endList;
		std::cout << "��������� ��������� 1 - �� 2 - ��� " << std::endl;
		Answer exitVar = static_cast<Answer>(CheckIntValue());
		switch (exitVar)
		{
		case Answer::Yes:
			return 0;
			
		case Answer::No:
			continue;
		
		}
	}
}

