#include<iostream>
#include<iomanip>
#include<string.h>
#include<conio.h>

using namespace std;
class result
{  
public:
int m[3];
string nam;
void input()
{
	cout<<"\n\n\nEnter the Details : "<<endl<<"\n\tEnter the Name Of Student : ";
	cin>>nam;
	cout<<"Enter Marks for 3 subjects : ";
		for (int i=0;i<3;i++)
		{
		
     	cin>>m[i];
	    }
};
void output()
{
	cout<<"\n\n\nThe Details are: ";
	cout<<"\n\n\tName :"<<nam<<"\n\n\t";
	cout<<"The Marks for 3 subjects are : ";
	for (int i=0;i<3;i++)
	{
		cout<<"\t"<<m[i];
	}
};

}*r1;
int main()
{  r1=new result;
		r1->input();
	r1->output();
	getch();
}
