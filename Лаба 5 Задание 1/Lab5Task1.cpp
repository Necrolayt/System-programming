#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void main()
{
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
		fout <<"�������� ������ ������";
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
		}
	}
	fin.close();
}