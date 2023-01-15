/*
Write a program that finds the sum of the digits of the largest five-digit palindrome that is divisible by 6.
*/

#include <iostream>

using namespace std;

int main()
{

int a, b, c, d, e;
int x = 10000;
int sum;
int pal;

while (x <= 99999){
a = x / 10000;
b = x / 1000 % 10;
c = x / 100 % 10;
d = x / 10 % 10;
e = x % 10;
if (a == e && b == d && x % 6 == 0) {
pal = x;
sum = a + b + c + d + e; }
x++;
}

cout << "The palindrome is: " << pal << endl;
cout << "The sum is: " << sum << endl;
    return 0;
}
