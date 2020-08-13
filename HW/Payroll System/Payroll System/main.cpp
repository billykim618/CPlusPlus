//
//  main.cpp
//  Payroll System
//
//  Created by Billy Kim on 11/24/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//

/*
 
 A PieceWorker represents an employee whose pay is based on the number of pieces of merchandise produced. Class PieceWorker should contain private instance variables wage (to store the employee’s wage per piece) and pieces (to store the number of pieces produced). In class PieceWorker, provide a concrete implementation of method earnings that calculates the employee’s earnings by multiplying the number of pieces produced by the wage per piece.
 
 An HourlyWorker represents an employee whose pay is based on an hourly wage and the number of hours worked. Hourly workers receive overtime pay (1.5 times the hourly wage) for all hours worked in excess of 40 hours. Class HourlyWorker should contain private instance variables wage (to store the employee’s wage per hour) and hours (to store the hours worked). In class HourlyWorker, provide a concrete implementation of method earnings that calculates the employee’s earnings by multiplying the number of hours worked by the wage per hour. If the number of hours worked is over 40, be sure to pay the HourlyWorker for the overtime hours.
 
 Add a pointer to an object of each new class into the vector of Employee pointers in main. For each Employee, display its string representation and earnings.
 
 */


#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.hpp"
#include "PieceWorker.hpp"
#include "HourlyWorker.hpp"
using namespace std;

void virtualViaPointer( const Employee * const ); // prototype
void virtualViaReference( const Employee & ); // prototype

int main() {
    
    cout << fixed << setprecision(2);
    
    PieceWorker pieceWorkEmployee ( "John", "Doe", "123-45-6789", 500, 80);
    HourlyWorker hourlyEmployee ( "Jane", "Doe", "987-65-4321", 10, 42);
    
    pieceWorkEmployee.print();
        cout << "\nEarned $" << pieceWorkEmployee.earnings() << endl << endl;
    hourlyEmployee.print();
        cout << "\nEarned $" << hourlyEmployee.earnings() << endl << endl;
    
    // create vector of three base-class pointers
    vector < Employee * > employees( 2 );
    
    // initialize vector with Employees
    employees[ 0 ] = &pieceWorkEmployee;
    employees[ 1 ] = &hourlyEmployee;
    
    cout << "Employees processed polymorphically via dynamic binding:\n\n";
    
    // call virtualViaPointer to print each Employee's information
    // and earnings using dynamic binding
    cout << "Virtual function calls made off base-class pointers:\n\n";
    
    for ( const Employee *employeePtr : employees )
        virtualViaPointer( employeePtr );
    
    // call virtualViaReference to print each Employee's information
    // and earnings using dynamic binding
    cout << "Virtual function calls made off base-class references:\n\n";
    
    for ( const Employee *employeePtr : employees )
        virtualViaReference( *employeePtr ); // note dereferencing
} // end main


// call Employee virtual functions print and earnings off a
// base-class pointer using dynamic binding
void virtualViaPointer( const Employee * const baseClassPtr )
{
    baseClassPtr->print();
    cout << "\nEarned $" << baseClassPtr->earnings() << "\n\n";
} // end function virtualViaPointer

// call Employee virtual functions print and earnings off a
// base-class reference using dynamic binding
void virtualViaReference( const Employee &baseClassRef )
{
    baseClassRef.print();
    cout << "\nEarned $" << baseClassRef.earnings() << "\n\n";
} // end function virtualViaReference
