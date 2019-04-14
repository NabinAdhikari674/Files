#include<iostream>
#include<conio.h>
using namespace std;

class add
{
	public:
	int a,b;
	virtual void maths()
	{
		cout<<"\n\nEnter The Values for Integers : \n";
		cin>>a>>b;
		cout<<"\n\n\tThe Addition Of The Integers is : "<<(a+b);
	}
};
class sub:public add
{
	public:
	void maths()
	{
		cout<<"\n\nEnter The Values for Integers : \n";
		cin>>a>>b;
		cout<<"\n\n\tThe Subtraction Of The Integers is : "<<(b-a);
	}
};
class mult:public add
{
	public:
	 void maths()
	{
		cout<<"\n\nEnter The Values for Integers : \n";
		cin>>a>>b;
		cout<<"\n\n\tThe Multiplication Of The Integers is : "<<a*b;
	}
};
class div:public add
{   
    public:
    	
	 void maths()
	{
		cout<<"\n\nEnter The Values for Integers : \n";
		cin>>a>>b;
		cout<<"\n\n\tThe Division Of The Integers is : "<<(a/b);
	}
};

int main()
{
	add *a11;
	sub s11;
	mult m11;
	div d11;
	a11=new add;
	a11->maths();
	a11=&s11;
	a11->maths();
	a11=&m11 ;
	a11->maths();
	a11=&d11;
	a11->maths();
	
	
	getch();
	return 0;
	
}

