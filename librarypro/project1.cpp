#include <iostream>
#include <fstream>
#include "book.cpp"
#include "member.cpp"
#include "issue.cpp"
#include <string>
using namespace std;
book addrecord(book &a);
book displaybook(book &a);
book searchbookid(book &a);
memb addmemrecord(memb &b);
memb displaymem(memb &b);
memb searchmemberid(memb &b);
void addissuerecord(issue &c,book &g,memb &e);
issue displayret(issue &c);

void str_cmp(char a[100], char b[100])
{
  int cnt;
  int i;
  for(i = 0 ; b[i]!='\0';i++);
  cout<<i<<endl;
  for(cnt=0;cnt<i;cnt++)
  {if(b[cnt]>= 65 && b[cnt] <= 90 )
   { a[cnt] = b[cnt];
    
   }
   else if( b[cnt] >= 97 && b[cnt] <= 122 )
   { a[cnt] = b[cnt];
    
   }
   else if( b[cnt] >= 48 && b[cnt] <= 57)
   { a[cnt] = b[cnt];
    
   }
   else
    {   
        break;
    }
   
  }
  
}
int main()
{   int ch,x;
    book a;
    memb b;
    issue c;
    fstream file;
    do{
        cout<<"Press 1 - BOOK record "<<endl;
        cout<<"Press 2 - Members record "<<endl;
        cout<<"Press 3 - Rental record "<<endl;
        cout<<"Press 4 - Exit "<<endl;
        cin>>x;
        switch(x)
        {
            case 1:
            do{
            cout<<"Press 1 - Adding a Book "<<endl;
            cout<<"Press 2 - Displaying  Bookrecord "<<endl;
            cout<<"Press 3 - Search on the basis of Book id "<<endl;
            cin>>ch;
            switch(ch)
            {   case 1:
                    addrecord(a);
                    break;
                case 2:
                     displaybook(a);
                    break;
                case 3:
                     searchbookid(a);
                    break;
                
            }
            }
            while(ch !=4);
            case 2:
                do
                {cout<<"Press 1 - Adding a Member "<<endl;
                cout<<"Press 2 - Displaying  Member Records "<<endl;
                cout<<"Press 3 - Search on the basis of Book id "<<endl;
                cin>>ch;
                switch(ch)
                {   case 1:
                        addmemrecord(b);
                        break;
                    case 2:
                        displaymem(b);
                        break;
                    case 3:
                        searchmemberid(b);
                        break;
                    
                }
                }
                while(ch != 4);
         case 3:
                do
                {cout<<"Press 1 - Issue a Book "<<endl;
                cout<<"Press 2 - Return the Book "<<endl;
                
                cin>>ch;
                switch(ch)
                {   case 1:
                        addissuerecord(c,a,b);
                        break;
                    case 2:
                        displayret(c);
                        break;
                    
                    
                }
                }
                while(ch != 3);
        } 
    }
    while(ch!=5);
    return 0;    
}
// adding book record
book addrecord(book &a)
{   fstream file;
    a.add();
    file.open("book.dat",ios::app | ios::binary);
    file.write((char*)&a,sizeof(a));
    file.close();
    
}
// displaying bookrecord
book displaybook(book &a)
{   fstream file;
    file.open("book.dat",ios::in | ios :: binary);
    while(file.read((char*)&a,sizeof(a)))
    {
        a.display();
    }
    file.close();
}
//searching in book record
book searchbookid(book &a)
{   fstream file;
    int k;
    int d;
    d = 1;
    cout<<"Enter Book ID : ";
    cin>>k;
    file.open("book.dat",ios::in | ios :: binary);
    while(file.read((char*)&a,sizeof(a)))
    {   d  = a.searchonid(k);
        if (d==0)
        {   a.display();
            break;
        }
        else 
        {    
        d  = a.searchonid(k);
        }
    }
    if (d==1)
    {    cout<<"Record not found"<<endl;}
}
// adding Member record
memb addmemrecord(memb &b)
{
    fstream file;
    b.addmem();
    file.open("member.dat",ios::app | ios::binary);
    file.write((char*)&b,sizeof(b));
    file.close();
}
//displaying member record
memb displaymem(memb &b)
{
    fstream file;
    file.open("member.dat",ios::in | ios :: binary);
    while(file.read((char*)&b,sizeof(b)))
    {
        b.show();
    }
    
    file.close();
    
}
//searching in member record
memb searchmemberid(memb &b)
{
    fstream file;
    int k;
    int d;
    d = 1;
    cout<<"Enter Member ID : ";
    cin>>k;
    file.open("member.dat",ios::in | ios :: binary);
    while(file.read((char*)&b,sizeof(b)))
    {   d  = b.Searchmid(k);
        if (d==0)
        {   b.show();
            break;
        }
        else 
        {    
        d  = b.Searchmid(k);
        }
    }
    if (d==-1)
    {    cout<<"Record not found"<<endl;}
}
//Issue record 
void addissuerecord(issue &c,book &g,memb &e)
{   fstream file;
    fstream f,fo;
    int pos,pos2;
    int a,b,d,h;
    
    
    cout<<"Enter the Book ID ";
    cin>>a;
    cout<<"Enter the Member ID ";
    cin>>b;
    file.open("book.dat" , ios::in | ios_base :: binary);
    d = -1;
    while(file.read((char*)&g,sizeof(g)))
    { if (a == g.Bid)
      {  d = g.copies;
        pos = file.tellg();
        
        break;
    }
    
        
    }
    book b1(&g);
    file.close();
    if(d == -1)
    {    cout<<"RECORD NOT FOUND "<<endl;}
    f.open("member.dat" , ios::in | ios_base :: binary);
    h = -1;
    while(f.read((char*)&e,sizeof(e)))
    { if (b == e.memid)
    {    h = e.bissue;
        pos2 = f.tellg();
        break;
    }
        
    }
    memb m1(&e);
    
    f.close();
    if(h == -1)
    {    cout<<"RECORD NOT FOUND "<<endl;}
    if(h == 3 || d == 1)
        cout<<"Book cannot be Issued ";
    else
    { e.show();
    g.display();
        fo.open("issue.dat",ios::app | ios::binary);
        c.bookid = b1.Bid;
        c.memberid = m1.memid;
        c.bookid = b1.Bid;
        str_cmp(c.membname,m1.membername);
        
        str_cmp(c.membphone,m1.phno);
        
        str_cmp(c.bookname,b1.Bname);
        
        c.addiss();
        
        fo.write((char*)&c,sizeof(c));
        
        fo.close();
        
    
    }
}
issue displayret(issue &c)
{   fstream fo;
    fo.open("issue.dat",ios::in | ios::binary);
    while(fo.read((char*)&c,sizeof(c)))
    {
        c.show();
    }
    fo.close();
}