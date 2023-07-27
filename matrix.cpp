#include <iostream>
using namespace std;
//Creating class matrix and doing basic functions like input , display , transpose , diagonal elements and row elem sum;
class Matrix
{
    int elem;
public:
    void input();
    void show();
    void transpose();
    void diag(int k,int o);
    int sum(int p);
};
int main()
{   int i,j;
    cout<<"Enter the number of row and columns of matrix :";
    cin>>i>>j;
    Matrix mat[i][j];
    for(int k=0;k<i;k++)
    {
        for(int o=0;o<j;o++)
        {
            mat[k][o].input();
        }
    }
    cout<<"Matrix Created is : "<<endl;
    for(int k=0;k<i;k++)
    {
        for(int o=0;o<j;o++)
        {
            mat[k][o].show();
            
        }
        cout<<endl;
    }
    cout<<"Tranpose of a Matrix"<<endl;
    for(int k=0;k<j;k++)
    {
        for(int o=0;o<i;o++)
        {
            mat[o][k].transpose();
            
        }
        cout<<endl;
    }
    cout<<"Printing only diagonal elements of Matrix "<<endl;
    for(int k=0;k<i;k++)
    {
        for(int o=0;o<j;o++)
        {
            mat[k][o].diag(k,o);
        }
        cout<<endl;
    }
    cout<<"finding sum of elements of a row "<<endl;
    for(int k=0;k<i;k++)
    {   int p=0;
        for(int o=0;o<j;o++)
        {   
            p = mat[k][o].sum(p);
        }
        cout<<p<<endl;
        
    }

}
void Matrix::input()
{
    cout<<"Enter the element ";
    cin>>elem;
}
void Matrix::show()
{
    cout<<elem<<"\t";
   
}
void Matrix::transpose()
{
    cout<<elem<<"\t";
   
}
void Matrix::diag(int k,int o)
{   if (k == o)
        cout<<elem<<"\t";
    else 
        cout<<" "<<"\t";
}
int Matrix::sum(int p)
{   p = p + elem;
    return p;
}