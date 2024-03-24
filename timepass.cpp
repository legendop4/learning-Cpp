#include <iostream>
using namespace std;

void swap(int &a,int &b);

int main()
{
   int a;
   int b;
   cin>>a>>b;
   cout<<"A = "<<a<<" "<<"B = "<<b<<endl;
   swap(a,b);
   cout<<"A = "<<a<<" "<<"B = "<<b<<endl;
}
void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

}