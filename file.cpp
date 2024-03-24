#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("sample.txt");
    fout<<"Hello "<<endl;
    fout.close();
    char txt[80];
    ifstream fin;
    fin.open("sample.txt");
    while(fin.getline(txt,80))
    {
        cout<<txt<<endl;
    }
    fin.close();
    
}