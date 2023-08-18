#include <iostream>
using namespace std;
//Creating class time having constructors of 3 types and operator overloading on + - == < > ++
class Time{
    int sec,min,hour;
public:
    Time()
    {
        sec = min = hour =0;
    }
    Time(int x,int y,int z)
    {
        sec = x;
        min = y;
        hour = z;
    }
    Time(Time &t)
    {
        sec = t.sec;
        min = t.min;
        hour = t.hour;
    }
    void input();
    void show();
    
    Time operator +(Time j)
    {
        Time s;
        s.sec = sec + j.sec;
        s.min = min + j.min;
        s.hour = hour+j.hour;
        return s;
    }
    Time operator -(Time i)
    {
        Time s;
        long int t1,t2;
        t1 = (hour *60)*60 + min *60 + sec;
        t2 = (i.hour *60)*60 + i.min *60 + i.sec;
        
       
        if(t1>t2)
        {
            s.sec = t1 - t2;
        }
        else
            s.sec = t2 - t1;

        return s;
    }
    bool operator ==(const Time &o)
    {
        if(hour == o.hour && min == o.min && sec == o.sec)
            return true;
        else 
            return false;
    }
    bool operator >(const Time &o)
    {
        if(hour > o.hour || min > o.min || sec > o.sec)
            return true;
        else 
            return false;
    }
    bool operator <(const Time &o)
    {
        if(hour < o.hour || min < o.min || sec < o.sec)
            return true;
        else 
            return false;
    }
    Time operator ++()
    {   Time res;
        
        res.min = ++min;
        res.sec = ++sec;
        res.hour = ++hour;
        res.show();
        cout<<endl;
    }
};
int main()
{   
    Time a,b,c,d(88,54,9);
    cout<<"Enter the time :"<<endl;
    a.input();
    b.input();
    Time e(a);
    cout<<"Entered  Times are : "<<endl;
    a.show();
    cout<<endl;
    b.show();
    cout<<endl;
    cout<<"Example of Default Constructor"<<endl;
    c.show();
    cout<<endl;
    cout<<"Example of Paramaterized Constructor "<<endl;
    d.show();
    cout<<endl;
    cout<<"Example of Copy Constructor "<<endl;
    e.show();
    cout<<endl;
    Time s,t;
    s = a + b;
    cout<<"Addition of  Times are : "<<endl;
    s.show();
    cout<<endl;
    cout<<"Subtraction of Times are : "<<endl;
    t = a - b ;
    t.show();
    cout<<endl;
    
    if(a==b)
    {
        a.show();
        cout<<" is Equals to b ";
        b.show();
        cout<<endl;
    }  
    else if(a>b)
    {   a.show();
        cout<<" is greater than b ";
        b.show();
        cout<<endl;
    }
    else
    {
        a.show();
        cout<<" is smaller than b ";
        b.show();
        cout<<endl;
    }
    cout<<"Increament of 1 hr 1 min and 1 sec in a Time is "<<endl;
    ++a;
    ++b;
}
void Time::input()
{   cout<<"Enter seconds ";
    cin>>sec;
    cout<<"Enter minutes";
    cin>>min;
    cout<<"Enter Hours ";
    cin>>hour;
}
void Time::show()
{   int t = sec/60;
    sec = sec%60;
    min = min + t;
    int k = min/60;
    min = min % 60;
    hour = hour + k;
    cout<<hour<<" hours "<<min<<" minutes "<<sec<<"seconds ";
}
