#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct node
{
	int info;
	struct node *link;
};
struct node *START=NULL;
struct node* createNode()
{
	struct node *n;
	n=(struct node *)(malloc(sizeof(struct node)));
	return (n);
}
void insertNode()
{
	struct node *temp;
	temp=createNode();
	cout<<"Enter any Number";
	cin>>temp->info;
	temp->link=NULL;
	if(START==NULL)
	{
	START=temp;cout<<"Created/inserted Node Successfully";}
	else
	{
		struct node *t;
		t=START;
		while(t->link!=NULL)
		{
			t=t->link;
		}
		t->link=temp;
		cout<<"Inserted at End:";
	}
}
void display()
{
	struct node *d;
	d=START;
	while(d->link!=NULL)
	{
		cout<<" "<<d->info<<endl;
		d=d->link;
	}
	cout<<"NULL"<<endl;
}
main()
{char ch;
	do
	{
	cout<<"Wellcome to Linked List!"<<endl;
	insertNode();
	cout<<"The linked list is as:"<<endl;
	display();
	cout<<"do you want to continue inserting:";
	ch=getche();
}while(ch!='n');
}

