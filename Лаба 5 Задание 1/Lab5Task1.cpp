#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	string name;
	cout << "Введите имя файла (с указанием расширения): ";
	cin >> name;
	ofstream fout;
	fout.open(name);
	//проверяем, создался ли файл или нет
	if (!fout.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		fout <<"Исходные данные строки";
	}
	//закрываем поток вывода
	fout.close();

	ifstream fin;
	fin.open(name);
	if (!fin.is_open())
	{
		cout << "Ошибка чтения файла!";
	}
	else
	{
		cout << "Содержимое файла: " << endl;
		char ch;
		while (fin.get(ch))
		{
			cout << ch;
		}
	}
	fin.close();
}