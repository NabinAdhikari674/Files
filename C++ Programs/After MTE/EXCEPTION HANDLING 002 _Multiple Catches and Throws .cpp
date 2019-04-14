#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	try
	{
		if(y==0)
			throw y;
			else 
			throw 'a'; 
			cout<<x/y;
		
	}
	catch(int)
	{
		cout<<" You tried to divide with zero";
	}
	catch(double)
	{
		cout<<" Neg Value";
	}
	catch(...)
	{
		cout<<"Invalid Range";
	}
}
