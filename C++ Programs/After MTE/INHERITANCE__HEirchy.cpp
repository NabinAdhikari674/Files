#include<iostream>
#include<conio.h>
using namespace std;

class calc
{
	public :
		int a,b;
		void input()
		{
			cin>>a>>b;
		}
};
class add:public calc
{
	public :
		void add1()
		{
			cout<<"\nSum is : "<<a+b;
		}
};
class sub:public add
{
	public :
		void sub1()
		{
			cout<<"\nSubtraction is : "<<(b-a);
		}
}s1;
class mul:public sub
{
	public :
		void mul1()
		{
			cout<<"\nMultiplication is : "<<(b*a);
		}
}m1;
int main()
{   calc c1;
	add a1;
	a1.input();
	a1.add1();
	s1.sub1();
	m1.mul1();
	getch();
}
