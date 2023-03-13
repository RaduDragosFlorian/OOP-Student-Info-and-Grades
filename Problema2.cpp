#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	int students_no{};
	cout << "Insert the number of students of this group:";
	cin >> students_no;
	student *students_group=new student[students_no];
	add_students(students_no, students_group);
	display_students( students_no, students_group);
	cout << students_no;
	delete[] students_group;

}
