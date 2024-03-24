#include <iostream>
#include <fstream>
using namespace std;
class issue;
class memb;
void str_cmp(char a[100], char b[100]);
class book
{   protected:
    int Bid,copies;
    char Bname[60],Author[60],publisher[60];
    public:
    book (){};
    friend  void str_cmp(char a[100], char b[100]);
    void add()
    {
        cout<<"Enter Book id ";
        cin>>Bid;
        cout<<"Enter Book name, Author and Publisher ";
        cin.getline(Bname,60);
        cin.getline(Author,60);
        cin.getline(publisher,60);
        cout<<"Enter Number of Copies ";
        cin>>copies;
        
    }
    void display()
    {   
        cout<<Bid<<"\t"<<Bname<<"\t"<<Author<<"\t"<<publisher<<"\t"<<copies<<endl;
        
    }
    int searchonid(int k)
    {
        if(Bid == k)
        {
            return 0;
        }
        else 
            return 1;
    }   
    book(book *t)
    {
        Bid = t->Bid;
        str_cmp(Bname,t->Bname);
        str_cmp(Author,t->Author);
        str_cmp(publisher,t->publisher);
        copies = t->copies;
    }
    friend class issue;
    friend class memb;
    friend  void addissuerecord(issue &c,book &g,memb &e);
    
};