#include <iostream>
#include "Header.h"
using namespace std;

bool add_students(int &students_no, student students_group[]) {
	student create_students;
	for (int i = 0; i < students_no; i++) {
		cout << endl;
		cin.ignore();
		cout << "Insert student's name: " << endl;
		cin.getline(create_students.name, 21);
		cout << "Insert the city:" << endl;
		cin.getline(create_students.adress.city, 16);
		cout << "Insert the city code:" << endl;
		cin >> create_students.adress.city_code;
		cout << "Insert the name of the street: " << endl;
		cin.ignore();
		cin.getline(create_students.adress.street, 26);
		cout << "Insert the adress number: " << endl;
		cin >> create_students.adress.number;
		cout << "Insert the phone no. prefix:" << endl;
		cin >> create_students.phone.prefix;
		cout << "Insert the phone number:" << endl;
		cin >> create_students.phone.phone_number;
		cin.ignore();
		cout << "Insert the faculty:" << endl;
		cin.getline(create_students.faculty, 4);
		cout << "Insert the student's age:" << endl;
		cin >> create_students.age;
		cout << "Insert the number of exam absences:" << endl;
		cin >> create_students.exam_absences;
		cout << "Insert student's grades:" << endl;
		for (int j = 0; j < (10 - create_students.exam_absences); j++) {
			cin >> create_students.grades[j];
		}
		cout << "Insert the average grade:" << endl;
		cin >> create_students.average_grade;
		students_group[i] = create_students;
		cout << "Student added succesfully!" << endl;
	}
	students_no++;
	return true;
}

bool display_students(int students_no, student students_group[]) {
	for (int i = 0; i < students_no; i++) {
		cout << endl;
		cout << "Name: " << students_group[i].name << endl;
		cout << "Adress: " << students_group[i].adress.city << ", " << students_group[i].adress.street << " Str. "
			<< ", No. " << students_group[i].adress.number << ", CP: " << students_group[i].adress.city_code << endl;
		cout << "Phone: +" << students_group[i].phone.prefix << students_group[i].phone.phone_number << endl;
		cout << "Faculty: " << students_group[i].faculty << endl;
		cout << "Age: " << students_group[i].age << endl;
		cout << "Grades: ";
		for (int j = 0; j < (10 - students_group[i].exam_absences); j++) {
			cout << students_group[i].grades[j] << " ";
		}
		cout << endl;
		cout << "Average grade: " << students_group[i].average_grade << endl;
		cout << "Exam absences: " << students_group[i].exam_absences << endl;
	}
	return true;
}