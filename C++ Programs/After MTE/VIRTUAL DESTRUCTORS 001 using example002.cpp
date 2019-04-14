#include<iostream>
#include<conio.h>
using namespace std;

class base
{
public :
base()
{
	cout<<" \n\nConstructing Base\n\n";
}
virtual	~base()
	{
	cout<<"Destructing Base \n\n";	
	}

	
 };
 
 class derived : public base
 {
public :
derived()
{
	cout<<"\n\nConstructing Derived\n\n";
}
~derived()
{
	cout<<"\n\n Destructing Derived\n ";
}
};
int main()
{
	derived *d =new derived ();
	base *b=d;
	delete b;
	getchar();
	return 0;
}
