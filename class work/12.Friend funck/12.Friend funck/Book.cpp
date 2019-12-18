#include "Book.h"

void Book::Info()
{
	cout << "----------------Book---------------" << endl;
	cout <<"Name "<< this->name<<endl;
	cout <<"Autor "<< this->autor<<endl;
	cout <<"Publishet "<< this->publishet<<endl;
	cout <<"Price "<< this->price<<endl;
	cout << "----------------====---------------" << endl;
}


void Book::Create()
{
	cout << "Enter the name book "; 
	cin>>this->name;
	cout << "Enter the name book ";
	cin >> this->autor;
	cout << "Enter the name book ";
	cin >> this->publishet;
	cout << "Enter the price book  ";
	cin>>this->price;
}

Book::Book()
{
	cout << "Enter the name book ";
	cin >> this->name;
	cout << "Enter the price book  ";
	cin >> this->price;
}



Book::~Book()
{
}
