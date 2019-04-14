#include<iostream>
#include<conio.h>

using namespace std;

class A
{
	public :
	int a;
	void display()
	{
		cout<<"\n\nClass A (Base Class)\n\n";
	}
};
class B:public A
{
	public :
	int a;
	void display()
	{
		cout<<"\n\nClass B (Derived Class)\n\n";
		cin>>A::a;
		cout<<A::a;
	}
};

int main()
{
	B b1;
	b1.display();
	b1.A :: display();
	b1.A :: a=10;
	cout<<b1.A :: a;
	getch();
}
