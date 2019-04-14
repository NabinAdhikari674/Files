#include<iostream>
#include<conio.h>

using namespace std;

class increment
{  
    int a,b,c;
    public:
	increment(int x,int y,int z)
	{ 
	 a=x; b=y; c=z;	
	} 
    void display()
	{
	cout<<"\nA= "<<a<<"\tB= "<<b<<"\tC= "<<c;
	}
	void operator++()
	{
		a=a+1; b=b+1; c=c+1;
	}
 	
};

int main()
{
	increment i(10,20,30);
	i.display();
	++i;
	i.display();
	getch();
}
