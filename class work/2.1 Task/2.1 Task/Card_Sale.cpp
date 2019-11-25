#include "Card_Sale.h"
Card_Sale::Card_Sale(unsigned int newnomber_card)
{
	nomber_card = newnomber_card;
}

void Card_Sale::show_ecomulation() {
	cout << " Your ecomulation : " << ecomulation<<endl;
}
void Card_Sale::Set_ecomulation(int newsale) {
	ecomulation += newsale;

}
void Card_Sale::show_discount() {
	up_discount();
	cout << "Discount : " << discount << " %" << endl;
}
void Card_Sale::up_discount() {
	int new_ecomulation= ecomulation / 1000;

	if (new_ecomulation<=10) {
		discount= new_ecomulation;
	}
	else if (new_ecomulation > 10) {
		discount = 10;
	}
}