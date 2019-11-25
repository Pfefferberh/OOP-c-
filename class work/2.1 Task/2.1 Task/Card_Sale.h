#pragma once
#include <iostream>
using namespace std;
class Card_Sale
{
	int nomber_card;
	short discount=1;
	int ecomulation=0;
	void up_discount();
public:
	Card_Sale(unsigned int newnomber_card);
	void show_ecomulation();
	void show_discount();
	void Set_ecomulation(int newsale);
};

