//ООП
//Створити клас Group("Група"), що містить в собі наступні поля :
//-назва групи
//- курс
//- назва спеціальності(char *)
//- масив студентів, що також описаний окремим класом Student.
//Даний клас містить набір методів, що дозволяють :
//-здійснити модифікацію окремих полів класу(назви групи, курсу та спеціальності)
//- вивести інформацію про групу вцілому
//- змінювати інформацію про студентів.

#include "Group.h"

int main() {
	unsigned short size_group; 
	unsigned short number;
	cout << "Enter group size ";
	cin >> size_group;
	Group first(size_group,"ADiA","Civil Inginire",3);
	first.Group_info();

	cout << "Enter number student ";
	cin >> number;
	first.Set_student(number);
	first.Group_info();


	system("pause");
	return 0;
}