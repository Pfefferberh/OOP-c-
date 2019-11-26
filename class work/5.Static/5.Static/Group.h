#pragma once
#include "Student.h"

class Group
{
	 string name_group;
	 string major;
	 unsigned short curse;
	 unsigned short size_group;
	 Student* studentS;

public:
	Group();
	Group(unsigned short size_group, string name_group, string major ,unsigned short curse);
	void Group_info();
	void Group_students_info();
	void Set_name_group(string name_group);
	void Set_major (string major);
	void Set_curse(unsigned short curse);
	void Set_student(unsigned short curse);
	~Group();
};

