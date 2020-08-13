//
//  HourlyWorker.hpp
//  Payroll System
//
//  Created by Billy Kim on 11/24/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//

#ifndef HourlyWorker_hpp
#define HourlyWorker_hpp


#include <stdio.h>
#include "Employee.hpp"

class HourlyWorker : public Employee
{
    
public:
    HourlyWorker(const std::string &, const std::string &, const std::string &,
                 double = 0.0, double = 0.0);
    virtual ~HourlyWorker() { }
    
    void setWage(double);
    double getWage() const;
    
    void setHoursWorked(double);
    double getHoursWorked() const;
    double getOvertimeHours() const;
    
    virtual double earnings() const override;
    virtual void print() const override;
    
private:
    double wage;
    double hours;
    double overtimeHours;
};

#endif /* HourlyWorker_hpp */
