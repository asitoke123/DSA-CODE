
//Write a program to insert element in existing linkedlist at the beginning
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
void printlist(struct node* ptr)
{
	while(ptr!=NULL)
	{
		cout<<"Element: "<<ptr->data<<"\n";
		ptr=ptr->next;
	}
}
//Creating a struct node* function to insert element at given position
struct node* insertatfirst(struct node *n1,int data)
{
 struct node* first;
 first = (struct node*)malloc(sizeof(struct node));
 first->next=n1;
 first->data=data;
 return first;	
}
int main()
{
struct node *n1,*n2,*n3,*n4,*n5;
n1=(struct node*)malloc(sizeof(struct node));
n2=(struct node*)malloc(sizeof(struct node));
n3=(struct node*)malloc(sizeof(struct node));
n4=(struct node*)malloc(sizeof(struct node));
n5=(struct node*)malloc(sizeof(struct node));

n1->data=10;  
n1->next=n2;

n2->data=20;
n2->next=n3;

n3->data=30;
n3->next=n4;

n4->data=40;
n4->next=n5;

n5->data=50;
n5->next=NULL;

cout<<"Linked List Before Insertion:\n";
printlist(n1);
n1=insertatfirst(n1,70);
cout<<"\nLinked List After Insertion:\n";
printlist(n1);
return 0;
}