#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
        double gallons = 0;
        double miles = 0;
        double totalGallons = 0;
        double totalMiles = 0;
        double MPG = 0;
        double totalMilesPerGallon; //miles per gallon for trip

        cout << "Enter miles driven (-1 to quit): ";
        cin >> miles;
        cout << fixed; //set floating point number format

        while (miles != -1)
        {
            //promt user for gallons and obtain the input from user
            cout << "Enter gallons used: ";
            cin >> gallons;
            

            //add gallons and miles for this trip to total

            totalMiles += miles;
            totalGallons += gallons;
            MPG = miles / gallons ;
            totalMilesPerGallon = totalMiles / totalGallons;
            cout << "The MPG for this trip : " << MPG << endl;
            cout << "The total miles per gallons up to this point: " << totalMilesPerGallon << endl << endl;
            
            cout << "Enter miles driven (-1 to quit): ";
            cin >> miles;
            
        }
      
    return 0;
}
