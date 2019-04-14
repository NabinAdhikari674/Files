#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	public :
	int a;
	void message()
	{
		cout<<"\n\nThis is Class A";
	}
	
};
class B :public A
{
	public :
	int a;
	void message()
	{
		cout<<"\n\nThis is Class B";
	}
};
class C :public A
{
	public :
	int a;
	void message()
	{
		cout<<"\n\nThis is Class C";
	}
};
class D :public B,public C
{
	public :
//	void message()
//	{
//		cout<<"This is Class D";
//	}
	
};
int main()
{
	D d1;
	C c1;
	c1.A :: message();
	d1.B :: message();
	d1.C :: message();
	
	getch();
	
	
}
