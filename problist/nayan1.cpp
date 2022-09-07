#include <iostream>
#include <string.h>

using namespace std;

class binary
{
    string s;

public:
    void read(void)
    {
        cout << "Enter any binary number : ";
        cin >> s;
    }
    void chk_binary(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "The given binary number is incorrect \n";
                exit(0);
            }
        }
    }
    void ones(void)
    {
        chk_binary();

        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) = '1')
            {
                s.at(i) = '0';
            }
            else
            {
                s.at(i) = '1';
            }
        }
    }
    void displayones(void)
    {
        ones();

        cout << "The ones binaey number of the above binary numbary is :" << s << "\n";
    }
};
int main()
{
    binary n;
    n.read();
    /// n.chk_binary();
    n.displayones();
    return 0;
}