#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char* str1 = NULL;
	str1 = (char*)calloc(10, 20);
	strcpy_s(str1,20, "Hello");
	printf("Значение строки: %s\n", str1);
	free(str1);
}