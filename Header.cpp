#include "Header.h"

int inputInt(const char query[])
{
	int i;
	cout << query;
	while ((cin >> i).fail() || i < 0) {
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cout << "Error, try again: " << endl;
	}
	return i;
}

void generateArr(int*& arr, int& realSize)
{
	srand(time(NULL));
	realSize = inputInt("Enter realSize of Array: ");
	int upperLimit = inputInt("Enter Upper Limit of generation: "), bottomLimit = inputInt("Enter Bottom Limit of generation: ");
	if (upperLimit < bottomLimit)
		swap(upperLimit, bottomLimit);
	arr = new int[2 * realSize];
	for (int i = 0; i < realSize; ++i)
	{
		arr[i] = rand() % (upperLimit - bottomLimit) + bottomLimit;
	}
}

void outputArr(int* arr, int realSize)
{
	for (int i = 0; i < realSize; ++i)
	{
		cout << setw(3) << arr[i];
	}
	cout << endl;
}

int searchOfMaxElement(int* arr, int realSize)
{
	int i = 0;
	int max = arr[i];
	for (i = 1; i < realSize; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

void mainFunction(int* arr, int realSize, int maxElem)
{
	for (int i = 0; i < realSize; ++i)
	{
		if (arr[i] == maxElem)
		{
			arr[i] = 1;
		}
	}
	arr[4] = maxElem;
}
