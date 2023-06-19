#include <iostream>
using namespace std;

int main()
{
    int num,rem;
    cout<<"Enter the Number: ";
    cin>>num;
    rem = num % 2;
    if(rem==1)
    {
        cout<<"The Number "<<num<<" is Odd"<<endl;
    }
    else
    {
        cout<<"The Number "<<num<<" is Even"<<endl;
    }
    return 0;
}