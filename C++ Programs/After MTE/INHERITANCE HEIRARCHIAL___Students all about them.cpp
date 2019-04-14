#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class student
{   public :
    string nam;
	int reg;
	void detailsin()
	{   cout<<"\n\nEnter The Details Of The Student :"<<"\n\tName : ";
		cin>>nam;
		cout<<"\n\tRegistration No. : ";
		cin>>reg;
	}
};
class attendance:public student
{
	public :
	int a;
	void atn()
	{   
	    cout<<" \n\tEnter The Attendance : ";
		cin>>a;
	}
};
class marks:public attendance
{
	public :
	int m1,m2,m3;
	void min()
	{
		cout<<"\nEnter The Marks Of The Student "<<"\n\tMarks In CSE : ";
		cin>>m1;
		cout<<"\n\tMarks In ECE : ";
		cin>>m2;
		cout<<"\n\tMarks In PHY : ";
		cin>>m3;
	}
	void output()
	{
		cout<<"\n\n\n\t\t\t\t\tPRESS ENTER TO CONTINUE :) \n";
		getch();
	cout<<"\n\n\n\n\t\t\tAll The Details Of The Student Are : \n"<<"\n\tNAME : "<<nam<<"\n\tREGISTRATION NO. : "<<reg;
	cout<<"\n\n\tAttenadnce is :"<<a<<"\n\tMarks Of The Student Are : "<<"\n\tCSE : "<<m1<<"\n\tECE : "<<m2<<"\n\tPHY : "<<m3;
	cout<<"\n\n\tTotal Marks Is :"<<(m1+m2+m3)<<"\n\tThe Percentage is : "<<((m1+m2+m3)/0.9)<<" %\n\t\n\n"; 
	}
};

int main()
{
	marks s1;
	s1.detailsin();
	s1.atn();
	s1.min();
	s1.output();
	
	
	
	getch();
}


