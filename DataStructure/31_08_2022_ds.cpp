//Data Structure , Binary Search
#include <iostream>
using namespace std;

class binary
{
    public:
    int data[100], i, n, item, beg, fin, mid;
    void input(void);
    void searching();
};

void binary :: input(void)
{
    cout << "Enter array elements: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for(i=1; i<=n; i++)
    {
        cin >> data[i];
    }
}

void binary :: searching()
{
    cout << "Enter the array elements: ";
    cin >> item ;

    beg = 1; 
    fin = n;
    mid = (beg + fin ) / 2;
    while(beg <= fin && data[mid] != item)
    {
        if(data[mid] <= item )
        {
            beg = mid + 1 ;
        }
        else
        {
            fin = mid - 1;
        }
        mid =  (beg + fin )/2;
       
    }

    //checking the data again

    if (data[mid] == item)
    {
        cout << "Item found at : " << mid;
    }
    else
    {
        cout << "Item was not found. " ;
    }

}

int main()
{
    binary obj;
    obj.input();
    obj.searching();
    return 0;
}