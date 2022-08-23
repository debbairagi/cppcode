#include <iostream>
using namespace std;
class human
{
private:
    int age;

public:
    void displayAge()
    {
        cout << age << endl;
    }
    void setAge(int value)
    {
        age = value;
    }
};

int main()
{
    human obj;
    
    obj.setAge(22);
    obj.displayAge();

    return 0;
}
