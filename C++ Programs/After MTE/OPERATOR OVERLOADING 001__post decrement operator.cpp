#include<iostream>
#include<conio.h>

using namespace std;

class decrement
{  
    int a,b,c;
    public:
	decrement(int x,int y,int z)
	{ 
	 a=x; b=y; c=z;	
	} 
    void display()
	{
	cout<<"\nA= "<<a<<"\tB= "<<b<<"\tC= "<<c;
	}
	void operator--(int)
	{
		a=a-1; b=b-1; c=c-1;
	}
 	
};

int main()
{
	decrement i(10,20,30);
	i.display();
	i--;
	i.display();
	getch();
}
