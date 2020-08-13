#include <iostream>
using namespace std;

int i;
int number;

void Prime(int); //funciton prototype
void totalPrime(); // function prototype

int main()
{
    cout << "Enter an integer: " ;
    cin >> number; // inputs an integer value called "number"
    Prime(number); // calls function using the integer value "number" as the parameter
    
    cout << "Here are all the prime numbers between 2 and 1000: " << endl;
    totalPrime();

    return 0;
}

void Prime(int)
{

    while (number < 2) // if integer inputed is less than 2, prompts user to try again until value inputed is 2 or greater
    {
        cout << "The smallest prime number is 2. Try again: " ;
        cin >> number; // prompts use to input value again
    }
    
    for (i = 2; i < number; i++) // i starts at 2 and increases until it equals 'number' value that was inputed
    {
        if (0 == number % i) // if remainder is not 0, i is increased by one until remainder = 0 or breaks out of for loop
        {
            cout << "Not a prime number\n" << endl; // if remainder = 0, it is not a prime number.
            break; // breaks out of loop after satisfying if statement.
        }
    }
    
    if (i == number) // after break out of loop i has incremented to same value as 'number' since it couldn't be divided evenly by anything other than the value itself
    {
        cout << number << " is a prime number.\n" << endl;
    }
}

void totalPrime()
{
    for (int i = 2; i <= 1000; i++) // i starting at 2 and increasing by 1 until 1000
    {
        bool prime = true; // true it is a prime
    
        for (int j = 2; j < i; j++) // nested for loop. j starts at 2 and increasing by 1 until it is greater than i
        {
            if (i % j == 0 || i == j)
            {
                prime = false; // if j value is evenly divided into i, it is not a prime and prime = false
                break; // if if statement satisfied, it breaks out of loop with prime = false.
            }
        }
        
        if (prime == true) // after breaking out of nested loop, if prime != false, i is a prime number
        {
            cout << i << " is a prime number." << endl;
        } //goes back to initial for loop to check next i value
    }
}
