#include <iostream>
#include<string.h>;
#include <string>
#include<cstring>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char line[50] = "Hello, World";
	char line2[50] = " In this programm";
	cout << "������ 1: " << line<<" ������ 2: " <<line2<<endl;
	cout << "����� ������ 1: " << strlen(line)<<endl;
	strcat_s(line, line2);
	cout << "������������ �����: " << line<<endl;

	char str1[] = "This is new line";
	char str2[40] = "";
	strcpy_s(str2, str1);
	cout << "����������� ������ 3 � ������ ������ 4, ���������� ������ 4: " << str2 << endl;

	cout << "��������� ��������� ������ 1 � ������ 4: " << strcmp(line, str2);

}