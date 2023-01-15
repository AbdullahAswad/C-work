/*
Write a program that converts the temperature given in degrees Celsius to
the temperature given in degrees Fahrenheit
*/

#include <iostream>

using namespace std;

int main()
{
    int temp;
    
    cout << "Input a temperature in celsius: ";
    cin >> temp;
    temp = (temp * (9 / 5)) + 32;
    
    cout << "Your temperature in fahrenheit: " << temp << endl;
    return 0;
}
