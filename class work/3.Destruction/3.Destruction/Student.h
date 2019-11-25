#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Student
{
	string name;
	string surname;
	int old;
	int SIZE=5;
	double Midle_mark=0;
	int marks[5];
public:
	Student();
	~Student();
	void Fill_marks();
	void Show_marks();
	void Show_student();
	void Midle_marks_student();
	void Fill_student();

};

