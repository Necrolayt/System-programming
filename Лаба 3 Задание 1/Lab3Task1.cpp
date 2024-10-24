#include <iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int mas[] = {2,5,-8,1,-4,6,3,-5,-9,13,0,4,9};
	int i, imin = 0, imax = 0;
	int n = sizeof(mas) / sizeof(i);
	cout << "Текущий массив:\n";
	for (i = 0; i < n; i++)
		cout << mas[i] << " ";
	cout << endl;
	for (i = 0; i < n - 1; i++) 
	{
		imin = i;
		for (int j = i + 1; j < n; j++)
			if (mas[j] < mas[imin])
				imin = j;
		int t = mas[i];
		mas[i] = mas[imin];
		mas[imin] = t;
	}
	for (i = 0; i < n; i++)
		cout << mas[i] << " ";
	cout << endl;
}