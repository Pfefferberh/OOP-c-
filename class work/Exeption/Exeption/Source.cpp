//Реалізувати задачу Паспорт, Іноземний Паспорт як багато
//файловий проект.При цьому кожен з класів розмістити у окремому просторі імен.
//Перевірити роботу класів.
#include "Functions.h"

template <typename A, typename B>
class Pasport
{
	A name = A();
	A father = A();
	A surname = A();
	B indefication_cod=B();
public:
	Pasport()
	{
	this->name=Func::Fill(this->name,"Romana");
	this->surname = Func::Fill(this->surname,"surname");
	this->father = Func::Fill(this->father,"father");
	this->indefication_cod = Func::Fill(this->indefication_cod,"indefication cod");
	};
	void Show() {
		Func::Show(this->name, "name");
		Func::Show(this->surname, "surname");
		Func::Show(this->father, "father");
		Func::Show(this->indefication_cod, "indefication cod");
	};
	~Pasport() {};
};


int main() {
	Pasport<string,int> man;
	man.Show();
	
	system("pause");
	return 0;
}