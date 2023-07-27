#include <iostream>
using namespace std;
//Creating class time having 2 value which contain time and compares and adds these two time;
class Time{
    int sec,min,hour;
public:
    void input();
    void show();
    void compare(Time *a,Time *b);
    Time add(Time *a, Time *b);
};
int main()
{   
    Time a,b;
    cout<<"Enter the time :";
    a.input();
    b.input();
    a.show();
    b.show();
    Time k;
    k.add(&a,&b);
    cout<<"Addition of two times are "<<endl;
    k.show();
    Time t;
    t.compare(&a,&b);
    cout<<"Greater time btw given time is:"<<endl;
    t.show();
    
    

}
void Time::input()
{   cout<<"Enter seconds ";
    cin>>sec;
    if(sec<60)
    {   
        cout<<"Enter minutes :";
        cin>>min;
    }
    else 
    {   int t;
        t = sec/60;
        sec = sec -(t*60);
        cout<<"Enter minutes ";
        cin>>min;
        min = min+t;
    }
    if (min<60)
    {
        cout<<"Enter hours ";
        cin>>hour;
    }
    else    
    {   int t;
        t = min /60;
        min = min - (t*60);
        cout<<"Enter hours ";
        cin>>hour;
        hour = hour + t;
    }

}
void Time::show()
{
    cout<<hour<<" hours "<<min<<" minutes "<<sec<<" seconds "<<endl;
}
Time Time::add(Time *a,Time *b)
{
    
    hour=a->hour+b->hour;
    min=a->min+b->min;
    sec=a->sec+b->sec;
    if(sec>60)
    {   int t;
        t = sec/60;
        sec = sec -(t*60);
        
        min = min+t;
    }
    if (min>60)
    {
        int t;
        t = min /60;
        min = min - (t*60);
        
        hour = hour + t;
    }
   
}
void Time::compare(Time *a, Time *b )
{      
    if(a->hour<b->hour)
    {
        hour = b->hour;
        min = b->min;
        sec = b->sec;
    }
    else if(a->hour>b->hour)
    {
        hour = a->hour;
        min = a->min;
        sec = a->sec;
    }
    else
    {   if(a->min<b->min)
        {
            hour = b->hour;
            min = b->min;
            sec = b->sec;
        }
        else if(a->min>b->min)
        {
            hour = a->hour;
            min = a->min;
            sec = a->sec;
        }
        else
        {
            if(a->sec<b->sec)
            {
                hour = b->hour;
                min = b->min;
                sec = b->sec;
            }
            else 
            {
                hour = a->hour;
                min = a->min;
                sec = a->sec;
            }
        }
    }

    
}