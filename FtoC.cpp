#include <iostream>

using namespace std;

int main()
{
    int temp;
    
    cout << "Input a temperature in fahrenheit: ";
    cin >> temp;
    temp = (temp - 32) / (9 / 5);
    
    cout << "Your temperature in celcius: " << temp << endl;
    return 0;
}
