#pragma once
#include "Car.h"
class Train
{
	string name;
	string type;
	int number;
	unsigned int distance;
	unsigned short RCcount;
	Car *carrige;
public:
	Train();
	Train(string route, string type, int distance, short RCcount);
	void TrainInfo();
	Train(const Train &other);
	void Del();
	void Set(string route, string type, int distance, short pe, short peo, short peopl);

	~Train();
};

