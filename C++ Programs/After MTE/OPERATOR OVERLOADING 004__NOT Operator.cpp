#include<iostream>
#include<conio.h>

using namespace std;

class abc
{
	int a;
	public:
	void input()
	{
	cout<<"\n\tEnter A : ";
	cin>>a;
}
		void display ()
		{
			cout<<"\n\nValues are : ";
			cout<<a<<"\t\t";
		}
		void operator !(abc x)
		{
			if (this->a!=x.a)
			return 1;
			else 
			return 0;
		}
};
int main()
{   class c1,c2;
c1.input();
c2.input();
  if (c1>c2)
  {
  	cout<<"Hello";
  }
	getch();
	
}
