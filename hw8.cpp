#include <iostream>
using namespace std;
// WAP find total number of vowels in 10 entered alphabets
int main()
{
    char alp1,alp2,alp3,alp4,alp5,alp6,alp7,alp8,alp9,alp10;
    cout<<"Enter First alphabet :";
    cin>>alp1;
    cout<<"Enter Second alphabet :";
    cin>>alp2;
    cout<<"Enter Third alphabet :";
    cin>>alp3;
    cout<<"Enter Fourth alphabet :";
    cin>>alp4;
    cout<<"Enter Fifth alphabet :";
    cin>>alp5;
    cout<<"Enter Sixth alphabet :";
    cin>>alp6;
    cout<<"Enter Seventh alphabet :";
    cin>>alp7;
    cout<<"Enter Eighth alphabet :";
    cin>>alp8;
    cout<<"Enter Ninth alphabet :";
    cin>>alp9;
    cout<<"Enter Tenth alphabet :";
    cin>>alp10;
    int i;
    
    
    
    
    if (alp1 == 'a'||alp1 == 'e'||alp1 == 'i'||alp1 == 'o'||alp1 == 'u')
        {i=0;
        i=i+1;}
    else 
        {i=i+0;}
    if (alp2 == 'a'||alp2 == 'e'||alp2 == 'i'||alp2 == 'o'||alp2 == 'u')
        {i=i+1;}
    else 
        {i=i+0;}
    if (alp3 == 'a'||alp3 == 'e'||alp3 == 'i'||alp3 == 'o'||alp3 == 'u')
        {i=i+1;}
    else 
        {i=i+0;}
    if (alp4 == 'a'||alp4 =='e'||alp4 =='i'||alp4 =='o'||alp4 =='u')
        {i=i+1;}
    else 
        {i=i+0;}
    if (alp5 == 'a'||alp5 == 'e'||alp5 == 'i'||alp5 == 'o'||alp5 == 'u')
        {i=i+1;}
    else 
        {i=i+0;}
    if (alp6 == 'a'||alp6 == 'e'||alp6 == 'i'||alp6 == 'o'||alp6 == 'u')
        {i=i+1;}
    else 
        {i=i+0;}
    if (alp7 == 'a'||alp7 == 'e'||alp7 == 'i'||alp7 == 'o'||alp7 == 'u')
        {i=i+1;}
    else 
        {i=i+0;}
    if (alp8 == 'a'||alp8 == 'e'||alp8 == 'i'||alp8 == 'o'||alp8 == 'u')
        {i=i+1;}
    else 
        {i=i+0;}
    if (alp9 == 'a'||alp9 == 'e'||alp9 == 'i'||alp9 == 'o'||alp9 == 'u')
        {i=i+1;}
    else 
         {i=i+0;}
    if (alp10 == 'a'||alp10 == 'e'||alp10 == 'i'||alp10 == 'o'||alp10 == 'u')
        {i=i+1;}
    else 
        {i=i+0;}
    
    cout<<"total number of alphabets are: "<<i<<endl;

    return 0;
}