#include "Menu.h"

int AscUserMenu()
{
	int variant;
	std::cout << "��� ��������� ������� : " << std::endl
		<< " 1 ������ �������, ������� �������� ����� ������, ." << std::endl
		<< " 2 ������ �������, ������� �������� ����� ������ � ������������� �� �����,"
		<< "������� ��������� � ������������ ���������� " << std::endl
		<< " 3 ������ �������, ������� �������, ������������� ��������. " << std::endl;
	variant = 	CheckMenuItem(3);
	return variant;
}

int AscUserInputType()
{
	int variant;
	std::cout << "Enter 1 for manual input " << std::endl
		<< "Enter 2 for file input " << std::endl;
	variant = CheckMenuItem(2);
	return variant;
}

int AscOutputType()
{
	int variant;
	std::cout << "Enter 1 for console output " << std::endl
		<< "Enter 2 for file output " << std::endl;
	variant = CheckMenuItem(2);
	return variant;
}

int AscOutputMenu()
{
	int variant;
	std::cout << "Enter 1 for overwriting an existing file " << std::endl
		<< "Enter 2 for creating a new file" << std::endl;
	variant =  CheckMenuItem(2);
	return variant;
}

int AscInitialDataSaveMenu()
{
	int variant;
	std::cout << "1 - ��������� �������� ������" << std::endl
		<< "2 - ���������� ��� ���������� " << std::endl;
	variant = CheckMenuItem(2);
	return variant;
}
