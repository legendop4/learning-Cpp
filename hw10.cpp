#include <iostream>
using namespace std;
//WAP to find LCM of three given Numbers

int main()
{
    int num1,num2,num3,i,k;
    cout<<"Enter the First Number";
    cin>>num1;
    cout<<"Enter the Second Number";
    cin>>num2;
    cout<<"Enter the Third Number";
    cin>>num3;
    if (num1<num2 && num1<num2)
    {
        k = num1;
    }
    else if (num2<num1 && num2<num3)
    {
        k = num2;
    }
    else 
    {
        k = num3;
    }
    
    for(i = k;i <= num1*num2*num3;i++)
    {
        if ( i % num1 == 0 && i % num2 ==0 && i % num3==0)
        {
            cout<<"LCM of given numbers "<<num1<<" , "<<num2<<" , "<<num3<<" is "<<i<<endl;
            break;
        }
    }
    return 0;


}