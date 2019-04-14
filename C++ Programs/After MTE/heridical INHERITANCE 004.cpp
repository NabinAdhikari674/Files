#include<iostream>
#include<conio.h>

using namespace std;

class base
{
	public:
		int a,b;
		void input()
		{
			cin>>a>>b;
		}
		void output()
		{
			cout<<a<<"\t"<<b;
			cout<<"\n1st Class\n";
		}
};
class derived:public base
{
	public:
		void cal()
		{
			cout<<"\nThe 2nd Class\n "<<a+b;
		}
};
class der11 :public  derived
{
	public: 
	void display()
	{
		cout<<"\n3rd Class \n";
	}
};

int main()
{
	der11 d1;
	d1.input();
	d1.output();
	d1.cal();
	d1.display();
	getch();
}
