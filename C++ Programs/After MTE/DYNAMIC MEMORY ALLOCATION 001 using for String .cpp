#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	string *name;
	int *id;
	int *m;
	name=new string;
	id=new int;
	m=new int[3];
	cout<<"\n\nEnter The Followng details For The Students : \n\n";
		cout<<"NAME : ";
		cin>>*name;
		cout<<"ID : ";
		cin>>*id;
		cout<<"Marks : ";
		cin>>*(m);
		cin>>*(m+1);
		cin>>*(m+2);
	    cout<<"The Details Entered Are :\n\n";
		cout<<"\n\tNAME : "<<*name;
		cout<<"\n\tID : "<<*id;
		cout<<"\n\tMarks : "<<*(m)<<*(m+1)<<*(m+2);
		
	
	
	delete name;
	delete id;
	delete []m;
	getch();
	return 0;
}
