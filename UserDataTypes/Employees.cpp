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

	cout << "\nHow many days have you worked?\n";
	do {
		cin >> daysWorked;

		if (daysWorked > 7) {
			cout << "\nThere are only 7 days in a week.\n";
		}
	} while (daysWorked > 7);

	for (int days = 0; days < daysWorked; days++) {
		cout << "\nHow many hours have you worked on day " << days + 1 << endl;
		cin >> hoursWorkedPerDay[days];

		totalHours += hoursWorkedPerDay[days];
	}
}

void Employee::Write() {

		grossPay = totalHours * wage;
		netPay = grossPay * (1 - tax);

		cout << "\n" << name << " " << initial << " worked " << totalHours << " hours at " << wage << " an hour.\n";
		cout << "gross income: " << grossPay << "\n";
		cout << "net income: " << netPay;
	}
