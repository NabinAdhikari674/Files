#include<iostream>
#include<conio.h>
using namespace std;

class A1
{
	public:
	int secno;
	char type;

	void getinfo()
	{
		cout<<"\n\n\tEnter The Section Type : ";
		cin>>type;
		cout<<"\n\n\tEnter The Section Number : ";
		cin>>secno;
	}
	void putinfo()
	{
		cout<<"\n\n\n\tThe Section Tpye And Number Is : "<<type<<" "<<secno;
	}
};
class B1
{
	public :
		A1 a11;
	int stno;
	char stream[20];
	void input()
	{
		a11.getinfo();
		cout<<"\n\n\tThe Total Number Of The Students IN the Section : ";
		cin>>stno;
		cout<<"\n\n\tEnter The Stream Type Of The Section : ";
		cin>>stream;
	}
	void output()
	{
		cout<<"\n\n\n\t\tThe Info Provided is : \n\n";
		a11.putinfo();
		cout<<"\n\tThe Total Students are : "<<stno<<"\n\tThe Stream Of The Section Is : "<<stream;
	}
};
int main()
{
	B1 b11;
	b11.input();
	b11.output();
//	A1 ao1;
//	ao1.getinfo();
//	ao1.putinfo();
	
	getch();
	return 0;
}

