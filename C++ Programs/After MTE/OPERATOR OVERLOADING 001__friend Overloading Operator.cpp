#include<iostream>
#include<conio.h>

using namespace std;

class counter
{
	int count;
	public :
	counter()
	{
		count=0;
	}
	int get_count()
	{
		return count;
	}
	friend void operator++(counter &c)
	{
		++c.count;
	}	
};

int main()
{
	counter c1,c2;
	cout<<" \nC1= "<<c1.get_count();
	cout<<" \nC2= "<<c2.get_count();
	++c1;
	++c2;
	cout<<"\n\nAfter Using Operator Overloading : \n";
	cout<<" \nC1= "<<c1.get_count();
	cout<<" \nC2= "<<c2.get_count();
	
	
	getch();
	
	
}
