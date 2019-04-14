#include<iostream>


using namespace std;

class calc
{
	int a,b,c;
	public:
		   void addition()
		   {
		   	cout<<"Enter The Values for a and b(Addition)\n";
		   	cin>>a>>b;
		   	c=a+b;
		   	cout<<"\nThe addition result is:";
		   	cout<<c;
		   }
		   void sub()
		   {
		   	cout<<"\n\n\nEnter The Values for a and b(Subtraction)\n";
		   	cin>>a>>b;
		   	c=a-b;
		   	cout<<"\nThe Subtracted result is:";
		   	cout<<c;
		   }
		   void multi()
		   {
		   	cout<<"\n\n\nEnter The Values for a and b(Multiplication)\n";
		   	cin>>a>>b;
		   	c=a*b;
		   	cout<<"\nThe Multiplied result is:";
		   	cout<<c;
		   }
		   void div()
		   {
		   	cout<<"\n\n\nEnter The Values for a and b(Division)\n";
		   	cin>>a>>b;
		   	c=a/b;
		   	cout<<"\nThe Divided result is:";
		   	cout<<c;
		   }
}s;
main()
{
	s.addition();
	s.sub();
	s.multi();
	s.div();
}
