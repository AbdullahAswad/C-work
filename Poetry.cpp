/*
A simple poem consists of one or more four-line verses. Each line consists of one or more words consisting of upper or lower case letters, or a combination of both upper and lower case letters.
Adjacent words on a line are separated by a single space.
We define the last syllable of a word to be the sequence of letters from the last vowel ("a", "e", "i", "o" or "u", but not "y") to the end of the word. 
If a word has no vowel, then the last syllable is the word itself. We say that two lines rhyme if their last syllables are the same, ignoring case.
You are to classify the form of rhyme in each verse. The form of rhyme can be perfect, even,
cross, shell, or free:
- perfect rhyme: the four lines in the verse all rhyme
- even rhyme: the first two lines rhyme and the last two lines rhyme
- cross rhyme: the first and third lines rhyme, as do the second and fourth
- shell rhyme: the first and fourth lines rhyme, as do the second and third
- free rhyme: any form that is not perfect, even, cross, or shell
The first line of the input file contains an integer N, the number of verses in the poem, 1 < N < 5.
The following 4N lines of the input file contain the lines of the poem. Each line contains at most 80 letters of the alphabet and spaces as described above.
The output should have N lines. For each verse of the poem there should a single line containing one of the words 'perfect', 'even', 'cross', 'shell' or 'free' describing the form of rhyme in that verse.
*/

#include <iostream>
using namespace std;
int main()
{
   string beans;
   string cheese;
   
   cout << "Enter a word: ";
   cin >> beans;
   
   for (int index = 0; index <= beans.length() - 1; index++){
   if (beans[index] == 'a' || beans[index] == 'e' || beans[index] == 'i' || beans[index] == 'o' || beans[index] == 'u')
   cheese = beans.substr(index, beans.length() - 1);}

cout << "The last syllable is ";
cout << cheese << endl;
    return 0;
}



#include <iostream>
using namespace std;

string lastSyl(string beans){
    string cheese = {"f"};
    for (int index = 0; index <= beans.length() - 1; index++){
   if (beans[index] == 'a' || beans[index] == 'e' || beans[index] == 'i' || beans[index] == 'o' || beans[index] == 'u')
   cheese = beans.substr(index, beans.length() - 1);}
   if (cheese == "f")
        return beans;
    else
        return cheese;
}

int main()
{
   string word;
   
   cout << "Enter a line: ";
   getline (cin, word);
   cout << "The last syllable is " << lastSyl(word);
}






#include <iostream>
using namespace std;

string lastsyl(string beans){
    string cheese = {"f"};
    for (int index = 0; index <= beans.length() - 1; index++){
   if (beans[index] == 'a' || beans[index] == 'e' || beans[index] == 'i' || beans[index] == 'o' || beans[index] == 'u')
   cheese = beans.substr(index, beans.length() - 1);}
   if (cheese == "f")
        return beans;
    else
        return cheese;
}

string lastword(string line){
    string word = line;
    for (int index = 0; index <= line.length() - 1; index++){
   if (line[index] == ' ')
   word = line.substr(index + 1, line.length() - 1);}
    return word;
}

string* foursyls(string verse[4]){
    string syls[4];
    
    return syls;
}

int main()
{
   string line;
   
   cout << "Enter a line: ";
   getline (cin, line);
   cout << "The last syllable is " << lastsyl(lastword(line)) << endl;
   
   string verse[3] = {"ere", "rsa", "fdd"};
   cout << verse[0][0] << " " << verse[2];
}
