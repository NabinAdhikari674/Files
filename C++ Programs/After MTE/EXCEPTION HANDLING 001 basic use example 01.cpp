#include<iostream>
#include<conio.h>

using namespace std;

double division(int a,int b)
{
	if (b==0)
	{
		//throw"Division by ZERO Condition !!"; 
	}
	return (a/b);
}
int main()
{
	int x=50;
	int y=0;
	double z=0;
	try
	{
		//z=division (x,y);
		    if (y==0)
			throw"Division by ZERO Condition !!";  
		//cout<<z<<endl;
	}
	catch(const char *msg)
	{
		cerr<<msg<<"\n";
	}
	
	getch();
	return 0;
}
