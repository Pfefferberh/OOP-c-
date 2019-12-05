#pragma once
#include <iostream>
using namespace std;
class Droub
{
	int chisl;
	int znamen;
	static int Find_abby(int chislo, int chislo_two);
public:
	Droub();
	Droub(int chislo);
	Droub(int chislo, int chislo_two);

	void Set_chisl(int chislo);
	int Get_chisl();
	void Set_znamen(int chislo);
	int Get_znamen();
	void Show();
	void Abby();
	static void Add(Droub &a, Droub &b);
	static void Resus(Droub &a, Droub &b);
	static void Multi(Droub &a, Droub &b);
	static void Divite(Droub &a, Droub &b);
	~Droub();
};

