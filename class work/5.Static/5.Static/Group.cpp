#include "Group.h"



Group::Group()
{
}

Group::Group(unsigned short size_group, string name_group, string major, unsigned short curse)
{
	this->name_group = name_group;
	this->major = major;
	this->curse = curse;
	this->size_group=size_group;
	this->studentS = new Student[size_group];
	for (int i = 0; i < size_group;i++) {
		this->studentS[i].Fill_student();
	
	}
}

void Group::Group_info()
{
	cout << " Group name : " << this->name_group << endl;
	cout << " Major : " << this-> major<< endl;
	cout << " Curse : " << this-> curse<< endl;
	cout << "------------Show students------------------" << endl;
	this->Group_students_info();
	cout << "=============================================" << endl;
}

void Group::Group_students_info()
{
	for (int i = 0; i < size_group; i++) {
		this->studentS[i].Student_info();
	}
}

void Group::Set_name_group(string name_group)
{
	this->name_group = name_group;
}

void Group::Set_major(string major)
{
	this->major = major;
}

void Group::Set_curse(unsigned short curse)
{
	this->curse = curse;
}

void Group::Set_student(unsigned short number)
{
		this->studentS[number-1].Fill_student();
}

Group::~Group()
{
}
