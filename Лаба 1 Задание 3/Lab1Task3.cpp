#include<iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Rus");
	int a = 2, b = 5;
	int* a1, a2;

	void obmen(int, int);
	void obmen2(int*, int*);
	void obmen3(int&, int&);
	cout << "�� ������: � = " << a << " b = " << b << endl;
	obmen(a, b);
	cout << "����� ������ 1: � = " << a << " b = " << b << endl;
	obmen2(&a, &b);
	cout << "����� ������ 2: � = " << a << " b = " << b << endl;
	obmen3(a, b);
	cout << "����� ������ 3: � = " << a << " b = " << b << endl;

}

void obmen(int a, int b) 
{
	int t;
	t = a;
	a = b;
	b = t;
}

void obmen2(int*a, int*b)
{
	int t = *b;
	*b = *a;
	*a = t;
}

void obmen3(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}