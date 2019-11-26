#include "Student.h"



Student::Student()
{
}



void Student::Fill_student()
{
	cout << "Enter name : " << endl;
	cin >> this->name;
	cout << "Enter surname : " << endl;
	cin >> this->surname;

}

void Student::Student_info()
{
	cout <<"  _____________________ "<< endl;
	cout <<" |                      "<< endl;
	cout <<" | Name : "<<this->name<< endl;
	cout <<" | Surname : "<<this->surname<< endl;
	cout <<" |_____________________ "<< endl;
}


Student::~Student()
{
}
