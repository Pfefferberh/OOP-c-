#include<string>
#include<iostream>
#include <cstdlib>
#include <sstream>
using namespace std;

class Var
{
	char type;
	int iValue;
	double dValue;
	string str;

public:
	Var();
	Var(int value);
	Var(double value);
	Var(string str);
	Var operator+(Var &other);
	Var operator-(Var &other);
	Var operator+=(Var &other);
	Var operator-=(Var &other);
	Var operator*(Var &other);
	Var operator/(Var &other);
	bool operator==(Var &other);
	bool operator!=(Var &other);
	bool operator<(Var &other);
	bool operator>(Var &other);
	bool operator<=(Var &other);
	bool operator>=(Var &other);

	void ShowInfo();
	~Var();
};
Var::Var()
{
	this->type = '0';
	this->iValue = 0;
	this->dValue = 0.0;
	this->str = "";
}

Var::Var(int value)
{
	this->type = 'i';
	this->iValue = value;
	this->dValue = 0.0;
	this->str = "";
}

Var::Var(double value)
{
	this->type = 'd';
	this->iValue = 0;
	this->dValue = value;
	this->str = "";
}

Var::Var(string str)
{
	this->type = 's';
	this->iValue = 0;
	this->dValue = 0.0;
	this->str = str;
}

Var Var::operator+(Var & other)
{
	if (this->type == 'i' && other.type == 'i') return this->iValue + other.iValue;
	else if (this->type == 'i' && other.type == 'd') return this->iValue + int(other.dValue);
	else if (this->type == 'i' && other.type == 's') return this->iValue + atoi(other.str.c_str());
	else if (this->type == 'd' && other.type == 'i') return this->dValue + double(other.iValue);
	else if (this->type == 'd' && other.type == 'd') return this->dValue + other.dValue;
	else if (this->type == 'd' && other.type == 's') return this->dValue + atof(other.str.c_str());
	else if (this->type == 's' && other.type == 's') return this->str + other.str;
	else if (this->type == 's' && other.type == 'i') {
		string out_string;
		stringstream convert;
		convert << atoi(this->str.c_str()) + other.iValue;
		out_string = convert.str();
		return out_string;
	}
	else if (this->type == 's' && other.type == 'd') {
		string out_string;
		stringstream convert;
		convert << atof(this->str.c_str()) + other.dValue;
		out_string = convert.str();
		return out_string;
	}
}

Var Var::operator-(Var & other)
{
	if (this->type == 'i' && other.type == 'i') return this->iValue - other.iValue;
	else if (this->type == 'i' && other.type == 'd') return this->iValue - int(other.dValue);
	else if (this->type == 'i' && other.type == 's') return this->iValue - atoi(other.str.c_str());
	else if (this->type == 'd' && other.type == 'i') return this->dValue - double(other.iValue);
	else if (this->type == 'd' && other.type == 'd') return this->dValue - other.dValue;
	else if (this->type == 'd' && other.type == 's') return this->dValue - atof(other.str.c_str());
	else if (this->type == 's') return 0;
}

Var Var::operator+=(Var & other)
{
	if (this->type == 'i' && other.type == 'i') return this->iValue += other.iValue;
	else if (this->type == 'i' && other.type == 'd') return this->iValue += int(other.dValue);
	else if (this->type == 'i' && other.type == 's') return this->iValue += atoi(other.str.c_str());
	else if (this->type == 'd' && other.type == 'i') return this->dValue += double(other.iValue);
	else if (this->type == 'd' && other.type == 'd') return this->dValue += other.dValue;
	else if (this->type == 'd' && other.type == 's') return this->dValue += atof(other.str.c_str());
	else if (this->type == 's' && other.type == 's') return this->str += other.str;
	else if (this->type == 's' && other.type == 'i') {
		string out_string;
		stringstream convert;
		convert << atoi(this->str.c_str()) + other.iValue;
		out_string = convert.str();
		return out_string;
	}
	else if (this->type == 's' && other.type == 'd') {
		string out_string;
		stringstream convert;
		convert << atof(this->str.c_str()) + other.dValue;
		out_string = convert.str();
		return out_string;
	}
}

Var Var::operator-=(Var & other)
{
	if (this->type == 'i' && other.type == 'i') return this->iValue -= other.iValue;
	else if (this->type == 'i' && other.type == 'd') return this->iValue -= int(other.dValue);
	else if (this->type == 'i' && other.type == 's') return this->iValue -= atoi(other.str.c_str());
	else if (this->type == 'd' && other.type == 'i') return this->dValue -= double(other.iValue);
	else if (this->type == 'd' && other.type == 'd') return this->dValue -= other.dValue;
	else if (this->type == 'd' && other.type == 's') return this->dValue -= atof(other.str.c_str());
	else if (this->type == 's') return 0;
}

