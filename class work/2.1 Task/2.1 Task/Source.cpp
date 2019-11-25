//ООП
//Написати клас "Карточка на знижку", який містить наступну інформацію :
//Номер карточки
//Розмір знижки(знижка передбачається накопичуваною; на початковому етапі вона рівна 1 % .
//За кожні 1000 грн.покупки, сума знижки збільшується на 1 % .)
//Приховане допоміжне поле для збереження вартості накупленого товару
//Забезпечити можливість :
//Купляти товар з використанням карточки на знижку
//Виводити інформацію про поточну величину знижки
//Виводити інформацію про те, на яку суму ще необхідно докупити товару, щоб величина знижки збільшилась.
#include "Card_Sale.h"
#include <ctime>

int main() {
	srand(unsigned(time(NULL)));

	unsigned int nomber_card = rand() % 10000 + 99999;
	int sale = 0;
	int choise=1;

	Card_Sale My_card(nomber_card);
	for (; choise !=0;) {
		cout << "1.Buy smth " << endl;
		cout << "2.Show balance on card " << endl;
		cout << "3.Show discount on card " << endl;
		cout << "0.Exit " << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			cout << "Enter sum your sale : ";
			cin >> sale;
			My_card.Set_ecomulation(sale);
			break;
		case 2:
			My_card.show_ecomulation();
			break;
		case 3:
			My_card.show_discount();
			break;
		default:
			break;
		}
		
	}
	system("pause");
	return 0;
}
