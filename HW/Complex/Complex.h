//
//  Complex.h
//  Complex
//
//  Created by Billy Kim on 11/19/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//

#ifndef Complex_h
#define Complex_h

#include <iostream>
//using namespace std;

class Complex
{
    friend std::ostream &operator<<(std::ostream &, const Complex &);
    friend std::istream &operator>>(std::istream &, Complex &);
    
private:
    double real;
    double imaginary;
    
public:
    Complex();
    Complex(double real, double imaginary);
    Complex operator+(const Complex &) const;
    Complex operator-(const Complex &) const;
    Complex operator*(const Complex &) const;

    bool operator==(const Complex &) const;
    bool operator!=(const Complex &) const;
    
};

#endif /* Complex_h */
