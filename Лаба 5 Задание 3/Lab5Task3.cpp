#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void modif(int*, string, string*);

void main()
{
	int n = 0;
	string lineFind = "";
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
		fout << "This is string 1";
		fout << "\n";
		fout << "This is string 2";
		fout << "\n";
		fout << "This is string 3";
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
		cout << "����� ������ - This is string 2 - � �������� �����: " << endl;
		string str;
		while (!fin.eof())
		{
			str = "";
			getline(fin, str);
			//cout << str << endl;
			modif(&n, str,&lineFind);
		}
	}
	fin.close();
	//������� ��������� ������ � ����� ����
	cout << "������� ��������� ������ � ����� ����" << endl;
	fout.open("MyFile4.txt");
	if (!fout.is_open())
	{
		cout << "������ �������� �����!" << endl;
	}
	else
	{
		fout << lineFind;
	}
	fout.close();
	cout << "������ ������ �����: "<<endl;
	fin.open("MyFile4.txt");
	if (!fin.is_open())
	{
		cout << "������ ������ �����!";
	}
	else
	{
		string str;
		while (!fin.eof())
		{
			str = "";
			getline(fin, str);
			cout << str << endl;
		}
	}
	fin.close();
}

void modif(int *n, string str, string *lineFind)
{
	*n += 1;
	if (*n == 2)
		*lineFind = str;
}