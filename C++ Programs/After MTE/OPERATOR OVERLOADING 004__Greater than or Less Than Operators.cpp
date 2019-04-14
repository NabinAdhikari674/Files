#include<iostream>
#include<conio.h>
using namespace std;

class calculator
{
	int a,b;
	public :
	void input()
	{
	cout<<"\n\tEnter A : ";
	cin>>a;
	}
	
	bool operator >(calculator x)
	{
		if (this->a>x.a)
		return 1;
		else 
		return 0;
	}
	
};

int main()
{ int x;
   calculator ob1,ob2;
   ob1.input();   
   ob2.input();
   if (ob1>ob2)
   {
   	cout<<"ob1 is greater than ob2";
   }
   else 
   {
   	cout<<"ob2 is greater than ob1";
   }
   getch();
   
   
	
}
