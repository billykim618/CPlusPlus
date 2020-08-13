//
//  main.cpp
//  Sales Summary
//
//  Created by Billy Kim on 10/25/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//

#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

static const size_t products = 5;
static const size_t salespersons = 4;
double getSum(const array<int, salespersons> );
void printArray( const array< array< int, salespersons>, products> );
void printSum( const array< array< int, salespersons>, products> );
void outputSales();

int main()
{
    const array < array< int, salespersons >, products > sales = {1, 2, 3, 4,
                                                                  1, 2, 7, 4,
                                                                  2, 3, 1, 1,
                                                                  1, 1, 1, 1,
                                                                  3, 6, 10, 4 }; // declare 2-D array called sales
    
    outputSales();
    printArray(sales);
    printSum(sales);
    
    cout << endl;
    
    return 0;
}


void outputSales() //header of results
{
    cout << "The results are: \n\n" ;
    cout << "            " ;
    
    for (size_t salesperson = 0; salesperson < salespersons; salesperson++)
        cout << "Salesperson " << salesperson + 1 << "   ";
    
    cout << " Total" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
}


void printArray( const array< array< int, salespersons>, products> sales )
{
    for (size_t product = 0; product < products; product++)
    {
        cout << "Product" << setw(2) << product + 1 ;
        
        
        for ( size_t salesperson = 0; salesperson < sales[ product ].size(); salesperson++) // prints products by salesperson
            cout << setw(16) << sales [product][salesperson] ;
        
        int total = 0;
        
        for ( size_t salesperson = 0; salesperson < sales[ product ].size(); salesperson++)
            {
                total += sales[product][salesperson];
            }
        cout << setw(9) << total << endl;
    }
}

void printSum( const array< array< int, salespersons>, products> sales ) // prints the sum of products by salesperson
{
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "Total    " ;
    
    for (size_t salesperson = 0; salesperson < salespersons; salesperson++)
    {
        
        
        int total = 0;
        
        for (size_t product = 0; product < products; product++)
        {
            total += sales[product][salesperson];
        }
        
        cout << setw(16) << total ;
    }
}

