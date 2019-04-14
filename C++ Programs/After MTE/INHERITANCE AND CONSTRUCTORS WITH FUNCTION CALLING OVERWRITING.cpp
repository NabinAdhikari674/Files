#include<iostream>
#include<conio.h>
using namespace std;

class student
{   public :
    string nam;
	int reg;
	student()
	{   cout<<"\n\nEnter The Details Of The Student :"<<"\n\tName : ";
		cin>>nam;
		cout<<"\n\tRegistration No. : ";
		cin>>reg;
		cout<<"\n\n\n\t\t\t\t\tPRESS ENTER TO CONTINUE :) \n";
		getch();
		cout<<"\n\n\n\n\t\t\tAll The Details Of The Student Are : \n"<<"\n\tNAME : "<<nam<<"\n\tREGISTRATION NO. : "<<reg;
	}
	~student()
	{
		cout<<"\n\n\tThis Is The Destructor For Class STUDENT\n";
	}
};
class marks : public student;
{
	public :
	int m1,m2,m3;
	marks()
	{
		cout<<"\n\n\nEnter The Marks Of The Student "<<"\n\tMarks In CSE : ";
		cin>>m1;
		cout<<"\n\tMarks In ECE : ";
		cin>>m2;
		cout<<"\n\tMarks In PHY : ";
		cin>>m3;
		cout<<"\n\n\n\t\t\t\t\tPRESS ENTER TO CONTINUE :) \n";
		getch();
		cout<<"\n\tMarks Of The Student Are : "<<"\n\tCSE : "<<m1<<"\n\tECE : "<<m2<<"\n\tPHY : "<<m3;
	cout<<"\n\n\tTotal Marks Is :"<<(m1+m2+m3)<<"\n\tThe Percentage is : "<<((m1+m2+m3)/0.9)<<" %\n\t\n\n"; 
	}
	~marks()
	{
		cout<<"\n\n\tDestructor For Marks Class\n";
	}
};
class attendance:public marks
{
	public :
	int a;
	attendance()
	{   
	    cout<<" \n\tEnter The Attendance : ";
		cin>>a;
		cout<<"\n\n\n\t\t\t\t\tPRESS ENTER TO CONTINUE :) \n";
		getch();
		cout<<"\n\n\tAttenadnce is :"<<a;
	}
	~attendance()
	{
		cout<<"\n\n\tThis Is The Destructor Of The Last Class : Attendance\n";
	}
};

int main()
{
	attendance a11;
	getch();
}

