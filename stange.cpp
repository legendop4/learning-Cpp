#include <iostream>
using namespace std;
//Creating a class String and performing various functions like lower,upper ,reverse,CharAt,Substring,Instr, ispalin
//,overloading of cin and cout , operator overloading of == + & toggle
class Str
{
    char arr[200];
public:
    friend istream& operator >>(istream &y, Str &x);
    friend ostream& operator <<(ostream &y,Str &x);
    Str operator + (Str &x)
    {
        Str res;
        int i,j;
        for(i = 0;arr[i]!='\0';i++ )
        {
            res.arr[i]=arr[i];
        }
        
        for(j = 0; arr[j]!='\0';j++)
        {
            res.arr[i++] = x.arr[j];
        }
        res.arr[i]='\0';
        return res;
    }
    bool operator == (Str &i)
    {
        int j = 0;
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
    Str reverse()
    {
        int i,j;
        int k = 0;
        Str res;
        for(i = 0; arr[i]!='\0';i++);
        for(j = i-1;j>-1;j--)
        {
            res.arr[k++] = arr[j];
        }
        res.arr[k]='\0';
        return res;
    }
    bool ispalin()
    {   Str k,d;
        int i ;
        
        for(i = 0;arr[i]!='\0';i++);
        for(int j = 0 ; j < i;j++)
        {
            k.arr[j] = arr[j];
        }
        
        
        d = k.reverse();
       
        
        if (k == d)
            return true;
        else 
            return false;
    }
    
    Str toggle()
    {
        Str res;
        int k;
        for(k=0;arr[k]!='\0';k++);
        for(int i = 0; i < k ; i++)
        {
            if(arr[i]>='a' && arr[i]<='z')
            {
                res.arr[i] = arr[i]-32;
            }
            else if(arr[i]>='A' && arr[i]<='z')
            {
                res.arr[i] = arr[i]+32;
            }
            
        }
        res.arr[k] = '\0';
        return res;
    }
    Str upper()
    {
        Str res;
        int k;
        for(k=0;arr[k]!='\0';k++);
        for(int i = 0; i < k ; i++)
        {
            if(arr[i]>='a' && arr[i]<='z')
            {
                res.arr[i] = arr[i]-32;
            }
            else if(arr[i]>='A' && arr[i]<='z')
            {
                res.arr[i] = arr[i];
            }
            
        }
        res.arr[k] = '\0';
        return res;
    }
    Str lower()
    {
        Str res;
        int k;
        for(k=0;arr[k]!='\0';k++);
        for(int i = 0; i < k ; i++)
        {
            if(arr[i]>='a' && arr[i]<='z')
            {
                res.arr[i] = arr[i];
            }
            else if(arr[i]>='A' && arr[i]<='Z')
            {
                res.arr[i] = arr[i]+32;
            }
            
        }
        res.arr[k] = '\0';
        return res;
    }
    void setCharAt(char &y , int &x)
    {
        arr[x] = y;
    }
    void substring(int &x,int &y)
    {   Str res;
        int i,j;
       
        for(j=0;arr[j] != '\0';j++);
        if(x>=0 && y<=j)
        {
            j = 0;
            for(i = x; i<y;i++)
            {
                res.arr[j++] = arr[i];
            }
        }
        res.arr[j++] = '\0';
        cout<<res;
    }
    int CharAt(char &x)
    {
        int i;
        int w = -1;
        int pos;
        for(i = 0 ; arr[i]!='\0';i++);
        if(x >='a' && x <='z')
        {
            x = x;
        }
        else if(x>='A' && x<='Z')
        {
            x = x+32;
        }
        
        for(int k = 0;k<i;k++)
        {
            if(arr[k] == x ) 
            {
                pos = k;
                
            }
        }
        return pos;
        

    }
    int instr(Str &x)
    {
        int i,j; 
        int h = -1;
        int pos;
        for(i = 0 ; arr[i]!='\0';i++);
        for(int k = 0;k<i;k++)
        {
            if(arr[k]== x.arr[0]) 
            {
                pos = k;
                for(j = 0;x.arr[j]!='\0';j++)
                {
                    if(x.arr[j]==arr[k])
                    {
                        k++;
                    }
                    else 
                    {    break;
                    }
                }
            }
            else 
            {
                pos = h;
            }
        }  
        return pos;  
    }
};
istream& operator >> (istream &y , Str &x)
{   cout<<"Enter the array ";
    cin.getline(x.arr,200);
    return y;
}
ostream& operator <<(ostream &y, Str &x)
{
    cout<<x.arr<<endl;
    return y;
}
int main ()
{
    Str a,b,c,d;
    cin>>a;
    cin>>b;
    cout<<a;
    cout<<b;
    cout<<"Concatenated String is ";
    c = a + b;
    cout<<c;
    
    cout<<"Reverse of String1 is ";
    d = a.reverse();
    cout<<d;
    cout<<"Reverse of String is ";
    d = b.reverse();
    cout<<d;
    cout<<"Checking if Strings are Same or not "<<endl;
    if(a == b)
        cout<<"Strings are same"<<endl;
    else 
        cout<<"Strings are different "<<endl;
    cout<<"checking if Strings are pallindrome "<<endl;
    if(a.ispalin())
        cout<<"String 1 is palindrome "<<endl;
    else 
        cout<<"String 1 is not a Palindrome"<<endl;
    if(b.ispalin())
        cout<<"String 2 is palindrome"<<endl;
    else 
        cout<<"String 2 is not a Palindrome"<<endl;

    cout<<"Toggle function "<<endl;
    d  =  a.toggle();
    cout<<d;
    d  =  b.toggle();
    cout<<d;
    cout<<"Upper function "<<endl;
    d = a.upper();
    cout<<d;
    d = b.upper();
    cout<<d;
    cout<<"lower function "<<endl;
    d = a.lower();
    cout<<d;
    d = b.lower();
    cout<<d;
    
    Str o;
    cin>>o;
    int w;
    w = a.instr(o);
    cout<<"The position of String "<<o<<" is "<<w<<endl;
    cout<<"Changing specific character at a position "<<endl;
    int x;
    cout<<"Enter the position of Character you want to change (counting from 0) :";
    cin>>x;
    char y;
    cout<<"Enter the Character you want to replace it with :"; 
    cin>>y;
    a.setCharAt(y,x);
    cout<<"Final Result after changing "<<endl;
    cout<<a;
    int j,i;
    cout<<"Enter the Starting position of substring and ending position of substring from a string (counting from 0) :";
    cin>>j>>i;
    Str substr;
    a.substring(j,i);
   
    d = a.lower();
    cout<<"Char position finding "<<endl;
    int k;
    char u;
    cout<<"Enter the Char you want to find in String :";
    cin>>u;
    k = d.CharAt(u);
    cout<<"The Position of Char "<<u<<" is "<<k<<endl;
   
    
    


}