Var Var::operator*(Var & other)
{
	if (this->type == 'i' && other.type == 'i') return this->iValue * other.iValue;
	else if (this->type == 'i' && other.type == 'd') return this->iValue * int(other.dValue);
	else if (this->type == 'i' && other.type == 's') return this->iValue * atoi(other.str.c_str());
	else if (this->type == 'd' && other.type == 'i') return this->dValue * double(other.iValue);
	else if (this->type == 'd' && other.type == 'd') return this->dValue * other.dValue;
	else if (this->type == 'd' && other.type == 's') return this->dValue * atof(other.str.c_str());
	else if (this->type == 's') return 0;
}

Var Var::operator/(Var & other)
{
	if (this->type == 'i' && other.type == 'i') return this->iValue / other.iValue;
	else if (this->type == 'i' && other.type == 'd') return this->iValue / int(other.dValue);
	else if (this->type == 'i' && other.type == 's') return this->iValue / atoi(other.str.c_str());
	else if (this->type == 'd' && other.type == 'i') return this->dValue / double(other.iValue);
	else if (this->type == 'd' && other.type == 'd') return this->dValue / other.dValue;
	else if (this->type == 'd' && other.type == 's') return this->dValue / atof(other.str.c_str());
	else if (this->type == 's') return 0;
}

bool Var::operator==(Var & other)
{
	if (this->type != other.type) return false;
	else return (this->iValue == other.iValue && this->dValue == other.dValue && this->str == other.str);
}

bool Var::operator!=(Var & other)
{
	if (this->type != other.type) return true;
	else return !(this->iValue == other.iValue && this->dValue == other.dValue && this->str == other.str);
}

bool Var::operator<(Var & other)
{
	if (this->type == 'i' && other.type == 'i') return this->iValue < other.iValue;
	else if (this->type == 'i' && other.type == 'd') return this->iValue < int(other.dValue);
	else if (this->type == 'i' && other.type == 's') return this->iValue < atoi(other.str.c_str());
	else if (this->type == 'd' && other.type == 'i') return this->dValue < double(other.iValue);
	else if (this->type == 'd' && other.type == 'd') return this->dValue < other.dValue;
	else if (this->type == 'd' && other.type == 's') return this->dValue < atof(other.str.c_str());
	else if (this->type == 's') return 0;
}

bool Var::operator>(Var & other)
{
	if (this->type == 'i' && other.type == 'i') return this->iValue > other.iValue;
	else if (this->type == 'i' && other.type == 'd') return this->iValue > int(other.dValue);
	else if (this->type == 'i' && other.type == 's') return this->iValue > atoi(other.str.c_str());
	else if (this->type == 'd' && other.type == 'i') return this->dValue > double(other.iValue);
	else if (this->type == 'd' && other.type == 'd') return this->dValue > other.dValue;
	else if (this->type == 'd' && other.type == 's') return this->dValue > atof(other.str.c_str());
	else if (this->type == 's') return 0;
}

bool Var::operator<=(Var & other)
{
	if (this->type == 'i' && other.type == 'i') return this->iValue <= other.iValue;
	else if (this->type == 'i' && other.type == 'd') return this->iValue <= int(other.dValue);
	else if (this->type == 'i' && other.type == 's') return this->iValue <= atoi(other.str.c_str());
	else if (this->type == 'd' && other.type == 'i') return this->dValue <= double(other.iValue);
	else if (this->type == 'd' && other.type == 'd') return this->dValue <= other.dValue;
	else if (this->type == 'd' && other.type == 's') return this->dValue <= atof(other.str.c_str());
	else if (this->type == 's') return 0;
}

bool Var::operator>=(Var & other)
{
	if (this->type == 'i' && other.type == 'i') return this->iValue >= other.iValue;
	else if (this->type == 'i' && other.type == 'd') return this->iValue >= int(other.dValue);
	else if (this->type == 'i' && other.type == 's') return this->iValue >= atoi(other.str.c_str());
	else if (this->type == 'd' && other.type == 'i') return this->dValue >= double(other.iValue);
	else if (this->type == 'd' && other.type == 'd') return this->dValue >= other.dValue;
	else if (this->type == 'd' && other.type == 's') return this->dValue >= atof(other.str.c_str());
	else if (this->type == 's') return 0;
}

void Var::ShowInfo()
{
	if (this->iValue != 0 && this->dValue == 0 && this->str == "") cout << this->iValue << endl;
	else if (this->iValue == 0 && this->dValue != 0 && this->str == "") cout << this->dValue << endl;
	else if (this->iValue == 0 && this->dValue == 0 && this->str != "") cout << this->str << endl;
}

Var::~Var()
{
}
int main() {

	Var a(10), b(10), c(10);

	if (a * b == c) cout << "True" << endl;
	else cout << "False" << endl;

	system("pause");
	return 0;
}