#include<iostream>
using namespace std;

class myclass ///class defination
{
public:
    int result; ///member data

    void add(int x, int y);//member function declaration
    ///void add(void);
    ///void add(int , int );
    ///void add();

    void display();
};

void myclass:: display()
{
    cout << "This is my first cpp program with class and object feature";
}


///void myclass :: add(void)
///void myclass :: add (int , int )
void myclass::add(int x, int y)  //member function defination
{
    result = x + y;
    cout << "The summation of " << x << " and " << y << " is : " << result << endl;
}
int main()
{
    int a,b;
    myclass obj2;
    obj2.display();

    cout << endl;
    cout << endl;
    cout << "Enter an integer value for a: ";
    cin >> a;
    cout << "Enter an integer value for b: ";
    cin >> b;
    cout << endl;

    myclass obj; ///declaring object in myclass user defined user data type.
    obj.add(a,b); /// "." is called dot operator

    return 0;
}
