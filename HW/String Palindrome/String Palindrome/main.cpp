//
//  main.cpp
//  String Palindrome
//
//  Created by Billy Kim on 10/9/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//

#include <iostream>
#include <string>
#include <array>
#include <cstddef>
using namespace std;

bool testPalindrome(string palindrome, size_t left, size_t right); //

int main() {

    string word;

    cout << "Enter a string: " ;
    getline(cin, word);
    
    size_t left = 0;
    size_t right = word.size() - 1;

    ( testPalindrome(word, left, right) ? cout << "Palindrome" : cout << "Not a palindrome");
    cout << endl;
    
    return 0;
    
} // end main function


    // test to see if sentence is a palindrome
 bool testPalindrome(string palindrome, size_t left, size_t right)
{
    // test array to see if a palindrome
    if (palindrome[left] == palindrome[right] && left < right)
       return testPalindrome(palindrome , left + 1, right - 1);
    else if (palindrome[left] == palindrome[right] && left >= right)
        return true;
    else if (palindrome[left] != palindrome[right])
        return false;
    return false;
} // end function testPalindrome
