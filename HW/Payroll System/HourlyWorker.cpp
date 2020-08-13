//
//  HourlyWorker.cpp
//  Payroll System
//
//  Created by Billy Kim on 11/24/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//

#include <iostream>
#include <stdexcept>
#include "HourlyWorker.hpp"

using namespace std;

//constructor
HourlyWorker::HourlyWorker(const string &first, const string &last, const string &ssn,
                           double dollars /*wage*/, double number /*hours*/)
: Employee(first, last, ssn)
{
    setWage(dollars);
    setHoursWorked(number);
}//end constructor

void HourlyWorker::setWage(double dollars)
{
    if (dollars >= 0.0)
        wage = dollars;
    else
        throw invalid_argument ("Wage must be greater than or equal to 0.0");
}

double HourlyWorker::getWage() const
{
    return wage;
}

void HourlyWorker::setHoursWorked(double number)
{
    if (number >= 0.0)
        hours = number;
    if (number > 40.0)
    {
        hours = number;
        overtimeHours = number - 40.0;
    }
    else
        throw invalid_argument ("Hours worked must be greater than or equal to 0.0");
}

double HourlyWorker::getHoursWorked() const
{
    return hours;
}

double HourlyWorker::getOvertimeHours() const
{
    return overtimeHours;
}

double HourlyWorker::earnings() const
{
    if (hours <= 40.0)
        return wage * hours;
    if (hours >= 40.0)
        return (40.0 * wage + overtimeHours * (wage * 1.5));
    else return false;
}

void HourlyWorker::print() const
{
    cout << "Hourly work employee: " ;
    Employee::print();
    cout << "\nTotal hours worked: " << getHoursWorked()
    << "\nTotal hours worked overtime: " << getOvertimeHours()
    << "\nWage per hour: " << getWage() << endl;
}
