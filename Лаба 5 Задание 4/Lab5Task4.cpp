#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void modif(int*, string, string*);

void main()
{
	string line = "";
	string space = "";
	setlocale(LC_ALL, "Rus");
	string name;
	ofstream fout;
	fout.open("File5.txt");
	if (!fout.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		fout << "- 12 - 13 - 14 - 15 - 16 - 17 - 18 -\n";
		fout << "This is string two\n";
		fout << "This is string three";
	}
	fout.close();

	ifstream fin;
	fin.open("File5.txt");
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
			if (ch == '-')
				space += "-  ";
			switch (ch)
			{
			case '0':
				line += ch;
				break;
			case '1':
				line += ch;
				break;
			case '2':
				line += ch;
				break;
			case '3':
				line += ch;
				break;
			case '4':
				line += ch;
				break;
			case '5':
				line += ch;
				break;
			case '6':
				line += ch;
				break;
			case '7':
				line += ch;
				break;
			case '8':
				line += ch;
				break;
			case '9':
				line += ch;
				break;
			default:
				break;
			}
		}
	}
	fin.close();
	cout << "\n";

	cout << "\nПерезапишем данные в файле"<<endl;
	fout.open("File5.txt");
	if (!fout.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		fout << space<<endl;
		fout << "This is string two"<<endl;
		fout << "This is string three"<<endl;
		fout << line<<endl;
	}
	fout.close();
	fin.open("File5.txt");
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