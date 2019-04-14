#include<iostream>
#include<conio.h>

using namespace std;

class counter
{
	int id;
	public :
		counter (int i)
		{
			id=i;
			cout<<"\nconstructor of obj with id ="<<id;
		}
		
		~counter()
		{
			cout<<"\ndestructor with id = "<<id;
		}
};

int main()
{
	counter *c4;
	c4=new counter(4);
	counter c1(1);
    counter c2(2);
    counter c3(3);	
    cout<<"\n\nEnd of main\n\n";
    delete c4;
    getch();
}
