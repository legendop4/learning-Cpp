#include<bits/stdc++.h>

using namespace std;
#include<bits/stdc++.h>

using namespace std;
//Implement the class Box
class Box
{
    int l,b,h;
public :
    Box()
    {
       l = b= h=0; 
    }
    Box (int x,int y , int z)
    {
        l = x;
        b = y;
        h = z;
    }
    Box(Box &x)
    {
        l = x.l;
        b = x.b;
        h = x.h;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        long long vol;
        vol = l*b*h;
        return vol;
    }
    bool   operator <(Box x)
    {
        if( l <x.l )
        {
            return true;
        }
        else if(l == x.l && b<x.b)
        {
            return true;
        }
        else if(b == x.b && l == x.l && h<x.h)
        {
            return true;
        }
        else {
            return false;
        }
    }
    friend ostream& operator <<(ostream &y,Box &x);
}; 
ostream& operator <<(ostream &y, Box &x)
{
    cout<<x.l<<" "<<x.b<<" "<<x.h;
    
    return y;
} 
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)




void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}