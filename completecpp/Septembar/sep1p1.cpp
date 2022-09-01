//Number of Digits in a number

#include<iostream>
using namespace std;

int main()
{
    int rem, n, a = 0;

    cout << "Enter a number : ";
    cin >> n;
    rem = n;
    while(rem > 0)
    {
        rem = rem / 10;
        a++;
    }
    cout<<"\nNumber of Digits in a number [ "<<n<<" ] is :: "<<a<<"\n";

   return 0;
}