#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    char str[10][20]={"C++","python","php","java","oracle","sql","jsp","asp","javascript","html"};
    char str1[10];
    int l = 0;
    char res[l][20];
    for (int i = 0; i < 10; i++)
    {   int count = 0;
        strcpy(str1,str[i]);
        for(int k = 0;str1[k];k++)
        {
            count++;
        }
        if(count<=3)
        {
            strcpy(res[l],str1);
            l++;
        }
        
    }
    for(int i =0;i<l;i++)
    {
        cout<<res[i]<<endl;
    }
    return 0;
}