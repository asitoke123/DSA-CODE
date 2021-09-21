#include<iostream.h>
#include<conio.h>
#include<malloc.h>

struct Node
{
int data;
struct Node *next;
};
void printlist(struct Node *ptr)
{
 while(ptr!=NULL)
 {
  cout<<ptr->data<<endl;
  ptr=ptr->next;
}
}
void main()
{
clrscr();
struct Node *n1,*n2,*n3,*n4,*n5;
n1=(Node*)malloc(sizeof(struct Node));
n1->data=100;
n1->next=n2;
n2=(Node*)malloc(sizeof(struct Node));
n2->data=200;
n2->next=n3;
n3=new Node;
n3->data=300;
n3->next=n4;
n4=(Node*)malloc(sizeof(struct Node));
n4->data=400;
n4->next=n5;
n5=new Node;
n5->data=500;
n5->next=NULL;
cout<<"\nFIRST==>"<<n1->data<<"==>"<<n2->data<<"==>"<<n3->data<<"==>"<<n4->data<<"==>"<<n5->data<<"==> NULL"<<endl;


getch();

}
