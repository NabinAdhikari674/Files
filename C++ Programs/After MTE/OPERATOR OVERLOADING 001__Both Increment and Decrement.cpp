#include<iostream>
#include<conio.h>

using namespace std;

class overloading
{
	
	int a;
	public :
	overloading()
	{
		a=5;
	}
	int get_count()
	{
		return a;
	}
	friend void operator++(overloading &c)
	{
		++c.a;
	}
	friend void operator--(overloading &c)
	{
		--c.a;
	}
};
int main()
{  
    int i;
overloading o1;
cout<<"\nThe value is : "<<o1.get_count();
cout<<"\n\nPress 1 If you want to implement the INCREMENT Operator\nPress any Other No. to implement DECREMENT Operator \n";
i=getch();
if (i==49)
{   
	++o1;
}
else{--o1;}
cout<<"\n\nAfter Implementing The Operator : ";
cout<<"\nThe value is : "<<o1.get_count();



getch();
}

