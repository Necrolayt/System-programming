#include <iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int mas[] = { 45,21,7,4,30,10,1,-7,0,15};
	int min, index, t;
	cout << "�������� ������: " << endl;
	for (int i = 0; i < 10; i++)
		cout << mas[i] << " ";
	cout << "\n���������� ������� �� ���������� �� 2 �� 7 �� �����������: "<<endl;
	for (int i = 7; i > 2; i--) {
		for (int j = 2; j < 7; j++)
			if (mas[j] > mas[j + 1])
			{
				t = mas[j + 1];
				mas[j + 1] = mas[j];
				mas[j] = t;
			}
	}
	for (int i = 0; i < 10; i++)
		cout << mas[i] << " ";
}