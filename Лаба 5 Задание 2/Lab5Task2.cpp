#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void main()
{
	int voidCh = 0, fullCh = 0;
	setlocale(LC_ALL, "Rus");
	string name;
	cout << "������� ��� ����� (� ��������� ����������): ";
	cin >> name;
	ofstream fout;
	fout.open(name);
	//���������, �������� �� ���� ��� ���
	if (!fout.is_open())
	{
		cout << "������ �������� �����!" << endl;
	}
	else
	{
		fout << "������ ������ 1";
		fout << "������ ������ 2";
		fout << "������ ������ 3";
	}
	//��������� ����� ������
	fout.close();

	ifstream fin;
	fin.open(name);
	if (!fin.is_open())
	{
		cout << "������ ������ �����!";
	}
	else
	{
		cout << "���������� �����: " << endl;
		char ch;
		while (fin.get(ch))
		{
			cout << ch;
			if (ch == ' ' || ch == '\n')
				voidCh++;
			else
				fullCh++;
		}
	}
	fin.close();
	cout << "\n���������� ������ ��������: " << voidCh << " ���������� �������� ��������: " << fullCh << endl;
}