#include <iostream>
using namespace std;
#include <string>
int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    int hnd;
    int rem1,rem,orem;
    string tens,ones;
    string hnd1;
    hnd = num/100;
    if(hnd==1)
    hnd1 = "One";
    else if (hnd==2)
    hnd1 = "Two";
    else if (hnd==3)
    hnd1 = "Three";
    else if (hnd==4)
    hnd1 = "Four";
    else if (hnd==5)
    hnd1 = "Five";
    else if (hnd==6)
    hnd1 = "Six";
    else if (hnd==7)
    hnd1 = "Seven";
    else if (hnd==8)
    hnd1 = "Eight";
    else if (hnd==9)
    hnd1 = "Nine";
    else
    cout<<"The number isnt Three digit"<<endl;
    
    
    
    rem = num - (hnd*100);
    
    if (rem>=20)
    {   rem1 = rem/10;
        if (rem1==2)
        tens= "Twenty";
        else if (rem1==3)
        tens= "Thirty";
        else if (rem1==4)
        tens= "Forty";
        else if (rem1==5)
        tens= "Fifty";
        else if (rem1==6)
        tens= "Sixty";
        else if (rem1==7)
        tens= "Seventy";
        else if (rem1==8)
        tens= "Eighty";
        else if(rem1==9)
        tens= "Ninty";
        orem = rem - (rem1*10);
        if (orem==1)
        ones="One";
        else if (orem==2)
        ones="Two";
        else if (orem==3)
        ones="Three";
        else if (orem==4)
        ones="Four";
        else if (orem==5)
        ones="Five";
        else if (orem==6)
        ones="Six";
        else if (orem==7)
        ones="Seven";
        else if (orem==8)
        ones="Eight";
        else if (orem==9)
        ones="Nine";

        
    }
    else
    {
        if (rem==1)
        ones="One";
        else if (rem==2)
        ones="Two";
        else if (rem==3)
        ones="Three";
        else if (rem==4)
        ones="Four";
        else if (rem==5)
        ones="Five";
        else if (rem==6)
        ones="Six";
        else if (rem==7)
        ones="Seven";
        else if (rem==8)
        ones="Eight";
        else if (rem==9)
        ones="Nine";
        else if (rem==10)
        ones="Ten";
        else if (rem==11)
        ones="Eleven";
        else if (rem==12)
        ones="Twelve";
        else if (rem==13)
        ones="Thirteen";
        else if (rem==14)
        ones="Fourteen";
        else if (rem==15)
        ones="Fifteen";
        else if (rem==16)
        ones="Sixteen";
        else if (rem==17)
        ones="Seventeen";
        else if (rem==18)
        ones="Eighteen";
        else if (rem==19)
        ones="Nineteen";
    }
    cout<<"The Number "<<num<<" in Words is "<<hnd1<<" Hundred"<<tens<<" "<<ones<<endl; 

}