#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("story.txt",ios::out);
    char txt[100];
    cout<<"Enter line : ";
    for(int i = 0;i<5;i++)
    {
        cin.getline(txt,100);
        fout<<txt<<endl;
    }
    fout.close();
  
    ifstream fin;
    fin.open("story.txt",ios::in);
    while(fin.getline(txt,100))
    {
        cout<<txt<<endl;
    }
    fin.close();
    char x[100];
    fin.open("story.txt",ios::in);
    fout.open("story.txt",ios::app);
    
    while(fin.getline(txt,100))
        {   int i; 
            for(i = 0;txt[i]!='\0';i++)
            {
                if(txt[i]>='a' && txt[i]<='z')
                {
                    txt[i] = txt[i] - 32;
                    
                }
                else
                {   txt[i] = txt[i];
                
                }
            
            }
            for(i = 0;txt[i]!= '\0';i++)
            {
                fout<<txt[i];
            }
            fout<<endl;
           
        }
        
    
    
    fout.close();
   while(fin.getline(txt,100))
    {
        cout<<txt<<endl;
    }
    fin.close();
}