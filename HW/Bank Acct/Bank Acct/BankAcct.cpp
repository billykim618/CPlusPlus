#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    explicit Account(int amount) //constructor
    : accountBalance (amount)
    {
        setBalance(amount);
    }
    
    void setBalance(int amount) //
    {
        if (amount > 0)
        {
            accountBalance = amount;
        }
        if (amount < 0)
        {
            accountBalance = 0;
            cout << "\tInitial balance is invalid." << endl ;
        }
    }
    
    int getBalance() //returns an integer value of 'accountBalance' to wherever it's called.
    {
        return accountBalance;
    }
    
    void credit(int accoutBalance) //add amount to accountBalance
    {
        if (accountBalance > 0)
        {
            accountBalance+=5;
            cout << "Deposit successful. Your new balance is: $" << getBalance() << ".\n" << endl;
        }
        else
            cout << "Sorry, I couldn't add an amount to balance due to invalid initial blance.\n" << endl;
        
    }
 
    void debit() //withdraw money from account
    {
        if (accountBalance > 0)
        {
            accountBalance-=25;
            {
            if (accountBalance < 0)
            {
                cout << "Sorry, couldn't withdraw more than the existing balance prior to withdrawl attempt.\n" << endl;
             accountBalance+=25;
            }
            else
                cout << "Withdrawl successful. Your new balance is: $" << accountBalance << "\n" <<endl;
            }
        }
        else
            cout << "Sorry, I couldn't withdraw an amount from balance due to invalid initial blance.\n" << endl;
    }
    
    void displayBalance() //console outputs the balance of the account
    {
        cout << "Your current balance is $" << getBalance() << ".\n" << endl;
    }
    
private:
    int accountBalance;
};

int main()
{
    int balance;
    Account myAccount1(-20);
    Account myAccount2(5);
    
    myAccount1.setBalance(balance);
    cout << "\tThe balance on the first account is: $" << myAccount1.getBalance() << ".\n" << endl;
    myAccount1.credit(balance);
    myAccount1.debit();
    myAccount1.displayBalance();
    
    myAccount2.setBalance(balance);
    cout << "\tThe balance on the second account is: $" << myAccount2.getBalance() << ".\n" << endl;
    myAccount2.credit(balance);
    myAccount2.debit();
    myAccount2.displayBalance();
    
}


