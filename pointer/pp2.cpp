//Pointer as function arguments - call by reference

#include <iostream>
using namespace std;


class deb
{
    public:
    
    void increment(int a);
};
void deb::increment(int a)
{
    a = a + 1;
    cout << "Address of variable a in increment: " << &a << endl;
}

int main()
{
    int a = 10;
    deb p;
    p.increment(a);
    cout << "Address of variable a in main: " << &a << endl;

return 0;
}