#include<iostream>
using namespace std;

class myclass
{
public:
    int result, a, b;
    void add();
    void input();

};

void myclass::input(void)
{
    cout << "Enter an integer value for a: ";
    cin >> a;
    cout << "Enter an integer value for b: ";
    cin >> b;
}

void myclass::add(void)
{
    result = a + b;
    cout << "The summation of " << a << " and " << b << " is : " << result << endl;
}
int main()
{
    int a,b;
    myclass obj;
    obj.input();
    obj.add();

    return 0;
}

