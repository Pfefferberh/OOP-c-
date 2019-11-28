#include "Fish.h"


Fish::Fish()
{
}

void Fish::Show_ocean()
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			 cout << this->ocean[i][j]<<"  ";
		}
		cout << endl;
	}
}

void Fish::Move_fish()
{
	srand(unsigned(time(NULL)));
	this->x = rand() % 10 + 1;
	this->y = rand() % 10 + 1;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == this->x && this->y == j) {
				this->ocean[i][j] = 5;
			}
		}
	}
}


Fish::~Fish()
{
}
