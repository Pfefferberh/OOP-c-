//Контрольна робота!
//Создать класс СПРАВОЧНИК со следующими полями :
//1. Название фирмы;
//2. Владелец;
//3. Телефон;
//4. Адрес;
//5. Род деятельности.
//Реализовать следующие возможности :
//1. Поиск по названию;
//2. Поиск по владельцу;
//3. Поиск по номеру телефона;
//4. Поиск по роду деятельности;
//5. Показ всех записей и добавление.
//Вся информация, должна сохранятся в бинарном файле, должна быть реализована
//возможность добавления новых данных.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Telef_bok
{
public:
	Telef_bok() {};
	~Telef_bok() {};
	void Fill() {
		cout << "Enter the name firm " << endl;
		cin>>this->name_firm;
		cout << "Enter the name directory " << endl;
		cin >> this->name_director;
		cout << "Enter the name adress " << endl;
		cin >> this->adress;
		cout << "Enter the work " << endl;
		cin >> this->work;
		cout << "Enter the number phone " << endl;
		cin >> this->phone;
	}
	void Show() {
		cout << "-------------Profill------------------" << endl;
		cout <<"Name firm: "<< this->name_firm << endl;
		cout <<"Name directory: "<< this->name_director << endl;
		cout <<"Name adress: "<< this->adress << endl;
		cout <<"Name work: "<< this->work << endl;
		cout <<"Name phone: "<< this->phone << endl;
		cout << "----------------end-------------------" << endl;
	}
	string Get_nameFirm() { return this->name_firm; }
	string Get_nameDirector() { return this->name_director; }
	string Get_adress() { return this->adress; }
	string Get_work() { return this->work; }
	int Get_phone() { return this->phone; }
private:
	string name_firm;
	string name_director;
	string adress;
	string work;
	int phone;
};
void Find_nameFirm(Telef_bok* book,int size,string search) {
	cout << "Enter the searching name " << endl;
	cin >> search;
	for (int i = 0; i < size;i++) {
		if (search==book[i].Get_nameFirm()) {
			cout << "==========Found===========" << endl;
			cout <<"index in book "<<i+1<<"   "<< book[i].Get_nameFirm() << endl;
		 }
		else if (search!=book[i].Get_nameFirm()&&i == size - 1) {
			cout << "==========NOT Found===========" << endl;
		}
	}
}
void Find_nameDirector(Telef_bok* book, int size, string search) {
	cout << "Enter the searching name " << endl;
	cin >> search;
	for (int i = 0; i < size; i++) {
		if (search == book[i].Get_nameDirector()) {
			cout << "==========Found===========" << endl;
			cout << "index in book " << i + 1 << "   " << book[i].Get_nameDirector() << endl;
		}
		else if (search != book[i].Get_nameDirector() && i == size - 1) {
			cout << "==========NOT Found===========" << endl;
		}
	}
}
void Find_adress(Telef_bok* book, int size, string search) {
	cout << "Enter the searching name " << endl;
	cin >> search;
	for (int i = 0; i < size; i++) {
		if (search == book[i].Get_adress()) {
			cout << "==========Found===========" << endl;
			cout << "index in book " << i + 1 << "   " << book[i].Get_adress() << endl;
		}
		else if (search != book[i].Get_adress() && i == size - 1) {
			cout << "==========NOT Found===========" << endl;
		}
	}
}
void Find_work(Telef_bok* book, int size, string search) {
	cout << "Enter the searching name " << endl;
	cin >> search;
	for (int i = 0; i < size; i++) {
		if (search == book[i].Get_work()) {
			cout << "==========Found===========" << endl;
			cout << "index in book " << i + 1 << "   " << book[i].Get_work() << endl;
		}
		else if (search != book[i].Get_work() && i == size - 1) {
			cout << "==========NOT Found===========" << endl;
		}
	}
}
void Find_phone(Telef_bok* book, int size, int search) {
	cout << "Enter the searching name " << endl;
	cin >> search;
	for (int i = 0; i < size; i++) {
		if (search == book[i].Get_phone()) {
			cout << "==========Found===========" << endl;
			cout << "index in book " << i + 1 << "   " << book[i].Get_phone() << endl;
		}
		else if (search != book[i].Get_phone() && i == size - 1) {
			cout << "==========NOT Found===========" << endl;
		}
	}
}

void Write_file(Telef_bok*book,int size) {
	ofstream writeFile;
	string path = "db.txt";

	writeFile.open(path, ofstream::app, ofstream::binary);

	if (!writeFile.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		for (int i = 0; i < size;i++) {
			writeFile.write((char*)&book[i], sizeof(Telef_bok));
			writeFile.write((char*)&"\n", sizeof(Telef_bok));
			cout << "Saved" << endl;
		}
	}

	writeFile.close();
}

void Read_file(Telef_bok*book) {
	int size;
	Telef_bok * bb;
	ifstream readFile("db.txt", ios::in | ios::binary | ios::ate);
	if (!readFile.is_open()) {
		cout << "Can't load data from file." << endl;
	}
	else {
		cout << "Loading ..." << endl;
		size = readFile.tellg();
		cout << "00000000000       "<<size << endl;
		bb = new Telef_bok[2];
		readFile.seekg(0, ios::beg);
		for (int i = 0;i<2 ; i++) {
			readFile.read((char *)&bb[i], sizeof(Telef_bok));
			bb[i].Show();
		}

		cout << "the entire file content is in memory";

	}
	readFile.close();
}

int main() {
	int size;
	int search_int;
	string search;
	cout << "Enter the size telephon book " << endl;
	cin >> size;
	Telef_bok*book = new Telef_bok[size];
	for (int i = 0; i < size; i++) {
		book[i].Fill();
	}
	for (int i = 0; i < size; i++) {
		book[i].Show();
	}
	Write_file(book,size);
	cout << "--------------READ---------------------" << endl;
	Read_file(book);
	//Find_nameFirm(book,size, search);

	system("pause");
	return 0;
}

