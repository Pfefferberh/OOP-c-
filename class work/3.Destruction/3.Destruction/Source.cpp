
#include "Student.h"
#include <algorithm>
using namespace std;

int main() {

	Student *clas=new Student[2];

	for (int i = 0; i < 2; i++) {
		clas[i].Fill_student();
		clas[i].Fill_marks();
		clas[i].Show_student();
	}

	

	system("pause");
	return 0;
}