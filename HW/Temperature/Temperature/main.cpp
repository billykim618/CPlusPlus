#include <iostream>
#include <iomanip>
using namespace std;

int cel = 0;
int fah = 32;

int celsius(int); // celsius function converts fahrenheit to celsius.
int fahrenheit(int); // fahrenheit function converts celsius to fahrenheit

int main()
{
    cout << setw(7) << "Celsius" << setw(12) << " Fahrenheit" << "  |" << setw(9) << " Celsius" << setw(16) << " Fahrenheit\n" << endl;
    
    for (cel = 0 ; cel <= 100; cel++) // from cel = 0 until cel = 100 with increments of +1
    {
        cout << setw(7) << cel << setw(12) << fahrenheit(cel); // outputs celsius and new fahrenheit values through function
            if (fah <= 212) // if fahrenheit is less than or equal to 212, do the following...
            {
                cout << setw(7) << fah << setw(12) << celsius(fah) << endl; //outputs fahrenheit and new celsius values through function
                fah++; // increments of one
            }
    } // end for loop
} // end main function

int fahrenheit(int) // fahrenheit function converts celsius to fahrenheit
{
    return ( static_cast <float> (9.0 / 5.0) * cel + 32.0 ) ; // returns fahrenheit value
}
int celsius(int) // celsius function converts fahrenheit to celsius.
{
    return static_cast <float> ( (fah - 32) * 5.0 / 9.0 ) ; // returns celsius value
}
