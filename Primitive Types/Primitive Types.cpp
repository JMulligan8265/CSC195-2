#include <iostream>
using namespace std;

int main()
{
    string name;
    char initial;
    unsigned short age;
    bool isAdult;
    unsigned int zipCode;
    double wage;
    unsigned short daysWorked;
    unsigned short hoursWorkedPerDay[7];
    float tax = 0.1f;
    unsigned int grossPay = 0;
    unsigned int netPay = 0;
    int totalHours = 0;

    cout << "Enter your first name: \n";
    cin >> name;

    cout << " \nEnter your last initial: \n";
    cin >> initial;

    cout << " \nEnter your age: \n";
    cin >> age;

    if (age >= 18) {
        isAdult = true;
    }else{
        isAdult = false;
    }

    cout << "\nEnter your zip code: \n";
    cin >> zipCode;

    cout << "\nEnter your wage: \n";
    cin >> wage;


    do {
        cout << "\nEnter the amount of days worked in a week: \n";
        cin >> daysWorked;

        if (daysWorked > 7) {
            cout << "\nToo many days in a week, you cannot work more than 7 days in a week, please try again.";
        }
    } while (daysWorked > 7);
    
    for (int days = 0; days < daysWorked; days++) {
        do {
            cout << "\nEnter the amount of hours you worked on day " << days + 1 << ": \n";
            cin >> hoursWorkedPerDay[days];
            
            if (hoursWorkedPerDay[days] > 24) {
                cout << "Too many hours in a day, you cannot work more than 24 hours in a day, please try again.";
            }
            else {
                totalHours += hoursWorkedPerDay[days];
            }
        } while (hoursWorkedPerDay[days] > 24);
    }

    grossPay = totalHours * wage;
    netPay = grossPay * (1 - tax);

    cout << "\n" << name << " " << initial << " worked " << totalHours << " hours at " << wage << " an hour.\n";
    cout << "gross income: " << grossPay << "\n";
    cout << "net income: " << netPay;
    
}