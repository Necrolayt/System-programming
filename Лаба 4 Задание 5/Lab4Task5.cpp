#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int size;
	cout << ("������� ���������� ���������: ");
	cin >> size;
	string* arrayPtr = (string*)calloc(size, sizeof(string));

	if (arrayPtr == NULL) exit(1);

	for (int ix = 0; ix < size; ix++)
	{
		std::cout << ("������� ������: ");
		std::cin >> arrayPtr[ix];
	}

	std::cout << "�������� ������: ";
	for (int ix = 0; ix < size; ix++)
		std::cout << arrayPtr[ix] << " ";
	free(arrayPtr);

}