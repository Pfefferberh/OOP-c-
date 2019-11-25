#pragma once
#include <string>
#include <iostream>
using namespace std;
class Car
{
	string tipe_car;
	int people;
public:
	Car();
	void Show_car();
	void Fill_car();
	void Set(int people);
	~Car();

};

