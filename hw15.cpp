#include <iostream>
using namespace std;
//Finding highest number in a entered array using function

int greatest(int ,int);

int main()
{   int i;
    cout<<"Enter size of array ";
    cin>>i;
    int a,num[i],c,d;
    cout<<"Enter the array"<<endl;
    for (a = 0 ; a<i; a++)
    {
        cin>>num[a];
    }
    c = num[0];
    int e;
    for (a = 0; a<i-1;a++)
    {   
        
        d = num[a+1];
        e = greatest(c,d);
        c = e;
    }
    cout<<"greatest integer in the array is : "<<greatest(c,d)<<endl;
}
int greatest(int c , int d)
{
    if (c>d)
    {return c;}
    else 
    {
        return d;
    }
}
