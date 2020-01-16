//
//Завдання 3.
//Створити програму, яка працює подібно стандартній програмі Командний Рядок.Тобто
//програма очікує команду і виконує її.Вихід з програми виконувати за командою exit або
//quit.Реалізувати наступні команди :
//o create filename(створення текстового файлу, завершення вводу – комбінація Ctrl - Z)
//o print filename(вивід текстового файлу на екран)
//o append filename(доповнення текстового файлу, завершення вводу – комбінація Ctrl -
//	Z)
//	o copy filename1 filename2(копіювання файлу)
//	При введенні невірної команди або вказанні невірного шляху до файлу програма
//	повинна видавати відповідне повідомлення(«Невірна команда», «Невірна кількість
//		параметрів», «Невірний шлях до файлу»).

#include <iostream>
#include <string>
#include<conio.h>
#include <fstream>

using namespace std;
void Create();
void print();
void append();
void Copy();

namespace for_file {
	string path;
	string file;
};

void Stroka() {
	string comand="";
	for (int i = 0; comand!="exit";i++) {
		cout << "\\root: ";
		cin >> comand;
		if (comand == "create")			{ Create();}
		else if (comand == "print")		{ print();}
		else if (comand == "append")	{ append(); }
		else if (comand == "copy")		{ Copy(); }
		else if (comand == "help")		{cout << "create	print	append	copy	exit" << endl; }
		else if (comand == "exit")		{}
		else							{cout << "wrong command" << endl;}
	}
}
void Create() {
	ofstream file;
	system("cls");
	cout << "\\root: create ";
	cin >> for_file::path;
	string text;
	file.open(for_file::path, ofstream::app);
	if (!file.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
			cout << "Enter text" << endl;
			cin.ignore();
			getline(cin, text);
			file << text;
	}
	file.close();
}
void print() {
	ifstream file;
	string read;
	system("cls");
	cout << "\\root: print ";
	cin >> for_file::path;
	file.open(for_file::path);
	while (!file.eof()) {
		getline(file, read);
		cout << read << endl;
	}
	file.close();
}
void append() {
	ofstream file;
	system("cls");
	cout << "\\root: append ";
	cin >> for_file::path;
	string text;
	file.open(for_file::path, ofstream::app);
	if (!file.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		cout << "Enter text" << endl;
		cin.ignore();
		getline(cin, text);
		file << text;
	}
	file.close();
}
void Copy() {
	string name;
	system("cls");
	cout << "\\root: copy ";
	cin >> for_file::path;
	system("cls");
	cout << "\\root: copy "<< for_file::path<<" ";
	cin >> name;
	ifstream file(for_file::path);
	getline(file, for_file::file);
	ofstream to_file(name);
	to_file << for_file::file;
}

int main() {
	Stroka();
	system("pause");
	return 0;
}
