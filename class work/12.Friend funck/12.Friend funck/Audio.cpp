#include "Audio.h"

Audio::Audio()
{
	cout << "Enter the name audio ";
	cin >> this->name;
	cout << "Enter the name star ";
	cin >> this->star;
	cout << "Enter the count treks ";
	cin >> this->treks;
	cout << "Enter the price audio  ";
	cin >> this->price;

}

void Audio::Info()
{
	cout << "----------------Audio---------------" << endl;
	cout << "Name " << this->name << endl;
	cout << "Star " << this->star << endl;
	cout << "Counter treks " << this->treks << endl;
	cout << "Price " << this->price << endl;
	cout << "----------------====---------------" << endl;
}


Audio::~Audio()
{
}
