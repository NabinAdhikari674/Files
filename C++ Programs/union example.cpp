#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

union book
{
	char name[10];
	int id,pages;
}b;
main()
{
    int i;

	
	cout<<"\n\n\tEnter the book details (Name,ID,Pages)\n";
		
	cin>>b.name>>b.id>>b.pages;
	

	cout<<endl<<"The Info on the books are :"<<"\nName :"<<b.name<<"\nID :"<<b.id<<"\nPages :"<<b.pages;
	
		
	
	getch();
}
