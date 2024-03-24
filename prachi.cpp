// WAP to input a matrix and create an array of all distinct 
//elements from that matrix nd print the array
#include<iostream>
using namespace std;

int search(int n,int arr[],int k);

int k=0;
int main()
{
  int r,c,num;
  cout<<"Enter Number of Rows and Columns : ";
  cin>>r>>c;
  int a[r][c],i,j,arr[20];
  cout<<"Enter Matrix Elements : ";
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>a[i][j];
    }
  }
  cout<<"Entered Matrix is : "<<endl;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cout<<a[i][j]<<"\t";
    }
    cout<<"\n";
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        num=a[i][j];
      if(search(num,arr,k) != 1)
      {
        arr[k++]=num;
      }
    }
  }
  cout<<"Distinct Elements are : ";
  for(i=0;i<k;i++)
  {
    cout<<arr[i]<<"\t";
  }
  return 0;
}

int search(int n,int arr[],int k)
{
  for(int i=0;i<k;i++)
  {
    if(n== arr[i])
      return 1;
  }
  return 0;
}