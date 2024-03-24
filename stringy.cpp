#include <iostream>
using namespace std;

class Stringy
{
    char arr[100];
public:
    friend istream& operator >>(istream &y,Stringy &x);
   
    friend ostream& operator <<(ostream &y,Stringy &x);
    
    
    Stringy operator +(Stringy &k)
    {   Stringy s;
        int d , e;
        for ( d = 0; arr[d]!='\0'; d++);
        {
            s.arr[d] = arr[d];
        }
        for ( e = 0; k.arr[e]!='\0'; e++);
        {
            s.arr[d++] = k.arr[e];
            
        }
        s.arr[d] = '\0';
        return s;
    }
    /*bool operator ==(Stringy &i)
    {   int j = 0;
        int k =0;
        int d , e;
        for ( d = 0; arr[d]!='\0'; d++);
        for ( e = 0; i.arr[e]!='\0'; e++);
        if(d == e)
        {   for(int j= 0;j<d;j++)
            {   if(arr[j] == i.arr[j])
                    k++;
            }
            if(k == d)
                return true;
            else 
                return false;
        }   
        else 
            return false;
    }
    Stringy reverse();
    bool ispalin(Stringy &i);
    Stringy operator * (int x)
    {
        for(int i = 0; i<x;i++)
            cout<<arr<<endl;
    }
    Stringy(){}
    Stringy(Stringy &i)
    {   int d,j,k;
        for ( d = 0; i.arr[d]!='\0'; d++);
        
        char c;
        for(int j = 0;j<d;j++)
        {   
            c = i.arr[j];
            arr[j] = c;
        }
    
    }
    Stringy upper()
    {   int d;
        
        for ( d = 0; arr[d]!='\0'; d++);
        Stringy e;
        char f;
        for(int i = 0;i<d;i++)
        {   f = arr[i];
            if(islower(f)) 
            {    f=toupper(f);
            }
            e.arr[i] = f;
        }
        e.show();
    }*/
     
};
 istream& operator >>(istream &y ,Stringy &x)
    {   cout<<"Enter String ";
        cin.getline(x.arr,200);
        return y;
    }
 ostream& operator <<(ostream &y,Stringy &x)
    {   cout<<x.arr<<endl;
        return y;
    }
int main()
{
    Stringy a,b,s;
    cin>>a;
    cout<<a;
    cin>>b;
    cout<<b;
    s = a+b;
    cout<<s;
    
    /*/if(a==b)
    {
        cout<<"Both are Same String "<<endl;
    }
    else 
        cout<<"Not"<<endl;
    Stringy i;
    i = a.reverse();
    i.show();
    Stringy e(a);
    Stringy f(a);
    a.show();
    e.show();
    f.show();
    if(e.ispalin(f))
        cout<<"It is pallindrome"<<endl;
    else 
        cout<<"not"<<endl;
    /*int x;
    cout<<endl;
    cout<<"Enter how many Times you want to repeat the string "<<endl;
    cin>>x;
    a*x;
    b.upper();*/
}


/*Stringy Stringy::reverse()
{   Stringy k;
    int d;
    for ( d = 0; arr[d]!='\0'; d++);
    int i = 0;
    char c;
    cout<<d;
    for(int i = 0;i<d;i++)
    {
        c = arr[i];
        k.arr[d-i-1]=c;
    }
    return k;
}
bool Stringy::ispalin(Stringy &i)
{   
    Stringy k;
    
    k = i.reverse();
    
    if(k == i)
        return true;
    else
        return false;
}
*/