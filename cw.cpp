#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter no. of days ";
    cin>>a;
    int year,month,day;
    year = a/365;
    a = a - (year * 365);
    month = a /30;
    a = a - (month * 30);
    day = a;
    cout<<year<<" YEARS "<<month<<" MONTHS "<<day<<"DAYS ";
}