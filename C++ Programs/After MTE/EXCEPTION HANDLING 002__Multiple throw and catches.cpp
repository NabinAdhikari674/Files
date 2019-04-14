#include<iostream>
#include<conio.h>

using namespace std;
void sum(int x,int y)
{
	try
	{
		if(x==0)
		throw x;
		
		int z=x+y;
	}
	catch(int)
	{
		throw;
	}
}
void sum1(int x,int y)
{
	try
	{
		if (x==0)
		
			throw x;
			int z=x+y;
		
	}
	catch(int)
	{
		throw;
	}
}

int main()
{
	int x,y;
	cin>>x>>y;
	try{sum1(x,y);}
	catch(...)
	{
		cout<<" IN main Body ";
	}
	getch();
	return 0;
}
