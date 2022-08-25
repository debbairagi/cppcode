//Bubble sort in Descending Order

#include<iostream>
using namespace std;

class bubble
{
    public:
    int data[100], n, k, ptr;

    void input(void);
    void sorting(void);

};
void bubble::input(void)
{
    cout << "Enter array limit: ";
    cin >> n;
    for(k=1; k<=n; k++)
    {
        cin >> data[k];
    }
}
void bubble::sorting(void)
{
    for(k=1; k<=n-1; k++)
    {
        for(ptr=1; ptr<=n-k; ptr++)
        {
            if(data[ptr+1]>data[ptr])
            {
                int temp = data[ptr+1];
                data[ptr+1]= data[ptr];
                data[ptr]=temp;
            }
        }
    }
    cout << endl<< "After sorting in Decending order: ";
    for(ptr=1; ptr<=n; ptr++)
    {
        cout << data[ptr] << " ";
    }
    cout << endl;
}

int main()
{
    bubble obj;
    obj.input();
    obj.sorting();

    return 0;
}