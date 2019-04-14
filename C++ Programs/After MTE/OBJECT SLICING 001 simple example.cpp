#include<iostream>
#include<conio.h>

using namespace std;

class slice1
{
	public :
		int x;
		void display()
		{
			cout<<"\nEnter The Value : \t";
			cin>>x;
		}
		void display2()
		{
			cout<<"The Value Entered Is : \t"<<x;
		}
};

class slice2 :public slice1
{
	public :
		int y;
		
			void display1()
			{
				cout<<"\n\nEnter The Values (both) : \n";
				cin>>x>>y;
			}
		
	
};
int main()
{
	slice1 s11;
	slice2 s12;
	s12.display1();
	s11=s12;              //derived class object is assigned to Base class object//object slicing
	s11.display2();
	s11.display();
	s11.display2();
	getch();
	return 0;
}
