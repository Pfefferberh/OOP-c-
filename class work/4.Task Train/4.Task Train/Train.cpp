#include "Train.h"



Train::Train()
{
}
Train::Train(string route, string type, int distance, short RCcount) {
	this->name = route;
	this->type = type;
	this->distance = distance;
	this->RCcount = RCcount;
	this->carrige = new Car[RCcount];
	for (int i = 0; i < this->RCcount; i++) {
		carrige[i].Fill_car();
	}
}
void Train::TrainInfo() {
	cout << "---------------------------" << this->name << "-------------------------------" << endl;
	cout << "Train route: " << this->name << "\nType train: " << this->type << "\nDistans: " << this->distance
		<< "\nCount of Railway Carrige: " << this->RCcount << endl;
	for (int i = 0; i < this->RCcount; i++) {
		this->carrige[i].Show_car();
	}
	cout << "------------------------------------End----------------------------------------" << endl;
}
Train::Train(const Train &other) {
	this->RCcount = other.RCcount;
	this->name = other.name;
	this->type = other.type;
	this->distance = other.distance;
	this->carrige = new Car[other.RCcount];
	for (int i = 0; i < other.RCcount; i++) {
		this->carrige[i] = other.carrige[i];
	}
}

void Train::Del()
{
	carrige= nullptr;
	delete[]carrige;
}

void Train::Set(string route, string type, int distance,short pe, short peo, short peopl)
{
	this->name = route;
	this->type = type;
	this->distance = distance;
	this->carrige[0].Set(pe);
	this->carrige[1].Set(peo);
	this->carrige[2].Set(peopl);
	
}


Train::~Train()
{
	delete[]carrige;
}
