#pragma once
class Employee {
public:
    void Read();
    void Write(Employee employees[]);

private:
        char name[32];
        char initial;
        unsigned short age;
        bool isAdult;
        unsigned int zipCode;
        double wage;
        unsigned short daysWorked;
        unsigned short hoursWorkedPerDay[7];
        static const float tax;
        unsigned int grossPay = 0;
        unsigned int netPay = 0;
        int totalHours = 0;
    
};