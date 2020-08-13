#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Please enter a 5 digit integer: " ;

    cin >> n;

    int d1 = n / 10000;
    int d2 = n % 10000 / 1000;
    int d4 = n % 10000 % 1000 % 100 / 10;
    int d5 = n % 10000 % 1000 % 100 % 10 / 1;

    if (n > 99999)
        cout << "Too many digits." << endl;
    if (n < 10000)
        cout << "Not enough digits." << endl;
    if (n > 9999 && n < 100000)
    {
        if (d1 == d5 && d2 == d4)

        cout << "This is a palindrome." << endl;
        else
        cout << "This is not a palindrome." << endl;
    }

    return 0;

    //RANDOM: how to use quotes
//    cout << "\"hello,\" he said" << endl;
}
