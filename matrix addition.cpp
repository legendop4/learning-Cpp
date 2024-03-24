#include <iostream>
using namespace std;
//Creating class matrix creating sum of 2 different matrix
class Matrix
{   int row,col;
    int elem[10][10];
public:
    
    void input();
    void show();
    void sum(Matrix *m,Matrix *r);
};
int main()
{  
    Matrix mat,rat;
    cout<<"Create matrix A:"<<endl;
    mat.input();
    cout<<"Create matrix B:"<<endl;
    rat.input();
    cout<<"Matrix Created are : "<<endl;
    cout<<"Matrix A:"<<endl;
    mat.show();
    cout<<"Matrix B:"<<endl;
    rat.show();
    cout<<"Sum of matrices if possible is "<<endl;
    Matrix kat;
    kat.sum(&mat,&rat);
    kat.show();
}
void Matrix::input()
{   cout<<"Enter no of rows and columns :(row and col should be less than 10)";
    cin>>row>>col;
    for(int k=0;k<row;k++)
    {
        for(int o=0;o<col;o++)
        {
            cout<<"Enter the element ";
            cin>>elem[k][o];
        }
    }

       
}
void Matrix::show()
{   for(int k=0;k<row;k++)
    {
        for(int o=0;o<col;o++)
        {
            cout<<elem[k][o]<<"\t";
            
        }
        cout<<endl;
    }
}
void Matrix::sum(Matrix *m, Matrix *r)
{
    if (r->row== m->row && r->col == m->col)
    {
        row = r->row;
        col = r-> col;
        for(int k=0;k<row;k++)
        {
            for(int o=0;o<col;o++)
            {
                elem[k][o] = r->elem[k][o] + m->elem[k][o];
            }   
        }
    }
    else
        cout<<"row and columns of Matrix a and b are not equal hence not possible to find the sum "<<endl;
}
