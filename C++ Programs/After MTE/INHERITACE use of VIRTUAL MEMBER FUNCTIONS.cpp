#include<iostream>
#include<conio.h>

using namespace std;

class D
{
	public :
		virtual void display()
		{
			cout<<"\n\nThe Content Of Base class ";
		}
};
class D1 :public D
{
	public :
		void display()
		{
			cout<<"\n\nThe Contents of the first (D1) derived class ";
		}
};
class D2 : public D
{
	public :
		void display()
		{
			cout<<"\n\nThe contents of The second (D2) derived class";
		}
};

int main()
{
	D *b;
	D1 b1;
	D2 b2;
	
	b=new D;
	b->display();
	
	b= &b1;               //can be done as b=new D1 also..
	b->display();
	
	b=new D2;             //can be done as b=&b2 also..
	b->display();
	
	getch();
	return 0;
	
}
