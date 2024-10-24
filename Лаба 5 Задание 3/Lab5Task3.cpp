#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void modif(int*, string, string*);

void main()
{
	int n = 0;
	string lineFind = "";
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
		fout << "This is string 1";
		fout << "\n";
		fout << "This is string 2";
		fout << "\n";
		fout << "This is string 3";
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
		cout << "Найдём строку - This is string 2 - в исходном файле: " << endl;
		string str;
		while (!fin.eof())
		{
			str = "";
			getline(fin, str);
			//cout << str << endl;
			modif(&n, str,&lineFind);
		}
	}
	fin.close();
	//запишем найденную строку в новый файл
	cout << "Запишем найденную строку в новый файл" << endl;
	fout.open("MyFile4.txt");
	if (!fout.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		fout << lineFind;
	}
	fout.close();
	cout << "Чтение нового файла: "<<endl;
	fin.open("MyFile4.txt");
	if (!fin.is_open())
	{
		cout << "Ошибка чтения файла!";
	}
	else
	{
		string str;
		while (!fin.eof())
		{
			str = "";
			getline(fin, str);
			cout << str << endl;
		}
	}
	fin.close();
}

void modif(int *n, string str, string *lineFind)
{
	*n += 1;
	if (*n == 2)
		*lineFind = str;
}