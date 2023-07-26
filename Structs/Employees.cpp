#include "Employee.h"
#include <iostream>

using namespace std;

const float Employee::tax = 0.01f;

void Employee::Read() {
	cout << "Enter your name:\n";
	cin >> name;

	cout << "\nEnter your last initial:\n";
	cin >> initial;

	cout << "\nEnter your age:\n";
	cin >> age;

	if (age >= 18) {
		isAdult = true;
	}
	else {
		isAdult = false;
	}
	
	cout << "\nEnter your Zip Code: \n";
	cin >> zipCode;

	cout << "\nEnter your wage: \n";
	cin >> wage;

	cout << "\nHow many days have you worked?";
	cin >> daysWorked;

	for (int days = 0; days < daysWorked; days++) {
		cout << "\nHow many hours have you worked on day " << days + 1;
		cin >> hoursWorkedPerDay[days];
	}
}

void Employee::Write(Employee employees[]) {
	cout << "\nYou are entering the information for " << employees << " employee(s).";

	for (int person = 0; person < sizeof(employees); person++) {
		cout << "\n Employee No." << person + 1;

		employees[person].grossPay = employees[person].totalHours * employees[person].wage;
		employees[person].netPay = employees[person].grossPay * (1 - employees[person].tax);

		cout << "\n" << employees[person].name << " " << employees[person].initial << " worked " << employees[person].totalHours << " hours at " << employees[person].wage << " an hour.\n";
		cout << "gross income: " << employees[person].grossPay << "\n";
		cout << "net income: " << employees[person].netPay;
	}
}