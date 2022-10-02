#pragma once
#include "Flat.h"
#include <iostream>
#include <string>
#include <fstream>
#include "CheckFile.h"
void FileOutput(Flat* array, std::string var, int endSize);
void ConsoleOutput(Flat* array, std::string var, int endSize);
void InitialFileOutput(Flat* array, int size);
