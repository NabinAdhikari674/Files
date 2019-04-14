#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	node *link;
}*q,*temp,*start=NULL,*prev,*ql;
void insertbeg()
{
	temp=new node;
	temp->link=NULL;
	cout<<"Enter data";
	cin>>temp->info;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->link=start;
		start=temp;
	}
}
void insertend()
{
	temp=new node;
	temp->link=NULL;
	cout<<"Enter Data ";
	cin>>temp->info;
	if(start==NULL)
	{
		cout<<endl<<"No element in linked list"<<endl;
		start=temp;
	}
	else
	{
		q=start;
		while(q->link!=NULL)
		{
			q=q->link;
		}
		q->link=temp;
	}
}
void insertaf()
{
	int nod,loc;
	temp=new node;
	temp->link=NULL;
	cout<<"Enter loc after to insert"<<endl;
	cin>>loc;
	cout<<"Enter data to insert after Loc:";
	cin>>temp->info;
	if(start==NULL)
	{
		cout<<"Linked list empty"<<endl;
	}
	else
	{
		q=start;
		nod=1;
			while(nod!=loc)
			{
				q=q->link;
				nod++;
			}
			temp->link=q->link;
			q->link=temp;
	}
}
void insertbf()
{
	int loc,nod;
	temp=new node;
	temp->link=NULL;
	cout<<"Enter the Location before to insert";
	cin>>loc;
	cout<<"Enter Data To insert before";
	cin>>temp->info;
	if(start==NULL)
	{
		cout<<"Link list is empty"<<endl;
	}
	else
	{
		q=start;
		prev=start;
		nod=1;
		while(nod!=loc)
		{
			prev=q;
			q=q->link;
			nod++;
		}
		prev->link=temp;
		temp->link=q;
	}
}
void search()
{
	int item,n=1,count=0;
	cout<<endl<<"Enter element to search";
	cin>>item;
	q=start;
	while(q->link!=NULL)
	{
		count++;
		q=q->link;
	}
	q=start;
	while(q!=NULL)
	{
		if(q->info==item)
		{
			cout<<"element found in "<<n<<"th Node"<<endl;
		}
		q=q->link;
		n++;
	}
	if(n>count)
	{
		cout<<"element not found in ll"<<endl;
	}
}
void display()
{
	cout<<endl<<"Your Linked List is as:"<<endl;
	q=start;
	while(q!=NULL)
	{
		cout<<q->info<<"\t";
		q=q->link;
	}
}
void reverseLL()
{
	node *c;
	c=start;
	node *n;
	prev=NULL;
	while(c!=NULL)
	{
			n=c->link;
	c->link=prev;
	prev=c;
	c=n;
}
start=prev;
}
void delkeep()
{
		q=start;
	int m,n,i,j;
	node *nex=NULL;
	cout<<"enter m and n";
	cin>>m>>n;
	while(q!=NULL)
	{
		for(i=1;i<=m;i++)
		{
			q=q->link;
		}
		nex=q;
		for(j=1;j<=n;j++)
		{
			nex=nex->link;
		}
		q=nex;
		nex=NULL;
	}
}
void swap()
{
	int k;
	q=start;
	temp= new node;
	temp->link=NULL;
	cout<<"Enter K:"<<endl;
	cin>>k;
	int i=0,c=0;
	while(q!=NULL)
	{
		q=q->link;
		c++;
	}
	q=start;
	while(i!=k-1)
	{
		q=q->link;
		i++;
	}
	i=0;
	prev=start;
	while(i!=c-k)
	{
		prev=prev->link;
		i++;
	}
	temp->info=prev->info;
	prev->info=q->info;
	q->info=temp->info;
}
void delafloc()
{
	q=start;
	int n=0,loc,i;
	cout<<"Enter loc after to delete";
	cin>>loc;
	if(start==NULL)
	{
		cout<<"Underflow"<<endl;
	}
	else
	{
		while(n!=loc)
		{
			prev=q;
			q=q->link;
		   n++;
		}
		prev->link=q->link;
	}
}
void delbef()
{
	int loc,n=1;
	q=start;
	cout<<endl<<"enter location before to delete:"<<endl;
	cin>>loc;
	while(n!=loc-1)
	{
		prev=q;
		q=q->link;
		n++;
	}
	prev->link=q->link;
}
main()
{
	/*cout<<"Enter any Choice:"<<endl;
	cout<<"1_InsertBeg"<<endl;
	cout<<"2_Insertend"<<endl;
			cout<<"3_search"<<endl;
				cout<<"4_Insertaf"<<endl;
					cout<<"5_Insertbef"<<endl;*/
    
    	insertbeg();
    	insertbeg();
    	insertbeg();
    	display();
    	cout<<endl<<"insert at end"<<endl;
    	insertend();
    	display();
    	cout<<endl<<"insert again at end"<<endl;
    	insertend();
    	display();
    	cout<<endl<<"inser after:"<<endl;
    	insertaf();
    	display();
    	cout<<endl<<"insert Before"<<endl;
    	insertbf();
    	display();
    	cout<<endl<<"Delete keep;"<<endl;
    	delkeep();
    	display();
    //	cout<<endl<<"Reversing"<<endl;
    //	reverseLL();
    //	display();
    /*	cout<<endl<<"Delete after Loc"<<endl;
    	delafloc();
    	display();
    	cout<<endl<<"Delete Before Loc"<<endl;
    	delbef();
    	display();
    	cout<<endl<<"Swap the element:"<<endl;
    	swap();
    	display();
    	//cout<<endl<<"search for an element"<<endl;
    	//search();*/
	
	
}
