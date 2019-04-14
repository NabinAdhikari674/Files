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
			cout<<a<<b;
		}
};
class derived:public base
{
	public:
		void cal()
		{
			cout<<"The Result is : "<<a+b;
		}
};
int main()
{
	derived d;
	d.input();
	d.output();
	d.cal();
	getch();
}
