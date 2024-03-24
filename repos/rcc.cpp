// WAP to create a parent class rectangle, its child class cuboid and cuboid's child class Cone
#include <iostream>
using namespace std;
#include <cmath>
class rectangle
{
    protected:
    int len, br;

    public:
    void input()
    {
        cout<<"Enter Length : ";
        cin>>len;
        cout<<"Enter Breadth : ";
        cin>>br;
    }
    void show()
    {
        cout<<"Length : "<<len<<endl;
        cout<<"Breadth : "<<br<<endl;
    }
    int area()
    {
        int ar;
        ar = len*br;
        return ar;
    }
};
class cuboid:public rectangle
{
    protected:
    int h;
    public:
    void input()
    {
        rectangle::input();
        cout<<"Enter Height : ";
        cin>>h;
    }
    void show()
    {
        rectangle::show();
        cout<<"Height : "<<h<<endl;
    }
    int area()
    {   int ar;
        ar = 2*(len * br +br*h+ h * len);
        return ar;
    }
};
class cone:public cuboid
{   protected:
    int r;
    
    
    public:
    void input()
    {
        cout<<"Enter Height : ";
        cin>>h;
        cout<<"Enter Radius : ";
        cin>>r;
    }
    void show()
    {   float la = sqrt(r*r + h*h);
        cout<<"Height : "<<h<<endl;
        cout<<"Radius : "<<r<<endl;
        cout<<"Lateral Height : "<<la<<endl;
    }
    float area()
    {   float pi = 3.14;
        float la = sqrt(r*r + h*h);
        float ar ;
        ar = (pi * r *r) + (pi *r*la);
        return ar;
    }

};
int main()
{   int i,j,k;
    rectangle a;
    cuboid b;
    cone c;
    a.input();
    a.show();
    i = a.area();
    cout<<"Area of Rectangle is "<<i<<endl;
    b.input();
    b.show();
    j = b.area();
    cout<<"Area of Cuboid is "<<j<<endl;
    c.input();
    c.show();
    k = c.area();
    cout<<"Area of Cone is "<<k<<endl;
}