#include <iostream>
using namespace std;

int main()
{
    int num,rem;
    cout<<"Enter the Number: ";
    cin>>num;
    rem = num % 2;
    switch(rem)
    {   case 1:
            cout<<"The Number "<<num<<" is Odd"<<endl;
            break;
        case 0:
            cout<<"The Number "<<num<<" is Evem"<<endl;
            break;

    }
    
    return 0;
}