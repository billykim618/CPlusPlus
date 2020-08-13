//
//  main.cpp
//  Exception
//
//  Created by Billy Kim on 12/14/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//


#include "InputFloatException.h"
#include "InputFloatException2.h"
#include <iostream>
#include <stdexcept>
using namespace std;


double Sum (double, double);


int main() {

    double num1, num2 = 0.0;
    cout << "Enter two numbers: " << endl;

        try
        {
            if (! (cin >> num1) )
                throw InputFloatException();
            if (! (cin >> num2) )
                throw InputFloatException();
            
            double result = num1 + num2;
            cout << "The sum of the two values is: " << result << "." << endl;
        }
        catch (InputFloatException &inputFloatException)
        {
            cerr << "Exception occurred: " << inputFloatException.what() << endl;
        }
    
    try
    {
        if (! (cin >> num1) )
            throw InputFloatException2();
        if (! (cin >> num2) )
            throw InputFloatException2();
        
        double result = num1 + num2;
        cout << "The sum of the two values is: " << result << "." << endl;
    }
    catch (InputFloatException2 &inputFloatException)
    {
        cerr << "Exception occurred: " << inputFloatException.what() << endl;
    }
    
    return 0;
}

//double Sum (double first, double second)
//{
//
//        if (! (cin >> first) )
//        {
//            throw InputFloatException();
//        }
//        if (! (cin >> second) )
//        {
//
//            throw InputFloatException();
//        }
//    return first + second;
//
//}

