#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
}*start=NULL;
struct node* createNode()
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	return p;
}
void insertNode()
{
	struct node *tmp;
	tmp=createNode();
	printf("Enter value to node: ");
	scanf("%d",&tmp->info);
	tmp->link=NULL;
	if(start==NULL)
	{
		start=tmp;
	}
	else
	{
		struct node *t;
		t=start;
		while(t->link!=NULL)
		{
			t=t->link;
		}
		t->link=tmp;
	}
}
void insertBeg()
{
	struct node *tmp;
	tmp=createNode();
	printf("Enter value to node: ");
	scanf("%d",&tmp->info);
	tmp->link=NULL;
	if(start==NULL)
	{
		start=tmp;
	}
	else
	{
		tmp->link=start;
		start=tmp;
	}
}
void insertEnd()
{
	struct node *tmp;
	tmp=createNode();
	printf("Enter value to node: ");
	scanf("%d",&tmp->info);
	tmp->link=NULL;
	if(start==NULL)
	{
		start=tmp;
	}
	else
	{
		struct node *t;
		t=start;
		while(t->link!=NULL)
		{
			t=t->link;
		}
		t->link=tmp;
	}
}
void viewList()
{
	if(start==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		struct node *t;
		t=start;
		while(t!=NULL)
		{
			printf("%d ",t->info);
			printf("\t");
			t=t->link;
		}
	}
}

insertAfterval(int item)
{
	struct node *tmp,*ptr;
	tmp=createNode();
	printf("Enter value to node: ");
	scanf("%d",&tmp->info);
	tmp->link=NULL;
	
	if(start==NULL)
	{
		printf("No element is present for searching");
		return 0;
	}
	else
	{
		ptr=start;
		while(ptr->info!=item)
		{
			
			ptr=ptr->link;
		}
		tmp->link=ptr->link;
		ptr->link=tmp;
	}
}



int menu()
{
	int choice;
	printf("\nEnter options\n");
	printf("1. insertion\n");
	printf("2. traversing\n");
	printf("3. insertBeg\n");
	printf("4. insertEnd\n");
	printf("5. insertion after value\n");
	printf("10. exit\n");
	scanf("%d",&choice);
	return choice;	
}
int main()
{
	int loc;
	while(1)
	{
		switch(menu())
		{
			case 1:insertNode();
				break;
			case 2:viewList();
				break;
			case 3:insertBeg();
				break;
			case 4:insertEnd();
				break;
			case 5:
				printf("Enter value to search in linked list: ");
				scanf("%d",&loc);
				insertAfterval(loc);
				break;
			case 10:return 0;
			default:printf("Wrong key entered");
		}
	}
	return 0;
}
