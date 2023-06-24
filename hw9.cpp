#include <iostream>
using namespace std;
//WAP to find hcf of three numbers
int main()
{
    int num1,num2,num3;
    cout<<"Entet the First Number :";
    cin>>num1;
    cout<<"Entet the Second Number :";
    cin>>num2;
    cout<<"Entet the Third Number :";
    cin>>num3;
    int a,b,c,d,e,f,g;
    a = num1;
    b = num2;
    c = num3;
    if(a>=b)
    {
        d = a;
        f = b;
    }
    else 
    {   d = b;
        f = a;
    }
    int rem,rem2;
    while(d % f != 0)
    {
        rem = d % f;
        d = f;
        f = rem;
    }
    if (f>c)
    {
        e = f;
        g = c;
    }
    else 
    {  e = c;
        g = f;
    }
    while (e % g != 0)
    {
        rem2 = e % g;
        e = g;
        g = rem2;
    }
    int hcf;
    hcf = g;
    cout<<"Hcf of numbers "<<num1<<" , "<<num2<<" and "<<num3<< " is "<<hcf;
}