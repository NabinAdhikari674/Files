#include<iostream>
#include<conio.h>

using namespace std;
void add(int *,int *);

void add(int *x,int *y)
{
	(*x)++;
	(*y)++;
	cout<<"\n\nIn Function,a is="<<*x<<"\tb is="<<*y;
	
}

int main()
{
	
	int a=11,b=22;
	cout<<"\n\n\t\ta is="<<a<<"\t\tb is="<<b;
	add(&a,&b);
	cout<<" \n\nAfter Function Calling,Now a is ="<<a<<"\t\tNow b is="<<b;
}

