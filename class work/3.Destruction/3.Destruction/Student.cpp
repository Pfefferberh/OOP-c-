#include "Student.h"



Student::~Student()
{
}

Student::Student()
{
	
}


void Student::Fill_marks()
{
	srand(unsigned(time(NULL)));

	for (int i = 0; i < SIZE; i++) {
		this->marks[i] = rand() % 12 + 1;
	}
}

void Student::Show_marks()
{
	cout << "Mark : " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << this->marks[i] << "  ";
	}
}

void Student::Show_student()
{
	cout << "====================Show " << this->name << "===================" << endl;
	cout << "Name : "<< this->name << endl;
	cout << "Surname : "<< this->surname << endl;
	cout << "Old : "<< this->old << endl;
	Show_marks();
	Midle_marks_student();
}

void Student::Midle_marks_student()
{
	for (int i = 0; i < SIZE; i++) {
		this->Midle_mark += this->marks[i];
	}
	this->Midle_mark = this->Midle_mark / SIZE;
	cout << "Midle marks student : " << this->Midle_mark << endl;
}

void Student::Fill_student()
{
	cout << "Name : " << endl;
	cin >> this->name;
	cout << "Surname : " << endl;
	cin >> this->surname;
	cout << "Old : " << endl;
	cin >> this->old;
}
