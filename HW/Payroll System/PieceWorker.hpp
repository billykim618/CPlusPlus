//
//  PieceWorker.hpp
//  Payroll System
//
//  Created by Billy Kim on 11/24/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//

#ifndef PieceWorker_hpp
#define PieceWorker_hpp

#include <string>
#include <stdio.h>
#include "Employee.hpp"

class PieceWorker : public Employee
{

public:
    PieceWorker(const std::string &, const std::string &, const std::string &,
                double = 0.0, double = 0.0);
    virtual ~PieceWorker() { }
    
    void setPiecesProduced(double);
    double getPiecesProduced() const;

    void setWagePerPiece(double);
    double getWagePerPiece() const;
    
    virtual double earnings() const override;
    virtual void print() const override;

private:
    double pieces;
    double wage;
};

#endif /* PieceWorker_hpp */
