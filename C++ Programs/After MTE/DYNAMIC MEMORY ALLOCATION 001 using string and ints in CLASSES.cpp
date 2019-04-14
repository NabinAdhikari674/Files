#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class student
{
	string *name;
	int *id,n;
	int *m;
	public :
	void input ()
{
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
	
}
    void display()
{
	cout<<"The Details Entered Are :\n\n";
		cout<<"\n\tNAME : "<<*name;
		cout<<"\n\tID : "<<*id;
		cout<<"\n\tMarks : "<<*(m)<<*(m+1)<<*(m+2);
	
delete name;
delete id;
delete []m;   	
}
      
};
int main()
{
	student s1;
	s1.input();
	s1.display();
	
	getch();
	return 0;
	
	
}
