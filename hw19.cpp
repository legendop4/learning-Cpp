#include <iostream>
using namespace std;
// TO Store Even and Odd values of array in 2 seprate arrays and print the desired;
int main()
{
    int i;
    cout<<"Enter the size of array : ";
    cin>>i;
    int num[i],n;
    cout<<"Enter the elements of array :";
    for(n=0;n<i;n++)
    {
        cin>>num[n];
    }
    int j,k,l,c,b;
    k = 0;
    l = 0;
    b = 0;
    c = 0;
    int even[k];
    int odd[c];
    for (n=0;n<i;n++)
    {
        j = num[n];
        if(j % 2 == 0)
        {
            even[l] = j;
            l++;
            k++;
        }
        else
        {
            odd[b] = j;
            b++;
            c++;
        }
       
    }
    

    
    cout<<"Even numbers from the array are :";
    for(l=0;l<k;l++)
    {
        cout<<even[l]<<"\t";
    }
    
   
    cout<<"Odd numbers from the array are :";
    for(b=0;b<c;b++)
    {
        cout<<odd[b]<<"\t";
    }
    
    
}
