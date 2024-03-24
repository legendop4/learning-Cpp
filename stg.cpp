#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str1[100];
    char str2[100];
    cin>>str1>>str2;
    int i,j;
    for (i = 0; str1[i]!='\0'; i++);
    for (j = 0; str2[j]!='\0'; j++);
    cout<<i<<" "<<j<<endl;
    cout<<str1<<str2<<endl;
    char temp = str2[0];
    str2[0]=str1[0];
    str1[0]= temp;
    cout<<str1<<" "<<str2<<endl;
    
}