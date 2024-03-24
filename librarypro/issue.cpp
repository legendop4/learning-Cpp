#include <iostream>
#include <fstream>
class memb;
class book;
void str_cmp(char a[100], char b[100]);
class issue
{
    protected:
    int issdat;
    int retdat;
    char membname[60];
    char membphone[12];
    int bookid;
    int memberid;
    char bookname[60];

    public:
    friend  void str_cmp(char a[100], char b[100]);
        void addiss()
        {
            cout<<"Enter the Date of Issue : ";
            cin>>issdat;
            cin.ignore(1,'\n');
            cout<<"Enter the Date of return : ";
            cin>>retdat;
        }
        void show()
        {
            cout<<memberid<<"\t"<<membname<<"\t"<<membphone<<endl;
            cout<<bookid<<"\t"<<bookname<<"\t"<<issdat<<endl;
        }
        friend class book;
        friend class memb;
        friend  void addissuerecord(issue &c,book &g,memb &e);
        
};