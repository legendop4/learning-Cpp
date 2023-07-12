#include <iostream>
using namespace std;
//Creating complex number and applying basic operation on them;
struct complex
{
    int real;
    int img;
};
int main()
{
    complex a,b;
    cout<<"Enter real part of complex number one :";
    cin>>a.real;
    
    cout<<"Enter imaginary part of complex number one :";
    cin>>a.img;
    cout<<"Enter real part of complex number two :";
    cin>>b.real;
    
    cout<<"Enter imaginary part of complex number two :";
    cin>>b.img;
    
    cout<<"Sum of complex numbers is "<<a.real+b.real<<" + "<<a.img+b.img<<"i"<<endl;
    cout<<"Difference of complex number is ";
    if (a.img>b.img)
    {
        cout<<a.real-b.real<<" + "<<(a.img-b.img)<<"i"<<endl;
    }
    else
    {
        cout<<b.real-a.real<<" + "<<(b.img-a.img)<<"i"<<endl;
    }
    cout<<"Product of complex numbers is "<<a.real*b.real-(a.img*b.img)<<" + "<<(a.real*b.img)+(b.real*a.img)<<"i"<<endl;
}