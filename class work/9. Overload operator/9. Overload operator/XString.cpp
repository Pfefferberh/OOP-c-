#include "XString.h"

XString::XString() { 
	this->Write_sentes();
}

XString::XString(char sentens[],int size)
{
	for (int i = 0; i < size; i++) {
		this->sentes[i]= sentens[i];
	}
}

void XString::Write_sentes()
{
	for (int i = 0; i < 80; i++) {
		cout << "Enter the sentenses " << endl;
		cin >> sentes[i];
	}
}

void XString::Show_sentes(int size)
{
	for (int i = 0; i < size; i++) {
		cout << sentes[i] << endl;
	}
}


XString::~XString()
{
}
