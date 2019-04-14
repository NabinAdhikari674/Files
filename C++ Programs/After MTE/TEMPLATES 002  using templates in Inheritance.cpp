#include<iostream>
#include<conio.h>
using namespace std;

template <class T>
class A
{
	T x;
	public :void put()
	{
		cin>>x;
		cout<<x<<"\n";
	}
};
template <class T>
class B :public A<T>
{
	T y;
	public :
		void put1()
		{
			cout<<" Enter The Value of y\n";
			cin>>y;
			cout<<y<<"\n";
			
		}
};
int main()
{
	A<int> r;
	r.put();
	B <float> p;
	p.put();
	p.put1();
	getch();
	return 0;
}

