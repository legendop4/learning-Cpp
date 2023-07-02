#include <iostream>
using namespace std;
// hcf of three number using function
int hcf(int,int);

int main()
{
    int a,b,c,num1,num2,num3;
    cout<<"Enter the numbers ";
    cin>>num1>>num2>>num3;
    a = num1;
    b = num2;
    a = hcf(a,b);
    b = num3;
    cout<<"HCF of three numbers is : "<<hcf(a,b)<<endl;
    

}
int hcf(int a ,int b)
{   int z,d,e,f;
    if (a>b)
    {
        z = a;
        d = b;
    }
    else 
    {
        d = a;
        z = b;
    }
    while (z % d != 0)
    {
        e = z % d;
        z = f;
        d = e;
    }
    return d;
}