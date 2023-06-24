#include <iostream>
using namespace std;
// WAP to switch first half of array with other half of array
int main()
{
    int num[10],a;
    cout<<"Enter 10 numbers ";
    for(a=0;a<10;a++)
    {
        cin>>num[a];
    }
    for(a=0; a<5;a++)
    {
        int temp = num[a];
        num[a] = num[a+5];
        num[a+5] = temp;
    }
    cout<<"swapper order is ";
    for(a=0;a<10;a++)
    {
        cout<<num[a]<<endl;
    }

    return 0;
}