#include <iostream>
using namespace std;
//Enter an array and print only with last and first digit same;
int digit(int num);
int main()
{
    int i;
    cout<<"Enter the size of array ";
    cin>>i;
    int num[i],a;
    cout<<"Enter the elements of array :";
    for(a=0;a<i;a++)
    {
        cin>>num[a];
    }
    int b,c,d,e;
    for (a=0;a<i;a++)
    {   
        b = digit(num[a]);
        c = num[a] % 10;
        if(c == b )
        {
            cout<<num[a]<<"\t";
        }
       
    }
    return 0;
}
int digit(int num)
{   int rem;
    while (num>0)
    {
        rem = num % 10;
        num /= 10;
    }
    return rem;
}