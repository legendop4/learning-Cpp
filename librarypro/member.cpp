#include <iostream>
#include <fstream>
using namespace std;
class issue;
class book;
void str_cmp(char a[100], char b[100]);
class memb
{  protected:
    int memid,bissue;
    char membername[60],phno[12],email[60],address[100];
    

    public:
        friend  void str_cmp(char a[100], char b[100]);
        memb(){};
        void addmem()
        {
            cout<<"Enter Member Id ";
            cin>>memid;
            cin.ignore(1,'\n');
            cout<<"Enter name ";
            cin.getline(membername,60);
            
            cout<<"Enter Phone no. & Email address ";
            cin.getline(phno,12);
            cin.ignore(1,'\n');
            cin.getline(email,60);
            
            cout<<"Enter Address ";
            cin.getline(address,100);
            
            cout<<"Enter No. of Book Issued ";
            cin>>bissue;
        }
        void show()
        {
            cout<<memid<<"\t"<<membername<<"\t"<<phno<<"\t"<<email<<"\t"<<address<<"\t"<<bissue<<endl;
        }
        memb(memb *g)
        {
            memid = g->memid;
            str_cmp(membername,g->membername);
            str_cmp(phno,g->phno);
            str_cmp(email,g->email);
            str_cmp(address,g->address);
            bissue = g->bissue;
        }
        int Searchmid(int &k)
        {
            if(memid == k)
            {
                return 0;
            }
            else    
                return 1;
        }
        friend class book;
        friend class issue;
        friend  void addissuerecord(issue &c,book &g,memb &e);
        
};