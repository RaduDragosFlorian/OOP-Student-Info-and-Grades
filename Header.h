#pragma once
struct Adress {
	char city[15];
	int city_code;
	char street[25];
	int number;
};

struct Phone {
	int prefix;
	long phone_number;
};

struct student {
	char name[20];
	struct Adress adress;
	struct Phone phone;
	char faculty[3];
	int age;
	int grades[10];
	double average_grade;
	int exam_absences;

};

bool add_students(int &students_no, student students_group[]);
bool display_students(int students_no, student students_group[]);