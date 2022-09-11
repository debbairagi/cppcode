#include <iostream>
using namespace std;

class deb;
class bindu
{
    int a;
    public:
    void setdata(int value1){
        a = value1;
        }
    void display(void){
        cout << a << endl;
        }
    friend void bairagi(bindu &,  deb&);

};

class deb
{
    int b;
    public:
    void setdata(int value2){
        b = value2;
        }
    void display(void){
        cout << b << endl;
        }
    friend void bairagi(bindu &, deb &);

};

void bairagi(deb &x, bindu &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;

}

int main()
{

}