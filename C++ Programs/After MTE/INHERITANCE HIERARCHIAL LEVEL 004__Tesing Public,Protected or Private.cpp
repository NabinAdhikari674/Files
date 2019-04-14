#include<iostream>
#include<conio.h>

using namespace std;

class main
{
	public :
		int a,b;
	void input()
		{   cout<<" \n\tEnter a :";
			cin>>a;
			cout<<" \n\tEnter b :";
			cin>>b;
		}
		void output()
		{
			cout<<"\n1st Class (Display)\n";
		    cout<<a<<"\t"<<b;
		}
};
class derived:protected main
{
	public:
		void second()
		{
			cout<<"\nThe 2nd Class (SUM) :\n "<<a+b;
		}
};
class again :private derived
{
	public: 
	void third()
	{
		cout<<"\n3rd Class (MULTIPLICATION) :\n"<<a*b;
	}
};

int main()
{
	again d1;
	//d1.input();
	//d1.output();
	//d1.second();
	//d1.third();
	getch();
}

