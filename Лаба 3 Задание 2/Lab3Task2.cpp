#include <iostream>
#include<conio.h>
#include <stack>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int bufer, number = 1;
	int mas[] = { 2,5,-8,1,-4,6,3,-5,-9,13,0,4,9 };
	int n = sizeof(mas) / sizeof(0);

	cout << "�������� ������: " << endl;
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
	cout << endl;
	//���������� ���������
	for (int d = n - 1; d > -1; d--) {
		for (int i = 0; i < d; i++)
			if (mas[i] > mas[i + 1])
			{
				bufer = mas[i + 1];
				mas[i + 1] = mas[i];
				mas[i] = bufer;
			}
		cout << "������ ����� " << number << " ���� ���������� ���������: " << endl;
		for (int i = 0; i < n; i++)
			cout << mas[i] << " ";
		number++;
		cout << endl;
	}
	cout << "\n\n";

	int mas2[] = {4,9,7,6,2,3,8};
	int n2 = sizeof(mas2) / sizeof(0);

	cout << "�������� ������ 2 �� ������� ����������: " << endl;
	for (int i = 0; i < n2; i++)
		cout << mas2[i] << " ";
	cout << endl;
	//������� ����������
	int i, j, left, right;
	int pivot; //������� ������� ������������ �������
	stack <int> stk;//������ ����� � ������ ������� �������
	left = 0;
	right = n2 - 1;
	stk.push(left);
	stk.push(right);
	do
	{
		right = stk.top();
		stk.pop(); //�������� �������� �� �������
		left = stk.top();
		stk.pop(); 

		i = left;
		j = right;
		pivot = (i + j) / 2;
		do
		{
			while (mas2[i] < mas2[pivot])
				i++;
			while (mas2[j] > mas2[pivot])
				j--;
			if (i <= j) 
			{
				int t = mas2[i];
				mas2[i] = mas2[j];
				mas2[j] = t;
				i++;
				j--;
			}
		} while (i <= j);

		if (left<j)
		{
			stk.push(left);
			stk.push(j);
		}
		if (i < right)
		{
			stk.push(i);
			stk.push(right);
		}

	} while (!stk.empty());//���� ��������, ���� ���� �� ����
	cout << "������ 2 ����� ������� ����������: " << endl;
	for (int i = 0; i < n2; i++)
		cout << mas2[i] << " ";
	cout << endl;
}