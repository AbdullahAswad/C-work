/*
Each player in a tournament plays six games. There are no ties. The players are placed in
groups based on the results of games as follows:
- if a player wins 5 or 6 games, they are placed in Group 1;
- if a player wins 3 or 4 games, they are placed in Group 2;
- if a player wins 1 or 2 games, they are placed in Group 3;
- if a player does not win any games, they are eliminated from the tournament.
Input Specification
The input consists of 6 lines, each with one of two possible letters: W (indicates a win) or
L (indicates a loss).
*/

#include <iostream>

using namespace std;

int main()
{
    char type[6];
    int win = 0;
    int lose = 0;
    
    cout << "Enter W or L (must be caps): " << endl;
    for (int index = 0; index <= 5; index++){
    cin >> type[index];
    if (type[index] == 'W')
    win++;
    else
    lose++;}

if (win >= 5)
cout << "1" << endl;
if (win == 3 || win == 4)
cout << "2" << endl;
if (win == 1 || win == 2)
cout << "3" << endl;
if (win == 0)
cout << "-1" << endl;
    return 0;
}
