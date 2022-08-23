//Display ASCII Value of a Character

#include<iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter any character: " << endl;
    cin >> c;
    cout << "The ASCII value of a character is : " << c << " is "
        << int(c) << endl;

    return 0;
}