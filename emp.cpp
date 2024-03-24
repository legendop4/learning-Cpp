#include <iostream>
using namespace std;

class Emp
{   protected:
    int empid;
    float salary;
    char name[20];
    public:
    void input()
    {
        cout<<"Enter Employee ID : ";
        cin>>empid;
        cout<<"Enter Employee Name : ";
        cin>>name;
        cout<<"Enter Salary : ";
        cin>>salary;
    }
    void show()
    {
        cout<<"Emp ID : "<<empid<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};
class Sm:public Emp
{   float sales;
    float comission;
    public:
    void input()
    {
        Emp::input();
        cout<<"Montly sales : ";
        cin>>sales;
    }
    void TS()
    {
        comission = sales /10;
        salary += comission;
    }
    void show()
    {   TS();
        Emp::show();
    }
    
};
class Wrk:public Emp
{
    int ovr;
    int wages;
    public:
    void input()
    {
        Emp::input();
        cout<<"Enter Overtime hours : ";
        cin>>ovr;
    }
    void TS()
    {
        wages = ovr *500;
        salary += wages;
    }
    void show()
    {   TS();
        Emp::show();
    }
    
};
class Manager:public Emp
{
    float shares;
    public:
    void input()
    {
        Emp::input();
        cout<<"Enter Shares Value : ";
        cin>>shares;
    }
    void show()
    {
        Emp::show();
        cout<<"Shares Value : "<<shares<<endl;
    }
};
int main()
{
    Sm a;
    Wrk b;
    Manager c;
    a.input();
    a.show();
    b.input();
    b.show();
    c.input();
    c.show();
}
