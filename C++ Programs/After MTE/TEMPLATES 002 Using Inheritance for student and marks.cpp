#include<iostream>
#include<conio.h>
#include<string.h>
using namespace  std;

template <class T>
class A
{
	T name,sec;
	public :
	void details()
	{
		cout<<" Enter Your Name : ";
		cin>>name;
		cout<<" Enter Section : ";
		cin>>sec;
		cout<<"\n\n\tThe Details Entered is :\n\n"<<"\n\tName : "<<name<<"\n\tSection :"<<sec;
		
	}
};
template <class T>
class B :public A<T>
{
	T m1,m2,m3;
	public :
		void putmarks()
		{
			cout<<"\n\nEnter Your Marks :\n\n";
			cout<<"\tm1 : ";cin>>m1;
			cout<<"\n\tm1 : ";cin>>m2;
			cout<<"\n\tm1 : ";cin>>m3;
			cout<<"\n\n\t\tThe Marks Are :\n";
			cout<<"\tm1 : "<<m1;
			cout<<"\n\tm1 : "<<m2;
			cout<<"\n\tm1 : "<<m3;
			
		}
};
int main()
{
	A<string> r;
	r.details();
	B <float> p;
	p.putmarks();
	getch();
	return 0;
}
