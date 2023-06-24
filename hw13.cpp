#include <iostream>
using namespace std;
// Reverse order of array of  given number

int main()
{
    int i;
    cout<<"Enter the Order of array You want to create ";
    cin>>i;
    int num[i],a;
    cout<<"Enter the array ";
    //Enterting the array
    for(a=0;a<i;a++)
    {
        cin>>num[a];
    }
    int k;
    //Reversing order
    for(a=0 ,k = i-1; (a <= i/2), (k > i/2) ; a++,k--)
    {  
        int temp = num[a];
        num[a] = num[k];
        num[k] = temp;
            
    }
        
    //printing reverse order
    cout<<"Reverse order is : "<<endl;
    for(a=0;a<i;a++)
    {
        cout<<num[a]<<endl;
    }
    
    return 0;
}