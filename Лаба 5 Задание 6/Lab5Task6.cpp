#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string encoder(string, string);
string decoder(string, string);

int x,x2;
int a = 1;

int main() {
    setlocale(LC_ALL, "Rus");

    string key = "";
    string newLine = "";
    string name1 = "";
    string name2 = "";
    cout << "Введите ключ шифрования (не используйте кирилицу): ";
    cin >> key;
    cout << "\nКлюч шифрования: " << key << endl;
    cout << "Введите имя файла, куда будет записана шифровка (не используйте кирилицу, укажите .txt в конце имени): ";
    cin >> name1;
    cout << "Введите имя файла, куда будет записана дешифровка (не используйте кирилицу, укажите .txt в конце имени): ";
    cin >> name2;

    ofstream fout;
    fout.open("original.txt");
    if (!fout.is_open())
    {
        cout << "Ошибка открытия файла!" << endl;
    }
    else
    {
        fout << "This is the first line" << endl;
        fout << "Many words in this line" << endl;
        fout << "Another text in end file." << endl;
    }
    fout.close();

    ifstream fin;
    fin.open("original.txt");
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
    cout << "\n";

    string line;  
    ifstream ini_file{ "original.txt" };
    ofstream out_file{ name1 };
    cout << "После кодирования, строки имеют вид: " << endl;
    if (ini_file && out_file) {
        while (getline(ini_file, line)) {
            x = line.length();
            x2 = key.length();
            newLine = encoder(line, key);
            out_file << newLine << "\n";
        }
        cout << "Копирование завершено \n";
    }
    else {
        // Что-то пошло не так
        printf("Не удаётся прочитать файл");
    }
    ini_file.close();
    out_file.close();
    a = 1;

    cout << "\nПосле декодирования, строки имеют вид: " << endl;
    ifstream ini_file2{name1};
    ofstream out_file2{name2};
    if (ini_file2 && out_file2) {
        while (getline(ini_file2, line)) {
            x = line.length();
            x2 = key.length();
            newLine = decoder(line, key);
            out_file2 << newLine << "\n";
        }
        cout << "Декодирование завершено \n";
    }
    else {
        // Что-то пошло не так
        printf("Не удаётся прочитать файл");
    }
    // Закрытие файлов
    ini_file2.close();
    out_file2.close();
    return 0;
}

string encoder(string line, string key)
{
    string newLine;
    int j = 0;
    for (int i = 0; i < x; i++)
    {
        if (j > x2-1)
            j = 0;
        newLine += line[i] + key[j];
        j++;
    }
    cout << "Cтрока " << a << " : " << newLine << endl;
    a++;
    return newLine;
}

string decoder(string line, string key)
{
    string newLine;
    int j = 0;
    for (int i = 0; i < x; i++)
    {
        if (j > x2-1)
            j = 0;
        newLine += line[i] - key[j];
        j++;
    }
    cout << "Cтрока " << a << " : " << newLine << endl;
    a++;
    return newLine;
}