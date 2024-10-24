#include <iostream>
//#include<alloc.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char* str1 = (char*)malloc(10);
	char* str2 = (char*)malloc(50);
	cout <<"Содержимое первой строки: " << str1<<endl;
	cout << "Содержимое второй строки: " << str2 << endl;
	free(str1);
	free(str2);
}