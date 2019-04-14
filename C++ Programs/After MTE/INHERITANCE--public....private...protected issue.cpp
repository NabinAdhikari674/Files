#include<iostream>
#include<conio.h>
using namespace std;

class hello
{
	public:
	int a,b;
}h1;

class how:public hello
{
void you()
	{
		int c,d;
	c=a+b;
	d=a-b;
	
	cout<<c<<d;
    }
}o1;

class are:private hello
{   	int e,f;
	e=c+d;
	f=c-d;

	cout<<e<<f;
}e1;

int main
{
	e1.you();
}
