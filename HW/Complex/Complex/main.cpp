//
//  main.cpp
//  Complex
//
//  Created by Billy Kim on 11/19/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//

#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    
    Complex x ;
    Complex y ( 4.3, 8.2 );
    Complex z ( 3.3, 1.1 );
    Complex n ( 3.3, 1.1 );
    Complex c ;
//
//    cout << "x: " << x << endl;
//    cout << "y: " << y << endl;
//    cout << "z: " << z << endl;
//    cout << "n: " << n << endl << endl;
//
    cout << "Input two values for c: " ;
    cin >> c;
//    cout << endl;
    
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
    cout << "n: " << n << endl;
    cout << "c: " << c << endl;

    x = y + z;
    cout << "\nx = y + z: " << x << " = " << y << " + " << z << endl;
    
    x = y - z;
    cout << "x = y - z: " << x << " = " << y << " - " << z << endl;
    
    x = y * z;
    cout << "\nx = y * z: " << x << " = " << y << " * " << z << endl;
    
    if (n == z)
    {
        cout << "\nn == z: " << n << " == " << z << endl;
    }
    
    if (c != y)
    {
        cout << "c != y: " << c << " != " << y << endl << endl;
    }

    
    return 0;
}
