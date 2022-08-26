//Check Character is Uppercase, Lowercase, Digit or Special

#include<iostream>
using namespace std;

int main()
{
    char ch ;
    cout << "Enter any character to check: ";
    cin >> ch;

    if(ch>=65 && ch<=90)
    {
        cout << "The entered character [" << ch << "] is an UPPERCASE character" << endl;
    }
    else if(ch>=48 && ch <=57)
    {
        cout << "The entered character [" << ch << "] is a DIGIT" << endl;
    }
    else if(ch >= 97 && ch <=122)
    {
        cout << "The entered character [" << ch << "] is a LOWECASE character" << endl;
    }
    else 
    {
        cout<<"\n The Entered Character [ "<<ch<<" ] is an SPECIAL character." << endl;
    }

    return 0;
}