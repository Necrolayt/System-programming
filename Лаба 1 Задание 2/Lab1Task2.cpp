#define PR(x) printf("x=%u, *x=%d, &x=%u\n",x,*x,&x)
#include <stdio.h>
#include<iostream>
using namespace std;

void main()
{	
	setlocale(LC_ALL, "Rus");
	cout << "Вывод значений типа integer\n";
	int mas[] = { 100,200,300 };
	int *ptr1, *ptr2;
	ptr1 = mas;
	ptr2 = &mas[2];
	PR(ptr1);
	ptr1++;
	PR(ptr1);
	PR(ptr2);
	++ptr2;
	printf("ptr2-ptr1=%u\n", *ptr2 - *ptr1);

	cout << "Вывод значений типа double\n";
	double mas2[] = { 100.0,200.0,300.0 };
	double* ptr3, * ptr4;
	ptr3 = mas2;
	ptr4 = &mas2[2];
	PR(ptr3);
	ptr3++;
	PR(ptr3);
	PR(ptr4);
	++ptr4;
	printf("ptr4-ptr3=%u\n", *ptr4 - *ptr3);

	cout << "Вывод значений типа char\n";
	char mas3[] = { 'f','v','x'};
	char* ptr5, * ptr6;
	ptr5 = mas3;
	ptr6 = &mas3[2];
	PR(ptr5);
	ptr5++;
	PR(ptr5);
	PR(ptr6);
	++ptr6;
	printf("ptr6-ptr5=%u\n", *ptr6 - *ptr5);
}
