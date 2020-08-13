//
//  SavingsAccount.cpp
//  Savings Account
//
//  Created by Billy Kim on 11/7/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//

/*
 
 (SavingsAccount Class)
 Use a STATIC DATA MEMBER annualInterestRate to store the annual interest rate for each of the savers.
 
 Each member of the class contains a PRIVATE DATA MEMBER savingsBalance indicating the amount the saver currently has on
 deposit.
 
 Provide MEMBER FUNCTION calculateMonthlyInterest() that calculates the monthly interest by multiplying the balance by STATIC DATA MEMBER annualInterestRate divided by 12; this interest should be added to PRIVATE DATA MEMBER savingsBalance.
 
 Provide a STATIC MEMBER FUNCTION modifyInterestRate() that sets the STATIC DATA MEMBER annualInterestRate
 to a new value.
 
 ------------------------------------------------------------------------------------------------------------------------------
 Write a driver program to test class SavingsAccount. Instantiate two different objects of class SavingsAccount, saver1 and saver2, with balances of $2000.00 and $3000.00, respectively.
 
 Set the annualInterestRate to 3 percent. Then calculate the monthly interest and print the new balances for each of the savers. Then set the annualInterestRate to 4 percent, calculate the next month’s interest and print the new balances for each of the savers.
 
 */

#include <stdio.h>
#include <iostream>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount()
{
    setBalance(0);
}

//define and initialize private data member annualInterestRate
double SavingsAccount::annualInterestRate = 0.0;

void SavingsAccount::setBalance( double balance )
{
    savingsBalance = balance;
}


double SavingsAccount::getBalance()
{
    return savingsBalance;
}


void SavingsAccount::modifyInterestRate(double interest)
{
   annualInterestRate = interest;
}

void SavingsAccount::calculateMonthlyInterest()
{
//    std::cout << "Current interest rate is: " << annualInterestRate * 100 << "%" << std::endl;
    savingsBalance += savingsBalance * annualInterestRate/12.0;
}



