//Multiplication of two Numbers
#include<iostream>
using namespace std;

int main()
{
    float n1, n2;
    cout << "Enter two floating point numbers: " << endl;
    cin >> n1 >> n2;

    float multi = n1 * n2 ;

    cout << "The multiplication of " << n1 << " and " << n2 << " is " << multi << endl;
    
    return 0;
}