#include<iostream>
#include<conio.h>
using namespace std;

void display(int,int,int);
void display(int a=500,int b=2300,int c=99)
{
	cout<<"\n"<<a;
	cout<<"\n"<<b;
	cout<<"\n"<<c;
}

int main ()
{
	int a,b,c;
	display(a,b);
	getch();
	
}
