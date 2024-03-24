#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number of stars you want : ";
    cin>>a;
    for(int i = 0; i<a;i++)
    {
        if(i == 0 || i == a-1)
        {
            for(int j = 0;j<a;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else 
        {   cout<<"*";
            for(int j = 1;j<a-1;j++)
            {
                cout<<" ";
            }
            cout<<"*"<<endl;
        }
    }
}