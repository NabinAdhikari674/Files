#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;
class abc
{ 

	int a;
	char b;
	float c;
	
	void input();

	void output();

}x;
void  abc :: input()
	{   input();
		cout<<"\nEnter the values for a,b,c\n";
		cin>>a>>b>>c;
		
	}
	void abc :: output()
	{
		cout<<"\nThe values for a,b,c are:\n";
		cout<<"\ta="<<a<<"\tb="<<b<<"\tc="<<c;
		
	}
	

int main()
{
//cin>>x.a>>x.b>>x.c;
//cout<<"\ta="<<x.a<<"\tb="<<x.b<<"\tc="<<x.c;
//x.input();
//x.output();	

getch();
}

