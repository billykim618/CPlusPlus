//
//  PieceWorker.cpp
//  Payroll System
//
//  Created by Billy Kim on 11/24/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//

#include <iostream>
#include <stdexcept>
#include "PieceWorker.hpp"

using namespace std;

//constructor
PieceWorker::PieceWorker(const string &first, const string &last, const string &ssn,
                         double number /*pieces*/, double dollars /*wage*/)
: Employee (first, last, ssn)
{
    setPiecesProduced(number);
//    setWagePerPiece(dollars);
    wage = dollars;
} //end constructor

void PieceWorker::setPiecesProduced(double number)
{
    if (pieces >= 0.0)
        pieces = number;
    else
        throw invalid_argument ("Total pieces produced must be greater than or equal to 0.0");
}

double PieceWorker::getPiecesProduced() const
{
    return pieces;
}

void PieceWorker::setWagePerPiece(double dollars)
{
    if (wage >= 0.0)
        wage = dollars;
    else
        throw invalid_argument ("Wage per pieces produced must be greater than or equal to 0.0");
}

double PieceWorker::getWagePerPiece() const
{
    return wage;
}

double PieceWorker::earnings() const
{
    return getPiecesProduced() * getWagePerPiece();
}

void PieceWorker::print() const
{
    cout << "Piece work employee: " ;
    Employee::print();
    cout << "\nTotal pieces: " << getPiecesProduced()
    << "\nWage per piece: " << getWagePerPiece() << endl;
}
