//write a program which is menu driven and asking to you for multiple insertion and deletion in stack
#include <iostream>
using namespace std;
#define SIZE 5


int stack[SIZE];
int TOP=-1;

void display()
{
    if(TOP==-1)
    cout<<"\n no element in the stack,stack is empty!";
    else
    {
        for(int i=TOP;i>-1;i--)
        cout<<"\n"<<stack[i];
    }
}

void push(int val)
{
    if(TOP==SIZE-1)
    cout<<"\n stack is now full";
    else
    {
        TOP++;
        stack[TOP]=val;
        cout<<"\n Inserted element:"<<val;
    }
}
int pop()
{
    if(TOP==-1)
    cout<<"\n stack is empty";
    else
    {
        int temp=stack[TOP];
        TOP--;
        return temp;
    }
}

int main() {
    display();
    //int a=5;
    //cout<<"\n enter the element:";
    //cin>>a;
    int t;
    display();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    t=pop();
    cout<<"\n element poped:"<<t;
    
    t=pop();
    cout<<"\n element poped:"<<t;
    
    t=pop();
    cout<<"\n element poped:"<<t;
    t=pop();
    cout<<"\n element poped:"<<t;
    t=pop();
    cout<<"\n element poped:"<<t;
    //display();
    //push(30);
    display();
	return 0;
}