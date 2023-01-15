/*
Write a program that reverses two four digit numbers entered from the keyboard
and outputs the sum of the two reversed numbers.
*/

#include <iostream>

using namespace std;

int main()
{
    int num, num2;
    int sum = 0;
    int a, b, c, d;
    
    cout << "Input 2 4 digit numbers" << endl;
    cin >> num;
    cin >> num2;
    
    a = num % 10;
    b = num / 10 % 10;
    c = num / 100 % 10;
    d = num / 1000;
    num = (a * 1000) + (b * 100) + (c * 10) + d;
    
    a = num2 % 10;
    b = num2 / 10 % 10;
    c = num2 / 100 % 10;
    d = num2 / 1000;
    num2 = (a * 1000) + (b * 100) + (c * 10) + d;
    
    sum = num + num2;
    
    cout << "First number reversed: " << num << endl;
    cout << "Second number reversed: " << num2 << endl;
    cout << "Total sum: " << sum << endl;

  
    return 0;
}
