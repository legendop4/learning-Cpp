#include<iostream>
using namespace std;
int lastrem(int num);

int main()
{
  int arr[30],ch,i,res,rem;
  cout<<"Enter Size of The Array (1-30) : ";
  cin>>ch;
  for (i = 0;i<ch;i++)
  {
    cin>>arr[i];
  }
  
  cout<<"Number having first and last digit same are : ";
  for (i=0;i<ch;i++)
  {
    res = lastrem(arr[i]);
    rem = arr[i] % 10;
    if (res == rem)
    {
      cout<<arr[i]<<"\t";
    }
  }
  
  return 0;
}

int lastrem(int num)
{
  int rem;
  while (num>0)
  {
    rem = num % 10;
    num /= 10;
  }
  return rem;
}