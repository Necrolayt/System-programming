#include <iostream>
#include<string.h>;
#include <string>
#include<cstring>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char str1[] = "qwerty", str2[] = "1234567890";
	int dlina1(char*);
	int dlina2(char*);
	int dlina3(char*);
	void copir(char*, char*);
	void sravn(char*, char*);
	void konkat(char*, char*);
	//������������� ������� ����� ������
	cout << "����� ������ str1 = " << dlina1(str1) << " ����� ������ str2 = " << dlina1(str2) << endl;
	cout << "����� ������ str1 = " << dlina2(str1) << " ����� ������ str2 = " << dlina2(str2) << endl;
	cout << "����� ������ str1 = " << dlina3(str1) << " ����� ������ str2 = " << dlina3(str2) << endl;
	//����� copir
	copir(str1, str2);
	cout << "��������� �����������: str1 = " << str1 << ", str2 = " << str2 << endl;
	//����� sravn
	cout << "��������� ��������� str1 � str2 = ";
	sravn(str1, str2);
	cout << endl;
	cout << "��������� ��������� str2 � str1 = ";
	sravn(str2, str1);
	cout << endl;
	//����� konka
	cout << "��������� ��������� str1 � str2 = ";
	konkat(str1, str2);
}

int dlina1(char *str)
{
	int x = strlen(str);
	return x;
}

int dlina2(char* str) 
{
	string s = str;
	int x = s.length();
	return x;
}

int dlina3(char* str) 
{
	string s = str;
	int x = s.size();
	return x;
}

void copir(char* str1, char* str2) 
{
	memcpy(str1, str2, strlen(str1));
}

void sravn(char* str1, char* str2) 
{
	string s = str1;
	string s2 = str2;
	cout<<s.compare(s2);
}

void konkat(char* str1, char* str2)
{
	string s = str1;
	string s2 = str2;
	string s3 = s + s2;
	cout << s3;
}