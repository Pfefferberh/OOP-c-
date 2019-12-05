#include "Book.h"

void Book::Info()
{
	cout <<"Name "<< this->name<<endl;
	cout <<"Price "<< this->price<<endl;
}

void Book::Create()
{
	cout << "Enter the name book "; 
	cin>>this->name;
	cout << "Enter the price book  ";
	cin>>this->price;
}

Book::Book()
{
	Create();
}


Book::~Book()
{
}
