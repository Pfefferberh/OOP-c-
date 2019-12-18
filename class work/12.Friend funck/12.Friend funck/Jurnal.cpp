#include "Jurnal.h"

Jurnal::Jurnal()
{
	cout << "Enter the name jurnal ";
	cin >> this->name;
	cout << "Enter the price jurnal  ";
	cin >> this->price;
}

void Jurnal::Info()
{
	cout << "----------------Jurnal---------------" << endl;
	cout << "Name " << this->name << endl;
	cout << "Price " << this->price << endl;
	cout << "----------------====---------------" << endl;
}


Jurnal::~Jurnal()
{
}
