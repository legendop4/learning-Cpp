#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
void addnode();
void addnodebeg();
void addatpos();
void display();
Node *start;
int main()
{
    start = NULL;
    do
    {
        cout<<"Press 1 - For add a node at end "<<endl;
        cout<<"Press 2 - For adding a node at beginning"<<endl;
        cout<<"Press 3 - Display "<<endl;
        cout<<"Press 4 - Add at position "<<endl;
        cout<<"Press 10 - Exit "<<endl;
        int ch,num,p;
        cout<<"Enter choice "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                addnode();
                break;
            case 2:
                addnodebeg();
                break;
            case 3:
                display();
                break;
            case 4:
                addatpos();
                break;
            case 10:
                exit(0);
        }
    } while (1);
    return 0;
}
void addnode()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    Node *ptr,*temp;
    temp = new Node;
    temp->data = num;
    temp->next = NULL;
    if(start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
    
        ptr->next = temp;
    }
}
void display()
{
    Node *ptr;
    
    if(start == NULL)
        cout<<"List is Empty"<<endl;
    else 
    {
        ptr = start;
        while(ptr != NULL)
        {
            cout<<ptr->data<<endl;
            ptr = ptr->next;
        }
    }
}
void addnodebeg()
{   int num;
    cout<<"Enter the number :";
    cin>>num;
    Node *temp,*ptr;
    temp = new Node;
    temp->data = num;
    temp->next = NULL;
    if(start == NULL)
        start = temp;
    else
    {   temp->next = start;
        start = temp;
    }    
}
void addatpos()
{
    int num,pos;
    cout<<"Enter the position : ";
    cin>>pos;
    cout<<"Enter the Number ";
    cin>>num;
    Node *ptr,*temp;
    ptr = start;
    for(int i = 0; i<pos-2;i++)
    {   if(ptr->next == NULL)
        {   cout<<"INVALID POSITION"<<endl;
            return;
        }
        ptr = ptr->next;

    }
    temp = new Node;
    temp->data = num;
    temp->next = ptr->next;
    ptr->next = temp;
}