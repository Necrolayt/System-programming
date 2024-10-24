#include <iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int mas[] = { 6,2,23,75,1,8,10,3,12 };
	int n = sizeof(mas) / sizeof(0);
	int j, t, min = 999, max = 0;
	int firstIndex, secondIndex;
	int firstVal, secondVal;
	bool stage = true;
	for (int i = 0; i < n; i++)
	{
		//блок сортировки чётных чисел
		j = i;
		while (j < n && stage) 
		{
			if (mas[j] % 2 == 0) 
			{
				firstIndex = j;
				firstVal = mas[j];
				stage = false;
			}else
				j++;
		}
		j++;
		stage = true;
		while (j < n && stage)
		{
			if (mas[j] % 2 == 0)
			{
				secondIndex = j;
				secondVal = mas[j];
				stage = false;
			}
			else
				j++;
		}
		if (firstVal > secondVal) 
		{
			t = mas[secondIndex];
			mas[secondIndex] = mas[firstIndex];
			mas[firstIndex] = t;
		}
	}
	cout << "Первый этап, сортировка чётных чисел" << endl;
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";

	for (int i = 0; i < n; i++)
	{
		//блок сортировки нечётных чисел
		j = i;
		stage = true;
		while (j < n && stage)
		{
			if (mas[j] % 2 != 0)
			{
				firstIndex = j;
				firstVal = mas[j];
				stage = false;
			}
			else
				j++;
		}
		j++;
		stage = true;
		while (j < n && stage)
		{
			if (mas[j] % 2 != 0)
			{
				secondIndex = j;
				secondVal = mas[j];
				stage = false;
			}
			else
				j++;
		}
		if (firstVal < secondVal)
		{
			t = mas[secondIndex];
			mas[secondIndex] = mas[firstIndex];
			mas[firstIndex] = t;
		}
	}
	cout << "\nВторой этап, сортировка нечётных чисел" << endl;
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
}