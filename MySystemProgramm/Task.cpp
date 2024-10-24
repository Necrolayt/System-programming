#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int i, k,var;
	int power(int, int);
	cout << "¬ведите число, которое хотите возвести в степень\n";
	cin >> var;

	for (i = 1; i < 10; i++)
	{
		k = power(var, i);
		cout << "i = " << i << ", k = " << k << endl;
	}
}

int power(int x, int n)
{
	int i, p = x;
	for (i = 1; i < n; i++) p *= x;
	return p;
}