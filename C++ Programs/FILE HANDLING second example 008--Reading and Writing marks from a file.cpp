#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>

using namespace std;
class marks
{  public :
	int m1,m2,m3,t;
	string name;
	void input()
	{
		cout<<"\nEnter The Name of the student : ";
		cin>>name;
		cout<<"Enter Marks 1 : ";
		cin>>m1;
		cout<<"Enter Marks 2 : ";
		cin>>m2;
		cout<<"Enter Marks 3 : ";
		cin>>m3;
	}
	void display()
	{   t=m1+m2+m3;
		cout<<"\n\nThe Name of the student : "<<name;
		cout<<"\nMarks 1: "<<m1;
		cout<<"\nMarks 2: "<<m2;
		cout<<"\nMarks 3: "<<m3;
		cout<<"\n\t\tTotal Of the marks is : "<<t;
	}
	
};
int main()
{
	ofstream of;
	of.open("Marks_oF_Students.txt",ios::app);
	marks o1;
	o1.input();
	cout<<"\n\n\n\t\t\tDisplaying Name and Marks :"; 
	o1.display();
	of.write((char*)&o1,sizeof(o1));
	cout<<"\n\n\n\n\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!Record Entered!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n\n";
	of.close();
	
	ifstream ifs("Marks_oF_Students.txt");
	while (!ifs.eof())
	{
		ifs.read((char*)&o1,sizeof(o1));
		o1.display();
	}
	ifs.close();
	getch();
}
