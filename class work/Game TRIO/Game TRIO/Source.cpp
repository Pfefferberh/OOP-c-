//Опишіть класи "Swordsman" (Мечник), "Archer" (Лучник)і "Mage" (Маг), кожен з яких є екземпляром базового класу "Unit" (штука, елемент) в комп'ютерній грі, і може атакувати, ухилятись від атак і вмирати.
//
//У мечника 15 хіт - поінтів(життів), пошкодження при атаці 5, шанс ухилятись 60 % .
//Лучник: 12 hp, 4 dmg, 40 % dodge
//	Маг : 8 hp, 10 dmg, 30 % dodge
//
//
//	В main() створіть два масива(ворогуючі сторони) по три юніта в кожному, причому тип юніта(мечник, лучник чи маг) має задаватись випадково, при заповненні цих масивів.Тобто один раз запустивши вашу програму, може створитись три лучники проти мечника і двох магів, іншого - лучник, мечник і маг проти двох мечників і лучника і т.д.
//
//	Далі в циклі земулюйте бій між ними, поки бійці однієї з сторін всі не загинуть.В консоль при цьому виводьте повідомлення хто кого атакував, чи вдалась атака, скільки життя залишилось у жертви чи вона загинула.Нехай бій відбувається поступово, по натиснення клавіші spacebar(пробіла), щоб ми могли спостерігати його атака за атакою.
//
//	В кінці бою оголосіть, яка команда перемогла(перша / друга, синя / червона, альянс / орки - як вже ваша фантазія вам підскаже).
//
//	Не забудьте здійснити приведення типів там, де це необхідно.
//
//

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class unit
{
public:
	string name;
	int health;
	int damage;
	int chans;
	void war(unit bad_man);
	void show(unit bad_man);
	unit() {};
	~unit() {};
};
void unit::war(unit bad_man)
{
	this->show(bad_man);
	srand(unsigned(time(NULL)));
	if (rand() % 100 > bad_man.chans) {
		bad_man.health = bad_man.health - this->damage;
		cout << this->name << " attacked " << bad_man.name << endl;
		cout << "Health " << bad_man.name << ": " << bad_man.health << endl;
	}
	if (rand() % 100 > this->chans) {
			this->health = this->health - bad_man.damage;
			cout << bad_man.name << " attacked " << this->name << endl;
			cout << "Health " << this->name << ": " << this->health << endl;
	}
	
}
void unit::show(unit bad_man)
{
	cout << this->name <<" Health: " << this->health << endl;
	cout << bad_man.name<<" Health: " << bad_man.health << endl;
}


class Swords :public unit
{
public:
	Swords() {
		this->name = "Swords";
		this->damage = 5;
		this->health = 15;
		this->chans = 60;
	};
	~Swords() {};
};
class Archer :public unit
{
public:
	Archer() {
		this->name = "Archer";
		this->damage = 10;
		this->health = 8;
		this->chans = 30;
	};
	~Archer() {};
};
class Withard :public unit
{
public:
	Withard() {
		this->name = "Withard";
		this->damage = 4;
		this->health = 12;
		this->chans = 40;
	};
	~Withard() {};
};

int main() {
	Swords x;
	Archer y;
	x.war(y);

	system("pause");
return 0;
}
