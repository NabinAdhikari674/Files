#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int x=-1;
	char *ptr;
	ptr=new char [256];
	//ptr=NULL;
	try
	{
		if (x<0) throw x;
	}
	catch(...)
	{
		cout<<"Exception Occured : Exiting "<<endl;
	}
	try
	{
		if (ptr==NULL) throw "ptr is NULL";
	}
	catch(...)
	{
		cout<<"Exception Occured : Exiting "<<endl;
	}
	
	delete []ptr;
	getch();
	return 0;
}
