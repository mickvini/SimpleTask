//5	����� ������������ �������, ��������� ��� �������� ������ �������� �������, � ������ ������������� ����� �������� - 1.

#include "Header.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int* arr0 = nullptr, realSize;

	generateArr(arr0, realSize);
	outputArr(arr0, realSize);
	mainFunction(arr0, realSize, searchOfMaxElement(arr0, realSize));
	outputArr(arr0, realSize);
	delete[] arr0;
	


	system("pause");
	return 0;
}