#pragma once

#include <iostream>

using namespace std;

class XString
{
	char sentes[];
public:
	XString();
	XString(char sentens[],int size);
	void Write_sentes();
	void Show_sentes(int size);

	~XString();
};

