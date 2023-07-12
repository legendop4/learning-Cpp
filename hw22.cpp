#include <iostream>
using namespace std;
struct Address
{
    int hno;
    char colony[20];
    char city[20];
    char state[20];
    int pincode;
};
struct Date
{
    int day,month,year;
};
struct employee
{
    int empid;
    char name[20];
    int salary;
    Date doj;
    Address add;
};
int max_salary(int c,int d);
int main()

{   int t;
    cout<<"Enter Number of Employees ";
    cin>>t;

    employee b[t];
    int a;
    for(a=0;a<t;a++)
    {
        cout<<"Enter Employee ID : ";
        cin>>b[a].empid;
        cout<<endl;
        cout<<"Enter Employee Name : ";
        cin>>b[a].name;
        cout<<endl;
        cout<<"Enter Employee  Salary : ";
        cin>>b[a].salary;
        cout<<endl;
        cout<<"Enter Employee Date of Joining : ";
        cin>>b[a].doj.day>>b[a].doj.month>>b[a].doj.year;
        cout<<endl;
        cout<<"Enter Employee Address : ";
        cin>>b[a].add.hno>>b[a].add.colony>>b[a].add.city>>b[a].add.state>>b[a].add.pincode;
        cout<<endl;
    }
    
    int c = b[0].salary;
    for(a=0;a<t-1;a++)
    {   int d;
        
        d = b[a+1].salary;
        c = max_salary(c,d);
        
    }
    int k;
    for (a=0;a<t;a++)
    {
        if (c == b[a].salary)
        {
            k = a;
        }
    }
    cout<<"highest salary is "<<c<<endl;
    cout<<"The employee who earns the highest is : ";
    for(a=0;a<1;a++)
    {
        cout<<"Employee id is : "<<b[k].empid<<endl;
        cout<<"Employee name is : "<<b[k].name<<endl;
        cout<<"Employee Salary is : "<<b[k].salary<<endl;
        cout<<"Employee Date of joining is : "<<b[k].doj.day<<"-"<<b[k].doj.month<<"-"<<b[k].doj.year<<endl;
        cout<<"Employee Address is : "<<b[k].add.hno<<","<<b[k].add.colony<<","<<b[k].add.city<<","<<b[k].add.state<<","<<b[k].add.pincode<<endl;
    }


}
int max_salary(int c ,int d)
{
    if(c>d)
    {   
        
        return c;
    }
    else 
    {  
        return d;
    }
    
}
