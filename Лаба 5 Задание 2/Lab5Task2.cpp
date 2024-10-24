#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void main()
{
	int voidCh = 0, fullCh = 0;
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
		fout << "Данные строки 1";
		fout << "Данные строки 2";
		fout << "Данные строки 3";
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
			if (ch == ' ' || ch == '\n')
				voidCh++;
			else
				fullCh++;
		}
	}
	fin.close();
	cout << "\nКоличество пустых символов: " << voidCh << " Количество непустых символов: " << fullCh << endl;
}