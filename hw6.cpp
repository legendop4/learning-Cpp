#include <iostream>
using namespace std;
//WAP to print all possible combination possible through three digit

int main()
{
    int one,two,three;
    cout<<"Enter First Digit ";
    cin>>one;
    cout<<"Enter Second Digit ";
    cin>>two;
    cout<<"Enter Third Digit ";
    cin>>three;
    int com1,com2,com3,com4,com5,com6;
    com1 = one * 100 + two * 10 + three;
    com2 = three * 100 + two * 10 + one;
    com3 = one * 100 + three * 10 + two;
    com4 = three * 100 + one * 10 + two;
    com5 = two * 100 + one * 10 + three;
    com6 = two * 100 + three * 10 + one;
    cout<<"Possible combinations of given three digits are: "<<com1<<" "<<com2<<" "<<com3<<" "<<com4<<" "<<com5<<" "<<com6<<endl;
    return 0;


}