#include <iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int mas[] = { 45,21,7,4,30,10,1,-7,0,15 };
	int min, index, t;
	cout << "Исходный массив: " << endl;
	for (int i = 0; i < 10; i++)
		cout << mas[i] << " ";
	cout << "\nСортировка массива на промежутке от 3 до 8 по убыванию: " << endl;
	for (int i = 8; i > 3; i--) {
		for (int j = 3; j < 8; j++)
			if (mas[j] < mas[j + 1])
			{
				t = mas[j + 1];
				mas[j + 1] = mas[j];
				mas[j] = t;
			}
	}
	for (int i = 0; i < 10; i++)
		cout << mas[i] << " ";
}