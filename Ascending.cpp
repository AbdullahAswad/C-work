/*
An ascending integer occurs when each digit is greater than any digit that precedes it. An
example is 478. Write a program that finds the number of ascending integers between 200 and 300.
*/

 #include <iostream>

using namespace std;

int main()
{

int a, b, c;
int x = 200;

while (x <= 300){
a = x / 100;
b = x / 10 % 10;
c = x % 10;
if(a < b && b < c)
cout << x << endl;
x++;}
    return 0;
}
