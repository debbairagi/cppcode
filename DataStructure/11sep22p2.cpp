///Finding number of digits in a number
#include <iostream>
using namespace std;

class deb
{
public:
    int n;
    int i;
    void input();
    void countN(void);
};

void deb::input(void)
{
    cout<< "Enter numbers: ";
    cin >> n;
}
void deb::countN(void)
{
    for(i=0; i<=n; i++)
    {
        n = n /10;
    }
    cout << "Number of digit is : " << i << endl;
}

int main()
{
    deb p;
    p.input();
    p.countN();

    return 0;
   
}
