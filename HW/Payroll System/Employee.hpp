//
//  Employee.hpp
//  Payroll System
//
//  Created by Billy Kim on 11/24/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <string> // C++ standard string class

class Employee
{
public:
    Employee( const std::string &, const std::string &,
             const std::string & );
    virtual ~Employee() { } // virtual destructor
    
    void setFirstName( const std::string & ); // set first name
    std::string getFirstName() const; // return first name
    
    void setLastName( const std::string & ); // set last name
    std::string getLastName() const; // return last name
    
    void setSocialSecurityNumber( const std::string & ); // set SSN
    std::string getSocialSecurityNumber() const; // return SSN
    
    // pure virtual function makes Employee abstract base class
    virtual double earnings() const = 0; // pure virtual
    virtual void print() const; // virtual
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
}; // end class Employee

#endif /* Employee_hpp */
