#include<iostream>
#include<conio.h>

using namespace std;

class student
{
public :
int m1,m2,m3;
	void input()
	{
	cout<<"\n\tEnter M1 : ";
	cin>>m1;
	cout<<"\n\tEnter M2 : ";
	cin>>m2;
	cout<<"\n\tEnter M3 : ";
	cin>>m3;
	}

bool operator>(student x)
{
	if (this -> m1+m2+m3>(x.m1+x.m2+x.m3))
	return 1;
	else 
	return 0;
}	
};

int main()
{
	student s1,s2;
	cout<<"\n\nEnter Marks for Student1";
	s1.input();   
    cout<<"\n\nEnter Marks for Student2";
	s2.input();
   if (s1>s2)
   {
   	cout<<"Student 1 has greater marks than Student2";
   }
   else 
   {
   	cout<<"Student2 has greater marks than Student1";
   }
	
}
