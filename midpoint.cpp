/*
Write a program that finds the coordinates of the midpoint of a line segment
given the coordinates of its endpoints
*/

#include <iostream>

using namespace std;

int main()
{
    float x, x2, y, y2, x3, y3;
    
    cout << "Point one's x: ";
    cin >> x;
    cout << "Point one's y: ";
    cin >> y;
    cout << "Point two's x: ";
    cin >> x2;
    cout << "Point two's y: ";
    cin >> y2;
    
    x3 = (x + x2) / 2;
    y3 = (y + y2) / 2;
    
    cout << "Midpoint: " << x3 << ", " << y3 << endl;
  
    return 0;
}
