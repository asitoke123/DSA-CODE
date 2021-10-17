//write a program to implement double linked list
#include<iostream>
#include<stlib.h>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *leftptr=NULL,*rightptr=NULL;
void display(struct node*);
/*int main()
{
  leftptr=(struct node*)malloc(sizeof(struct node));
  display(leftptr);
}*/
void display(struct node *ptr){
  while(ptr!=NULL)
	{
		cout<<"Element: "<<ptr->data<<"\n";
		ptr=ptr->next;
	}
    ptr=rightptr;
	while(ptr!=NULL)
	{
		cout<<"Element: "<<ptr->data<<"\n";
		ptr=ptr->prev;
	}
}
int main()
{
struct node *n1,*n2,*n3,*n4;
n1=(struct node*)malloc(sizeof(struct node));
n2=(struct node*)malloc(sizeof(struct node));
n3=(struct node*)malloc(sizeof(struct node));
n4=(struct node*)malloc(sizeof(struct node));
//linking nodes
n1->data=10;
n1->next=n2;
n1->prev=NULL;

n2->data=20;
n2->next=n3;
n2->prev=n1;

n3->data=30;
n3->next=n4;
n3->prev=n2;

n4->data=40;
n4->next=NULL;
n4->prev=n3;
cout<<"linked list before insertion"<<endl;
display(n1);
return 0;
}