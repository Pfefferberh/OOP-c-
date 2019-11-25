#include "Car.h"



Car::Car()
{
}

void Car::Show_car()
{
	cout << "~~~~~~~~~~~~~~~~~~" << this->tipe_car << "~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Tipe car : " << this->tipe_car << endl;
	cout << "People in car : " << this->people << endl;
	
}

void Car::Fill_car()
{
	cout << "Type carrige: ";
	cin >> this->tipe_car;
	cout << "Passengers: ";
	cin >> this->people;
}

void Car::Set(int people)
{
	this->people = people;
}


Car::~Car()
{
}
