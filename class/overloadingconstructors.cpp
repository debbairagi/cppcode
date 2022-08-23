#include <iostream>
#include <string.h>

using namespace std;

class human
{
private:
    int age;
    string name;

public:
    human(){
        cout << "Default Constructor" << endl;
        age = 22;
        name = "noname";
    }

    human(string iname){
        cout << "Constructor with name as the parameter" << endl;
        age = 0;
        name = "iname";
    }

    human(int iage){
        cout << "Constructor with age as the parameter" << endl;
        age = iage;
        name = "noname";
    }
    human(string iname, int iage){
        cout << "Constructor with age and name as the parameter" << endl;
        age = iage;
        name = "iname";
    }

    void display(){
        cout << name << endl << age << endl;
    }
};

int main()
{
    human obj;
    obj.display();

    cout << endl;
    cout << endl;

    human deb("Debbindu");
    deb.display();

    cout << endl;
    cout << endl;

    human bindu(25);
    bindu.display();

    cout << endl;
    cout << endl;

    human smith("smith", 22);
    smith.display();

    return 0;
}