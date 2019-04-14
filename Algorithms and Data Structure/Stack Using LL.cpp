#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	node *next;
};
class stack
{
	struct node *top;
	public :
		stack()
		{
		top=NULL;
		}		
		void display();
		void push();
		void pop();

}s1;
void stack::display()
{
cout<<"\n\nThe Current stack is : \t";
struct node *ptr1=top;
while(ptr1!=NULL)
{
	cout<<ptr1->info<<"   ";
	ptr1=ptr1->next;
}
};
void stack::push()
{
cout<<"\n\nPushing Stack : \n";	
int value;
struct node *ptr;
cout<<"Enter The value to be inserted in Stack :\t";
cin>>value;
ptr= new node;
ptr->info=value;
ptr->next=NULL;
if (top!=NULL)
	ptr->next=top;
top=ptr;
cout<<"\n\tNew Element "<<value<<" is Pushed into the stack !!\n";
};
void stack::pop()
{
cout<<"\n\nPopping stack : \n";	
struct node *temp;
if (top==NULL)
{
	cout<<"The Stack is Empty";
}
temp=top;
top=temp->next;
cout<<"The popped value is : "<<temp->info;
delete(temp);
};
int main()
{
int a;
cout<<"\n\n1.Display Stack\n2.Push Stack\n3.Pop Stack\n4.Exit\n\tEnter Your Choice: ";
cin>>a;
switch (a)
	{
	 case 1:s1.display();
	        break;
	 case 2:s1.push();
	        break;
	 case 3:s1.pop();
	        break;
	 case 4:return 0;
	        break;
	default:
		cout<<"\nPlease Enter A Valid Choice....Try Again...";
		main();
    }
    main();
}
