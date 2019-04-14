#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
}*head,*temp;
display()
{
cout<<"The Linked List is : ";
node*temp;
temp=head;
if(temp==NULL)
cout<<"List is empty";
else
{
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
	
}
}
create()
{
head=new node;
cout<<"Enter the first data for the node : ";
cin>>head->data;
head->next=NULL;
}
insert()
{
node*in,*temp;
in=head;
while(in->next!=NULL)
    in=in->next;
temp=new node;
cin>>temp->data;
temp->next=NULL;
in->next=temp;
}
int main()
{
	int n,i;
	create();
	cout<<"Enter the number of node to insert : ";
	cin>>n;
	cout<<"Enter the remaining "<<n<<" data for the node : ";
	for (i=0;i<n;i++)
	{
    insert();
    }
	display();
}
