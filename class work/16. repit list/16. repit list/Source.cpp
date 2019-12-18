//ООП
//Створіть клас XString, який описує рядок.Клас повинен містити наступні конструктори :
//конструктор по замовчуванню, який дозволяє створити рядок довжиною 80 символів;
//конструктор, який створює рядок та ініціалізує його рядком, переданим в якості параметра;
//конструктор копій.
//Крім того, даний клас повинен містити набір перевантажених операцій для роботи з рядками :
//операція * : повинна повертати новий рядок, який утворюється шляхом перетину двох рядків, тобто їх спільні символи.Наприклад, результатом перетину рядків "Microsoft" та "Windows" буде рядок "ioso".
//операція / : повинна повертати новий рядок, який утворюється шляхом відбору символів першого рядка, яких немає в другому.Наприклад, результатом ділення рядка "Microsoft" на "Windows" буде рядок "Mcrft".
//операцію + , що дозволяє додати два рядки(конкатенація рядків).Наприклад, результатом додавання двох рядків "Microsoft" та "Windows" буде рядок "MicrosoftWindows".
//операцій *=, /= та +=, які діють по вищеописаному принципу.
#include<iostream>
using namespace std;

class XString
{
	char str[80];
public:
	XString();
	XString(char sentence[]);

	XString operator*=(XString &other);
	XString operator/=(XString &other);
	XString operator+=(XString &other);

	~XString();
};
XString::XString()
{
	for (int i = 0; i < 80; i++)
	{
		this->str[i] = ' ';
	}

}

XString::XString(char sentence[])
{
	for (int i = 0; i < strlen(sentence) + 1; i++)
	{
		this->str[i] = sentence[i];
	}

}

XString XString::operator*=(XString & other)
{
	char temp[80] = {};
	int iterator = 0;

	for (int i = 0; i < strlen(this->str); i++) {
		for (int j = 0; j < strlen(other.str); j++) {
			if (this->str[i] == other.str[j]) {
				temp[iterator] = this->str[i];
				iterator++;
			}
		}
	}

	for (int i = 0; i < strlen(temp); i++) {
		cout << temp[i];
	}
	cout << endl;

	return temp;
}

XString XString::operator/=(XString & other)
{
	char temp[80] = {};
	int iterator = 0;

	for (int i = 0; i < strlen(this->str); i++) {

		int counter = 0;
		for (int j = 0; j < strlen(other.str); j++) {
			if (this->str[i] != other.str[j]) {
				counter++;
			}
		}
		if (counter == strlen(other.str)) {
			temp[iterator] = this->str[i];
			iterator++;
		}

	}

	for (int i = 0; i < strlen(temp); i++) {
		cout << temp[i];
	}
	cout << endl;

	return temp;
}

XString XString::operator+=(XString & other)
{
	char temp[80] = {};
	int iterator = 0;

	for (int i = 0; i < strlen(this->str) + strlen(other.str); i++)
	{
		if (i < strlen(this->str)) {
			temp[i] = this->str[i];
		}
		else {
			temp[i] = other.str[iterator];
			iterator++;
		}

	}

	for (int i = 0; i < strlen(temp); i++) {
		cout << temp[i];
	}
	cout << endl;

	return temp;

}


XString::~XString()
{
}
int main() {

	char str[80];
	cin >> str;

	XString sentence1(str);
	cin >> str;
	XString sentence2(str);

	sentence1.operator*=(sentence2);
	sentence1.operator/=(sentence2);
	sentence1.operator+=(sentence2);

	system("pause");
	return 0;
}
