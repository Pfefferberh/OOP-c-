#pragma once
#include "Bible_include.h"

class Book
{
	string name;
	string autor;
	string publishet;
	

public:
	int price;
	Book();
	void Create();
	void Info();

	~Book();
};

