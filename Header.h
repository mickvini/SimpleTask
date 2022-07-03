#pragma once

#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <time.h>

using namespace std;

int inputInt(const char query[]);

void generateArr(int*& arr, int& realSize);

void outputArr(int* arr, int realSize);

int searchOfMaxElement(int* arr, int realSize);

void mainFunction(int* arr, int realSize, int maxElem);
