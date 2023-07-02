#include <iostream>
using namespace std;
// Using function to shift the array order by 1 place;

void shift(int *num, unsigned int i )
{   int temp = num[0];
    int a;
    for(a=0;a<i-1;a++)
    {
        num[a] = num[a+1];
    }
    num[i-1] = temp;
}

int main()
{
    int i;
    
    cout<<"Enter the size of array :";
    cin>>i;
    int num[i],a;
    cout<<"Enter the array :";
    for(a=0;a<i;a++)
    {
        cin>>num[a];
    }
    shift( num , i);
    cout<<"Array after shifting is ";
    for(a=0;a<i;a++)
    {
        cout<<num[a]<<endl;
    }
}
