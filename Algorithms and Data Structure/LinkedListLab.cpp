#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
struct node
{
	int info;
	node *link;
}*start,*temp,*q;
void createLL()
{
	temp=new node;
	temp->link=NULL;
	cout<<"Welcome Enter any Element to create your linked list:";
	cin>>temp->info;
	start=temp;
	cout<<"Created Successfully..."<<endl;
}
void display()
{
	q=start;
	if(q==NULL)
	{
		cout<<"Linked List Not Created Yet!"<<endl;
	}
	else
	{
	while(q!=NULL)
	{
		cout<<q->info<<"\t";
		q=q->link;
	}
}
}
void insertb()
{
	temp= new node;
	cout<<"Enter Element to insert in the beginning:";
	cin>>temp->info;
	temp->link=NULL;
	if(start==NULL)
	{
		cout<<"LInked list created:"<<endl;
		start=temp;
	}
	else
	{
		temp->link=start;
		start=temp;
	}
}
void insertE()
{
	temp=new node;
	temp->link=NULL;
	cout<<"Enter element to insert at end of linked list:"<<endl;
	cin>>temp->info;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		q=start;
		while(q!=NULL)
		{
			q=q->link;
		}
		q->link=temp;
		cout<<"inserted at the end:"<<endl;
	}
}
void insertAf()
{
	
}
main()
{
	int e;
	cout<<"Welcome to Linked Lists"<<endl;
	cout<<"Enter 1 to create and other key to  display:";
	cin>>e;
	if(e==1)
	{
		createLL();
		createLL();
		display();
	}
	else
	{
		display();
	}
	cout<<endl<<"Enter 1 to insert at Beg and 2 to insert  at End "<<endl;
	cin>>e;
	if(e==1)
	{
		insertb();
		cout<<"After Insertion at beg ll is"<<endl;
		display();
	}
	else
	{
		insertE();
		cout<<"After insertion LL is :"<<endl;
		display();
	}
}
