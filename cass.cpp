#include <iostream>
using namespace std;

class student
{
    
    int rno;
    char name[30];
    
    
public:
    float marks;
    void input()
    {   cout<<"Enter Roll no, Name and Marks : "<<endl;
        cin>>rno>>name>>marks;
        
    }
    void display()
    {   
        cout<<rno<<"\t"<<name<<"\t"<<marks<<"\t"<<grd(marks)<<endl;
    }
    char grd(int marks)
    {
        int a = marks;
        if(a>90)
        {
            return 'A';
        }
        else if (a>80&&a<=90)
        {
            return 'B';
        }
        else if (a>70&&a<=80)
        {
            return 'C';
        }
        else if (a>=60&&a<=70)
        {
            return 'D';
        }
        else if (a>=40&&a<=60)
        {
            return 'E';
        }
        else if (a<=40)
        {
            return 'F';
        }
    }
    
};
int main()
{
    int k;
    cout<<"Enter the Number of student : ";
    cin>>k;
    student stu[k];
    for(int i =0;i<k;i++)
    {
        stu[i].input();
    }
    cout<<"Rno"<<"\t"<<"Name"<<"\t"<<"Marks"<<"\t"<<"Grade"<<endl;
    for(int i = 0;i<k;i++)
    {   
        stu[i].display();
    }
    for(int i=0;i<k;i++)
    {   for(int j = 0;j<k-1;j++)
        {   if(stu[i].marks>stu[j].marks)
            {   student temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }
    cout<<"TOP 3 Student of Class are :";
    cout<<"Rno"<<"\t"<<"Name"<<"\t"<<"Marks"<<"\t"<<"Grade"<<endl;
    for(int i = 0;i<3;i++)
    {   
        stu[i].display();
    }
    
}
