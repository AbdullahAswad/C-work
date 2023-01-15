/*
A number is divisible by 11 if the (sum of odd numbered digits) – (sum of the even numbered
digits) is divisible by 11. Write a program that checks if a six digit number entered by the user is
divisible by 11 by finding the sums of its digits (even and odd ones) and then checking if the
difference is divisible by 11.
*/

#include <iostream>

using namespace std;

int main()
{
    int six;
    int a, b, c, d, e, f;
    
    cout << "Enter a six digit number: ";
    cin >> six;
    
    f = six % 10;
    e = six / 10 % 10;
    d = six / 100 % 10;
    c = six / 1000 % 10;
    b = six / 10000 % 10;
    a = six / 100000;
    
    int sum = a - b + c - d + e - f;
    
    if (sum % 11 == 0)
    cout << "Divisible by 11" << endl;
    else
    cout << "not Divisible" << endl;
    return 0;
}
