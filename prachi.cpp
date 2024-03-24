/*
Define a class Named Time having hours, minutes &
seconds as data members. Define three types of constructors 
and functions to input() and show() the time
overload following operators : 
+ - > < == ++
*/
#include<iostream>
using namespace std;
class Time
{
  int h,m,s;
  public:
    //default constructor
    Time()
    {
      h = 0;
      m = 0;
      s = 0;
    }
    //parameterized constructor
    Time(int a, int b, int c)
    {
      h = a;
      m = b;
      s = c;
    }
    //copy constructor
    Time(Time &t)
    {
      h = t.h;
      m = t.m;
      s = t.s;
    }
    //function to input the time
    void input()
    {
      cout<<"Enter Hours, Minutes, Seconds : ";
      cin>>h>>m>>s;
    }
    //function to show the time
    void show()
    {
      cout<<"Time is : "<<h<<" hours "<<m<<" minutes "<<s<<" seconds"<<endl; 
    }
    // operator overloading '-'
    Time operator -(Time x)
    {
      Time t;
      int a = 0, b = 0;
      a += h * 3600 + m * 60 + s;
      b += x.h * 3600 + x.m * 60 + x.s;
      if(a > b)
      {
        a -= b;
        t.h = a / 3600;
        a %= 3600;
        t.m = a / 60;
        a %= 60;
        t.s = a;
      }
      else if(b > a)
      {
        b -= a;
        t.h = b / 3600;
        b %= 3600;
        t.m = b / 60;
        b %= 60;
        t.s = b;
      }
      else
      {
        t.h = 0;
        t.m = 0;
        t.s = 0;
      }
      return t;  
    }
    
    //operator overloading '++'
    Time operator ++()
    {
      Time t;
      t.h = h;
      t.m = m;
      t.s = s + 1;
      int a;
      
      if(t.s >= 60)
      {
        a = t.s / 60;
        t.s %= 60;
        t.m += a;
      }
      if(t.m >= 60)
      {
        a = t.m / 60;
        t.m %= 60;
        t.h += a;
      }
      return t;
    }
    // operator overloading '+'
    Time operator +(Time x)
    {
      Time t;
      int a,b;
      t.h = h + x.h;
      t.m = m + x.m;
      t.s = s + x.s;
      if(t.s >= 60)
      {
        a = t.s / 60;
        t.s %= 60;
        t.m += a;
      }
      if(t.m >= 60)
      {
        b = t.m / 60;
        t.m %= 60;
        t.h += b;
      }
      return t;
    }
    // operator overloading '>'
    bool operator >(Time t)
    {
      //Time x;
      int a=0,b=0;
      a += h * 3600 + m * 60 + s;
      b += t.h * 3600 + t.m * 60 + t.s;
      if(a>b)
        return true;
      else
        return false;
    }
    // operator overloading '<'
    bool operator <(Time t)
    {
      //Time x;
      int a=0,b=0;
      a += h * 3600 + m * 60 + s;
      b += t.h * 3600 + t.m * 60 + t.s;
      if(a < b)
        return true;
      else
        return false;
    }
    // operator overloading '=='
    bool operator ==(Time t)
    {
      //Time x;
      int a=0,b=0;
      a += h * 3600 + m * 60 + s;
      b += t.h * 3600 + t.m * 60 + t.s;
      if(a == b)
        return true;
      else
         return false;
    }
};
int main()
{
  Time a(4,5,6);
  Time b(3,4,5),c,d;
  a.input();
  b.input();
  a.show();
  b.show();
  
  if( a > b)
  {
    cout<<"\nGreatest ";
    a.show();
    cout<<"Lowest ";
    b.show();
  }
  else if( a < b)
  {
    cout<<"\nGreatest ";
    b.show();
    cout<<"Lowest ";
    a.show();
  }
  else
    cout<<"\nBoth the Time are Same !!\n";
  
  d = a+b;
  cout<<"\nSum of Entered ";
  d.show();
  c = a-b;
  cout<<"Difference of Entered ";
  c.show();
  c = ++a;
  c.show();
  return 0;
}