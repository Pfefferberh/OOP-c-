#include "Droub.h"

int Droub::Find_abby(int chislo, int chislo_two)
{
	if (chislo_two == 0) return chislo;
	return Find_abby(chislo_two, chislo % chislo_two);
}

Droub::Droub()
{
	this->chisl = 0;
	this->znamen = 1;
}

Droub::Droub(int chislo)
{
	this->chisl = chislo;
	this->znamen = 1;
}

Droub::Droub(int chislo, int chislo_two)
{
	this->chisl = chislo;
	this->znamen = chislo_two;
}

void Droub::Set_chisl(int chislo)
{
	this->chisl = chislo;
}

int Droub::Get_chisl()
{
	return this->chisl;
}

void Droub::Set_znamen(int chislo)
{
	this->znamen = chislo;
}

int Droub::Get_znamen()
{
	return this->chisl;
}

void Droub::Show()
{
	cout <<this->chisl<<"/"<< this->znamen << endl;
}

void Droub::Abby()
{
	int our = Find_abby(this->chisl, this->znamen);
	this->chisl /= our;
	this->znamen /= our;
	Show();
}

void Droub::Add(Droub &a, Droub &b)
{
	int res_a=(a.chisl*b.znamen)+(b.chisl*a.znamen);
	int res_c= a.znamen*b.znamen;
	int o= Find_abby(res_a, res_c);
	cout << res_a / o <<"/"<< res_c / o <<endl;
}

void Droub::Resus(Droub & a, Droub & b)
{
	int res_a = (a.chisl*b.znamen) - (b.chisl*a.znamen);
	int res_c = a.znamen*b.znamen;
	int o = Find_abby(res_a, res_c);
	cout << res_a / o << "/" << res_c / o << endl;
}

void Droub::Multi(Droub & a, Droub & b)
{
	int res_a = a.chisl*b.chisl;
	int res_c = a.znamen*b.znamen;
	int o = Find_abby(res_a, res_c);
	cout << res_a / o << "/" << res_c / o << endl;
}

void Droub::Divite(Droub & a, Droub & b)
{
	int res_a = a.chisl*b.znamen;
	int res_c = a.znamen*b.chisl;
	int o = Find_abby(res_a, res_c);
	cout << res_a / o << "/" << res_c / o << endl;
}




Droub::~Droub()
{
}
