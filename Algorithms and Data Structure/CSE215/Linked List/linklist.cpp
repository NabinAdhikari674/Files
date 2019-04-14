#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int data;
	node *next;
}*q,*temp,*start=NULL,*prev;
void insertend()
{
	temp=new node;
	temp->next=NULL;
	cout<<"enter the data"<<"\n";
	cin>>temp->data;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		q=start;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=temp;
	}
}
void insertbeg()
{
    temp=new node;
	temp->next=NULL;
	cout<<"enter the data"<<"\n";
	cin>>temp->data;
	if(start==NULL)
	{
	    start=temp;	
	}	
	else
	{
		temp->next=start;
		start=temp;
	}
}
void insertloc()
{
	temp=new node;
	temp->next=NULL;
	cout<<"enter the data"<<"\n";
	cin>>temp->data;
	q=start;
	while(q!=NULL)
	{
		if(q->data=20)
		{
			q->next=temp;
			temp->next=q->next;
		}
		q=q->next;
	}
}
void deletefirst()
{
	q=start;
	start=start->next;
	
}
void deletelast()
{
    q=start;
	while(q->next!=NULL)
	{
	    q=q->next;
	}	
	    if(q==NULL)
		{
		    start=NULL;	
		}	
		else
		{
			q->next=NULL;
		}
} 
void search()
{
	q=start;
	int count=0;
	cout<<"enter the item to search"<<"\n";
	int item;
	cin>>item;
	while(q!=NULL)
	{
		if(q->data==item)
		{
			cout<<"element present at"<<count<<"\n";
		}
		count++;
		q=q->next;
	}	
}
void insertafterloc()
{
	q=start;
	temp=new node;
	temp->next=NULL;
	cout<<"enter the data"<<"\n";
	cin>>temp->data;
	cout<<"enter the number to insert after that"<<"\n";
	int item1;
	cin>>item1;
	while(q!=NULL)
	{
		if(q->data==item1)
		{
			temp->next=q->next;
			q->next=temp;
		}
		q=q->next;
	}
}
void display()
{
	q=start;
	while(q!=NULL)
	{
		cout<<"\n"<<q->data<<"\n";
		q=q->next;
	}	
}
int main()
{
	insertbeg();
	insertbeg();
	insertbeg();
	insertbeg();
 
	display();
	getch();
}
