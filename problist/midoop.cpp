#include <iostream>
using  namespace std;

class deb
{
    char ch;
    public:
    void input(void)
    {
        cout << "Enter a character: ";
        cin >> ch;
    }

    void modify(void)
    {
        if(ch>='a' && ch<='z')
        {
            cout << "Entered character is lowercase" << endl;
        }
        else if(ch>='A' && ch<='Z')
        {
            cout << "Entered character is Uppercase" << endl;
        }
        else
        {
            cout << "Entered character is Invalid" << endl;
        }
    }

};



int main()
{
    deb p;
    p.input();
    p.modify();
    
    return 0;
}