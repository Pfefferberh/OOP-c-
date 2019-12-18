#pragma once
#include "Book.h"
#include "Audio.h"
#include "Jurnal.h"

template <typename T1>
class CShop
{
	int size;
	T1 *tovar;
public:
	
	CShop(int size);
	~CShop();
	void Show_tovar();
	void Sort_tovar();
	
};

template<typename T1>
CShop<T1>::CShop(int size)
{
	this->size=size;
	this->tovar = new T1[this->size];
	for (int i = 0; i < size; i++) {
		this->tovar[i];
	}
}
template<typename T1>
CShop<T1>::~CShop()
{
	tovar = nullptr;
	delete[]tovar;
}


template<typename T1>
void CShop<T1>::Show_tovar() {
	for (int i = 0; i < this->size; i++) {
		tovar[i].Info();
	}
}
template<typename T1>
void CShop<T1>::Sort_tovar() {
	int memb;
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size - i - 1; j++) {
			if (tovar[j].price < this->tovar[j + 1].price) {
				memb = this->tovar[j].price;
				this->tovar[j].price = this->tovar[j + 1].price;
				this->tovar[j + 1].price = memb;
			}
		}
	}
}


