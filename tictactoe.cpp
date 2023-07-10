#include <iostream>
#include <cstdlib>
using namespace std;
//TIC TAC TOE 
int k,m,a,b;
int rand(void);
int main()
{   
  
    int i,j;
    char tic[3][3];
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
        tic[i][j]='-';
    }
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
        {cout<<tic[i][j]<<'\t';}
        cout<<endl;
    }
    
    char name[20];
    cout<<"\t Game of Tic Tac Toe"<<endl;
    cout<<"Enter the Name of player ";
    cin>>name;
    cout<<"Computer v/s "<<name<<endl;
    int p = 9;
    for(int c= 0;c<p;c++)
    {   cout<<"Enter the number of row and column you want to put your X in :"<<endl;
        
        cin>>k>>m;
        if (k>2 || m >2)
        {    cin>>k>>m; }
        int s,d;
        s = k;
        d = m;
        while(tic[s][d]!='X')
        {
            if (tic[s][d]=='-')
            {
                tic[s][d]='X';
            }
            else if (tic[s][d]=='O')
            {
                cout<<"Already occupied"<<endl;
                cin>>s;
                cout<<endl;
                cin>>d;
                cout<<endl;
            }
        }
        for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
           { cout<<tic[i][j]<<"\t";}
            cout<<endl;
        }
        
        if (tic[0][0]==tic[1][0]&& tic[1][0]==tic[2][0])
        {   
            if(tic[0][0]=='X')
            {
                cout<<name<<" Wins"<<endl;
                break;
            }
            else if(tic[0][0]=='O')
            {
                cout<<"Computer Wins"<<endl;
                break;
            }

        }
        else if (tic[0][1]==tic[1][1]&& tic[1][1]==tic[2][1])
        {   
        
            if(tic[0][1]=='X')
            {
                cout<<name<<"  Wins"<<endl;
                break;
            }
            else if(tic[0][1]=='O')
            {
                cout<<"Computer Wins"<<endl;
                break;
            }
        }
        else if (tic[0][2]==tic[1][2]&& tic[1][2]==tic[2][2])
        {   
            if(tic[0][2]=='X')
            {
                cout<<name<<" Wins"<<endl;
                break;
            }
            else if(tic[0][2]=='O')
            {
                cout<<"Computer Wins"<<endl;
                break;
            }
        }
        else if (tic[0][0]==tic[0][1]&& tic[0][1]==tic[0][2])
        {   
            if(tic[0][0]=='X')
            {
                cout<<name<<" Wins"<<endl;
                break;
            }
            else if(tic[0][0]=='O')
            {
                cout<<"Computer Wins"<<endl;
                break;
            }
        }
        else if (tic[1][0]==tic[1][1]&& tic[1][1]==tic[1][2])
        {   
            if(tic[1][0]=='X')
            {
                cout<<name<<" Wins"<<endl;
                break;
            }
            else if(tic[1][0]=='O')
            {
                cout<<"Computer Wins"<<endl;
                break;
            }
        }
        else if (tic[2][0]==tic[2][1]&& tic[2][1]==tic[2][2])
        {   
            if(tic[2][0]=='X')
            {
                cout<<name<<" Wins"<<endl;
                break;
            }
            else if(tic[2][0]=='O')
            {
                cout<<"Computer Wins"<<endl;
                break;
            }
        }
        else if (tic[0][0]==tic[1][1]&& tic[1][1]==tic[2][2])
        {   
            if(tic[0][0]=='X')
            {
                cout<<name<<" Wins"<<endl;
                break;
            }
            else if(tic[0][0]=='O')
            {
                cout<<"Computer Wins"<<endl;
                break;
            }
        }
        else if (tic[0][2]==tic[1][1]&& tic[1][1]==tic[2][0])
        {   
            if(tic[0][2]=='X')
            {
                cout<<name<<" Wins"<<endl;
                break;
            }
            else if(tic[0][2]=='O')
            {
                cout<<"Computer Wins"<<endl;
                break;
            }
        }
        
        int t = 3;
        a = rand() % 3;
        int x = a;
        b = rand() % 3;
        int y = b;
        
        while(tic[x][y]!='O')
        {   if(tic[x][y]=='X')
            {   a = rand() % 3;
                x = a;
                b = rand() % 3;
                y = b;
                
            }
            else if(tic[x][y]=='-')
            {
                tic[x][y]='O';
                cout<<x<<y<<endl;
            
            } 
           
        }
        
         for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
           { cout<<tic[i][j]<<"\t";}
            cout<<endl;
        }
    }

}


