//write a program to implement stack using linked list and perform the push and pop operations on it.
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node* top=NULL;
void push(int val)
{
    struct Node* newnode=(struct Node*) malloc(sizeof(struct Node));
    newnode->data=val;
    newnode->next=top;
    top=newnode;
}
void pop()
{
    if(top==NULL)
    cout<<"stack is empty"<<endl;
    else
    {
        cout<<"the popped element is:"<<top->data<<endl;
        top=top->next;
    }
}
void display()
{
    struct Node* ptr;
    if(top==NULL)
    cout<<"stack is empty";
    else
    {
        ptr=top;
        cout<<"the elements in stack are:";
        while(ptr!=NULL)
        {
            cout<<ptr->data<<""<<endl;
            ptr=ptr->next;
        }
    }
}
int main()
{
    int ch,val;
    cout<<"1. Push element in stack"<<endl;
    cout<<"2. Pop element from stack"<<endl;
    cout<<"3. Display elements in stack"<<endl;
    cout<<"4. Exit"<<endl;
    do
    {
        cout<<"enter your choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"enter the element to be pushed:"<<endl;
                cin>>val;
                push(val);
                break;
            }
          case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout<<"Exit"<<endl;
                break;
            }  
            default:
            {
                cout<<"invalid choice"<<endl;
            }
        }
    }
    while(ch!=4);
    return 0;
}