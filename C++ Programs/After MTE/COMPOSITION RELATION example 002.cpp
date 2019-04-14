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
		cout<<"\n\n\tEnter The Section Nnmber : ";
		cin>>secno;
	}
	void putinfo()
	{
		cout<<"\n\n\n\tThe Section Tpye And Number Is : "<<type<<" "<<secno;
	}
	class B1
{
	public :
	int stno;
	char stream[20];
	void input()
	{
		cout<<"\n\n\tThe Total Number Of The Students IN the Section : ";
		cin>>stno;
		cout<<"\n\n\tEnter The Stream Type Of The Section : ";
		cin>>stream;
	}
	void output()
	{
		cout<<"\n\n\n\t\tThe Info Provided is : \n\n";
		cout<<"\n\tThe Total Students are : "<<stno<<"\n\tThe Stream Of The Secion Is : "<<stream;
	}
}b11;
};
int main()
{ 
  A1 a11;
  a11.getinfo();
  a11.b11.input();
  a11.putinfo();
  a11.b11.output();
  
  getch();
  return 0;
	
	
}


