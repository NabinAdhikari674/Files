#include<iostream>
#include<conio.h>
using namespace std;

class space 
{
	int a,b,c;
	
	public:
		space (int x,int y,int z)
	   {
	   	a=x; b=y; c=z;
	   }
	   void display()
	   {
	   	cout<<"\nA= "<<a<<"\tB= "<<b<<"\tC= "<<c;
	   }
	   void operator-()
	   {
	   	a=-a; b=-b; c=-c;
	   }
};

int main()
{
	space s(10,20,30);
	s.display();
	-s;
	s.display();
	getch();
}
