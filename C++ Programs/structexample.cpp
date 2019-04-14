#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

struct book
{
	string name;
	int id,pages;
}b[2];
main()
{ int i;
for (i=0;i<2;i++)
	{
			cout<<"\n\n\tEnter the book details (Name,ID,Pages)\n";
		
	cin>>b[i].name>>b[i].id>>b[i].pages;
	

	cout<<endl<<"The Info on the books are :"<<"\nName :"<<b[i].name<<"\nID :"<<b[i].id<<"\nPages :"<<b[i].pages;
	
		
	}
	getch();
}
