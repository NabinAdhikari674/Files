#include<iostream>
#include<conio.h>

using namespace std;

class first
{   public :
	int a,b;
	void input()
	{
		cout<<"Enter The Values For Integers : ";
		cin>>a;
		cin>>b;
	}
	void output()
	{
		cout<<"The Numbers Enters Are : "<<a<<b;
	}
};
class second :public virtual first
{
	public :
	void add()
	{
		cout<<"The Addition Of The Integets is : "<<(a+b);
	}
};
class third : public virtual first
{
	public :
	void sub()
	{
		cout<<"The Subtraction Of The Integers is : "<<(a-b);
	}
};
class fourth :public second,public third
{
	public :
	void mult()
	{
		cout<<"The Multiplication Of The Integers is : "<<(a*b);
	}
};

int main()
{
	fourth f11;
	f11.input();
	f11.output();
	f11.add();
	f11.sub();
	f11.mult();
	
	getch();
}
