#include <iostream>
using namespace std;

struct add
{
    int hno;
    char cty[20];
    char pincode[6];
};
struct Book
{

    char name[20];
    char phnum[10];
    add Address;
};
void insert(Book x)
{   
    cout<<"Name : ";
    cin>>x.name;
    cout<<"Phone number : ";
    cin>>x.phnum;
    cout<<"House no : ";
    cin>>x.Address.hno;
    cout<<"City : ";
    cin>>x.Address.cty;
    cout<<"Pincode : ";
    cin>>x.Address.pincode;
}
void display(Book *x)
{
    cout<<x->name<<"\t"<<x->phnum<<"\t"<<x->Address.hno<<"\t"<<x->Address.cty<<"\t"<<x->Address.pincode<<endl;
}
int modify(char* e,Book x,int a)
{
    if(e == x.phnum)
    {
        return a;
    }
    
}
int main()
{
    int k;
    cout<<"Enter Number of People you want to add in Phone book";
    cin>>k;
    int i = k;
    Book rec[k];
    for(int a=0;a<k;a++)
    {  
        insert(rec[a]);
    }
    cout<<"Name"<<"\t"<<"Phone number"<<"\t"<<"Hno"<<"\t"<<"City"<<"\t"<<"Pincode"<<endl;
    for(int a=0;a<k;a++)
    {
        display(&rec[a]);
    }
        
    int ch; 
    for(int c=0;c<10;c++)
    {
        cout<<"Enter the Operation :";
        cin>>ch;
        if (ch==1)
        {   
            insert(rec[k]);
            k++;
            cout<<"Name"<<"\t"<<"Phone number"<<"\t"<<"Hno"<<"\t"<<"City"<<"\t"<<"Pincode"<<endl;
            for(int a=0;a<k;a++)
            {
                display(&rec[a]);
            }
        }
        else if(ch==2)
        {
            cout<<"Name"<<"\t"<<"Phone number"<<"\t"<<"Hno"<<"\t"<<"City"<<"\t"<<"Pincode"<<endl;
            for(int a=0;a<k;a++)
            {
                display(&rec[a]);
            }
            char e[10];
            cout<<"Enter the Mobile Number you want to change information of : ";
            cin>>e;
            int d;
            for(int a=0;a<k;a++)
            {
                d = modify(e,rec[a],a);
            }
            insert(rec[d]);
            cout<<"Name"<<"\t"<<"Phone number"<<"\t"<<"Hno"<<"\t"<<"City"<<"\t"<<"Pincode"<<endl;
            for(int a=0;a<k;a++)
            {
                display(&rec[a]);
            }
        }
        
        
            
    }


}