#include<iostream>
#include<conio.h>

using namespace std;

class first
{   public :
	int a,b;
	void input()
	{
		cout<<"\n\n\tEnter The Values For Integers : \n";
		cin>>a;
		cin>>b;
	}
	void output()
	{
		cout<<"\n\n\n\tThe Numbers Enters Are : "<<a<<"\t"<<b;
	}
};
class second :public virtual first
{
	public :
	void add()
	{
		cout<<"\n\n\tThe Addition Of The Integets is : "<<(a+b);
	}
};
class third : public virtual first
{
	public :
	void sub()
	{
		cout<<"\n\n\tThe Subtraction Of The Integers is : "<<(a-b);
	}
};
class fourth :public second,public third
{
	public :
	void mult()
	{
		cout<<"\n\n\tThe Multiplication Of The Integers is : "<<(a*b);
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
