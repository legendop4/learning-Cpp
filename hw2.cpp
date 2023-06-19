#include <iostream.h>
using namespace std;
int main()
{
    int len,bd,per,cst,total;
    cout<<"Enter Lenght of Farm (in m): ";
    cin>>len;
    cout<<"Enter Breadth of Farm (in m): ";
    cin>>bd;
    per = 2*(len+bd);
    cout<<"Enter Rate of fencing (in rupee): ";
    cin>>cst;
    total = cst * per;
    cout<<"Total cost of fencing entire farm will be (in rupee) :"<<total<<endl;
    return 0;
}