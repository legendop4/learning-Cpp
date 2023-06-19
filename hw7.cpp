#include <iostream>
using namespace std;
//WAP TO find highest and smallest number
int main()
{
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
    cout<<"Enter First number :";
    cin>>num1;
    cout<<"Enter Second number :";
    cin>>num2;
    cout<<"Enter Third number :";
    cin>>num3;
    cout<<"Enter Fourth number :";
    cin>>num4;
    cout<<"Enter Fifth number :";
    cin>>num5;
    cout<<"Enter Sixth number :";
    cin>>num6;
    cout<<"Enter Seventh number :";
    cin>>num7;
    cout<<"Enter Eighth number :";
    cin>>num8;
    cout<<"Enter Ninth number :";
    cin>>num9;
    cout<<"Enter Tenth number :";
    cin>>num10;
    int i,j;
    if(num2>num1)
    {
        i = num1;
        j = num2;
    }
    else 
      i = num2;
      j = num1;
    
        if(num3>j)
        {
             j = num3;
        }
        else if(num4>j)
        {
            j = num4;
        }
        else if(num5>j)
        {
            j = num5;
        }
        else if(num6>j)
        {   
            j = num6;
        }
        else if(num7>j)
        {
            j = num7;
        }
        else if(num8>j)
        {
            j = num8;
        }
        else if(num9>j)
        {
            j = num9;
        }
        else if(num10>j)
        {
            j = num10;
        }
        if(num3<i)
        {
             i = num3;
        }
        else if(num4<i)
        {
            i = num4;
        }
        else if(num5<i)
        {
            i = num5;
        }
        else if(num6<i)
        {   
            i = num6;
        }
        else if(num7<i)
        {
            i = num7;
        }
        else if(num8<i)
        {
            i = num8;
        }
        else if(num9<j)
        {
            i = num9;
        }
        else if(num10<i)
        {
            i = num10;
        }
        

    cout<<"Highest number is "<<j<<" "<<"Lowest number is "<<i<<endl;
return 0;






}

