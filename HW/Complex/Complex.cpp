//
//  Complex.cpp
//  Complex
//
//  Created by Billy Kim on 11/20/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//

#include <stdio.h>
#include "Complex.h"
using namespace std;

Complex::Complex(): real(0), imaginary(0)
{
}

Complex::Complex(double realNumber, double imaginaryNumber)
: real(realNumber), imaginary(imaginaryNumber)
{
    
}

Complex Complex::operator+(const Complex &operand2) const
{
    return Complex(real + operand2.real,
                   imaginary + operand2.imaginary);
}

Complex Complex::operator-(const Complex &operand2) const
{
    return Complex(real - operand2.real,
                   imaginary - operand2.imaginary);
}

Complex Complex::operator*( const Complex &operand2) const
{
    return Complex(real * operand2.real,
                   imaginary * operand2.imaginary);
}

bool Complex::operator==( const Complex &operand2 ) const
{
    return (operand2.real == real ) && (operand2.imaginary == imaginary) ? true : false ;
}

bool Complex::operator!=( const Complex &operand2 ) const
{
    return !(*this == operand2);
}

ostream &operator<<(ostream &output, const Complex &complex)
{
    output << "(" << complex.real<< ", "
                << complex.imaginary << ")";
    return output;
}

istream &operator>>(istream &input, Complex &complex)
{
    input >> complex.real;
    input.ignore();
    input >> complex.imaginary;
    return input;
}
