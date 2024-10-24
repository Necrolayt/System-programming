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
	cout << "Строка 1: " << line<<" Строка 2: " <<line2<<endl;
	cout << "Длина строки 1: " << strlen(line)<<endl;
	strcat_s(line, line2);
	cout << "Конкатенация строк: " << line<<endl;

	char str1[] = "This is new line";
	char str2[40] = "";
	strcpy_s(str2, str1);
	cout << "Копирование строки 3 в пустую строку 4, содержимое Строки 4: " << str2 << endl;

	cout << "Результат сравнения строки 1 и строки 4: " << strcmp(line, str2);

}