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
		
	cin>>b.name;
	cout<<b.name;
		cin>>b.id;
	cout<<b.id;
		cin>>b.pages;
	cout<<b.pages;
	
		
	
	getch();
}
