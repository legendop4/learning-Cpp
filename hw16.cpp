#include <iostream>
using namespace std;
// sorting a array

int main()
{
    int i;
    cout<<"size of array : ";
    cin>>i;
    int num[i],a;
    cout<<"Enter the array :";
    for (a=0;a<i;a++)
    {
        cin>>num[a];
    }
    int j,k;
    for (j = 0 ; j < i - 1; j++)
    {   for(k=j+1 ; k < i; k++)
        {   if(num[j]>num[k])
            {
                int temp = num[k];
                num[k] = num[j];
                num[j]  = temp;
            }
        }
    }
    cout<<"sorted array is :";
    for(a=0;a<i;a++)
    {
        cout<<num[a]<<endl;
    }
}