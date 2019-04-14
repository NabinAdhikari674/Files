#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int x=-1;
	try
	{
	if (x<0) throw x;
	else cout<<x;
	
	}
	catch(...)   //generic type of catch
	{
		cout<<"Exception Occured : Thrown Value is "<<x;
	}

getch();
return 0;
}
