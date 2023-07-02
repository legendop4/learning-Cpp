#include <iostream>
using namespace std;
// Creating a Function to subtract two array's corresponding value and placing it in third

void subtract(int *num1,int *num2,int *num3, unsigned int i)
{
    int a;
    for (a = 0; a < i; a++)
    {
        if(num2[a]>num1[a])
        {
            num3[a] = num2[a] - num1[a];
        }
        else
        {
            num3[a] = num1[a] - num2[a];
        }
    }
}


int main()
{
    int i;
    cout<<"Enter the size of arrays";
    cin>>i;
    int num1[i],num2[i],num3[i];
    int a;
    cout<<"Enter the first array ";
    for (a=0;a<i;a++)
    {
        cin>>num1[a];
    }
    cout<<"Enter the Second array ";
    for (a=0;a<i;a++)
    {
        cin>>num2[a];
    }
    subtract(num1,num2,num3,i);
    cout<<"Third array is :";
    for(a=0;a<i;a++)
    {
        cout<<num3[a]<<endl;
    }
}
