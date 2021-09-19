#include<iostream>
#include<malloc.h>
using namespace std;

struct Node
{
    int info;
    struct Node *link;//link is pointer
}*FIRST=NULL;

int main()
{
    struct Node *n1,*n2,*n3;
    n1=(Node*)malloc(sizeof(struct Node));//dyanamically allocation
    n1->info=100;
    n1->link=NULL;
    FIRST=n1;
    n2=(Node*)malloc(sizeof (struct Node));
    n2->info=200;
    n2->link=NULL;
    n1->link=n2;
    n3=(Node*)malloc(sizeof (struct Node));
    n3->info=300;
    n3->link=NULL;
    n3->link=n3;
    cout<<"FIRST==>"<<n1->info<<"==>"<<n2->info<<"==>"<<n3->info<<"==> NULL"<<endl;
    struct Node *temp;//temporary pointer
    temp=FIRST;
    while(temp!=NULL)
    {
        cout<<temp->info<<endl;
        temp=temp->link;
    }
    //to insert node at first position
    struct Node *new1;
    new1=new Node;
    if(FIRST==NULL)
    {
        FIRST=new1;
        new1->info=50;
        new1->link=NULL;
    }
    new1->info=50;
    new1->link=FIRST;
    FIRST=new1;
    cout<<"after the insert on first position"<<endl;
    temp=FIRST;
    while(temp!=NULL)
    {
        cout<<temp->info<<endl;
        temp=temp->link;
    }


    return 0;
}
