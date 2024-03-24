#include<iostream>
#include<fstream>
using namespace std;
class Product
{
    int pid;
    char name[30];
    int cost,qty;
    public:
    void input()
    {
        cout<<"Enter Product id ";
        cin>>pid;
        cout<<"Enter name of the product : ";
        cin>>name;
        cout<<"Enter cost of the product : ";
        cin>>cost;
        cout<<"Enter Quantity : ";
        cin>>qty;
    }
    void show()
    {
        cout<<"Product id is "<<pid<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Cost is "<<cost<<endl;
        cout<<"Quantity is "<<qty<<endl;
    }
    void display()
    {
        cout<<pid<<"\t"<<name<<"\t"<<cost<<"\t"<<qty<<endl;
    }
    int search(int t)
    {
        if(pid == t)
        {
           return 1;
        }
        else 
            return 0;
        
    }
    void copes(Product &p)
    {
        pid = p.pid;
        for(int i = 0;i<30;i++)
            name[i] = p.name[i];
        cost = p.cost;
        qty = p.qty;
        
    }
};
int main()
{
    Product p,f;
    fstream fp;
    int ch;
    while(1)
    {
        cout<<"Press 1 - Add a Product "<<endl;
        cout<<"Press 2 - Display Proucts"<<endl;
        cout<<"Press 3 - Search on the basis of ID"<<endl;
        cout<<"Press 4 - Exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            p.input();
            fp.open("product.dat",ios::app | ios::binary);
            fp.write((char*)&p,sizeof(p));
            cout<<"Stored Successfully !!!"<<endl;
            fp.close();
            break;
            case 2:
            fp.open("product.dat",ios::in | ios::binary);
            
            cout<<"\n-----------------------------\n";
            cout<<"Pid\tName\tCost\tQuantity\n";
            cout<<"-----------------------------\n";
            while(fp.read((char*)&p,sizeof(p)))
            {
                    p.display();
            }

            
            fp.close();
            break;
            case 3:
            fp.open("product.dat",ios::in | ios::binary);
            int t,e;
            cout<<"Enter the prodcut id you want to search: ";
            cin>>t;
            while(fp.read((char*)&p,sizeof(p)))
            {
                e = p.search(t);
                if(e==1)
                {    f.copes(p);
                    break;
                }
            }
            if(e==1)
                f.display();
            else 
                cout<<"NOT FOUND"<<endl;
            fp.close();
            break;
        case 4:
        exit(0);
        }
    }
}