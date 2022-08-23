//Generate Random Numbers

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int i; //Loop Counter
    int num; //store random number

    cout << "Generating the random number below ::" << endl;
    for(i=0; i<10 ; i++)
    {
        num = rand()%100;
        cout << num << " ";
    }

    return 0;
}