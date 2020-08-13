
#include <iostream>
using namespace std;

//
//unsigned int factorial = 1;
//
//cout << "x/tx!/n";
//
//for (unsigned int i = 1; i <= 5; i++)
//{
//    factorial *= i;
//
//    cout << i << '\t' << factorial << '\n' ;
//
//}
//    cout << endl;
//
//
//
//
//}


int main() {
    
    int i, factorial, number = 1;
    
    cout << "Enter any intger less than or equal to 12: " << endl;
    cin >> number;
    
   while (number > 12)
   {
       cout << "Integer entered was greater than 12. Try again.\n" << endl;
       cout << "Enter any integer less than or equal to 12: " << endl;
       cin >> number;
   }
    for (int i = 1; i <= number; i++ )
    {
        factorial = factorial * i;
    }
    cout << "Factorial: " << factorial << endl;
    
}
