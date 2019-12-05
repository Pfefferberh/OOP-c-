#pragma once
#include "Bible_include.h"

class Book
{
	friend Rainbow_shop;
	string name;
	int price;
	
	
public:
	Book();
	void Create();
	void Info();
	~Book();
};

