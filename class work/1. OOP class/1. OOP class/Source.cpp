//ООП
//Завдання 1. Класна робота
//Створити клас "Точка" (Point), який складається з двох полів типу int: X та Y.Необхідно забезпечити :
//Введення координат точки користувачем
//Вивід інформації про точку на екран
//Можливість зміни будь - якої з координат на запит користувача(X або Y)

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Pointer{
//	int x=0;
//	int y=0;
//	int choise=1;
//
//public:
//	void Set_location() {
//		cout << "Enter the pointer x => " << endl;
//		cin >> x;
//		cout << "Enter the pointer y => " << endl;
//		cin >> y;
//	}
//	void Show_location() {
//		cout << "Location your pointer are [" << x << "," << y << "]" << endl;
//	}
//	void Change_x() {
//		cout << "Change x => " << endl;
//		cin >> x;
//	}
//	void Change_y() {
//		cout << "Change y => " << endl;
//		cin >> y;
//	}
//	void Menu() {
//		for (; choise != 0;) {
//			cout << "1.Set x,y " << endl;
//			cout << "2.Set x " << endl;
//			cout << "3.Set y " << endl;
//			cout << "4.Show x,y " << endl;
//			cout << "0.Exit" << endl;
//			cin >> choise;
//			switch (choise)
//			{
//			case 1:
//				Set_location();
//				break;
//			case 2:
//				Show_location();
//				break;
//			case 3:
//				Change_x();
//				break;
//			case 4:
//				Change_y();
//				break;
//			default:
//				break;
//			}
//		}
//	}
//};
//
//int main() {
//
//	Pointer New;
//	New.Menu();
//
//	system("pause");
//	return 0;
//}


//ООП
//Написати клас "Банківський рахунок" (Account), який містить :
//Номер рахунку
//Розмір коштів на рахунку
//Назва валюти рахунку(рублі, гривні, евро тощо), для позначення якої можна скористатись одним символом : R, G, E, $ тощо
//Забезпечити можливість :
//Відкривати рахунок та первинно вносити гроші на рахунок
//Знімати гроші з рахунку
//Докладати гроші на рахунок
//ПРИМІТКА!На 12 балів реалізувати також можливість здійснювати переказ грошей з одного рахунку на другий.

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Account {
	unsigned int number_account;
	int money_on_account=0;
	int money_change;
	int choise;

	string value;

public:
	void create_account() {
		number_account = rand() % 10000 + 99999;
		cout << "==================New nomber your account "<< number_account<<"====================" << endl;
		cout << "Add money : " << endl;
		cin >> money_on_account;
		cout << "Enter value : " << endl;
		cin >> value;
	}
	void Show_money() {
		cout << "Money on your account : " << money_on_account <<" "<<value<< endl;
	}
	void give_money() {
		cout << "Enter add money : " << endl;
		cin >> money_change;
		money_on_account += money_change;
	}
	void take_money() {
		cout << "Enter vindrow money : " << endl;
		cin >> money_change;
		money_on_account -= money_change;
	}
	
	void Menu() {
		for (; choise != 0;) {
			system("cls");
			cout << "1.Show money " << endl;
			cout << "2.Add money " << endl;
			cout << "3.Vindrow money " << endl;
			cout << "0.Exit" << endl;
			cin >> choise;
			switch (choise)
			{
			case 1:
				Show_money();
				system("pause");
				break;
			case 2:
				give_money();
				break;
			case 3:
				take_money();
				break;
			default:
				break;
			}
		}
	}
};

int main() {
	srand(unsigned(time(NULL)));

	Account my;
	my.create_account();
	my.Menu();

	system("pause");
	return 0;
}