#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>

using namespace std;
class dyncons
{
	int *p;
	public:
		dyncons()
		{
			p=new int;
			*p=10;
		}
		dyncons(int v)
		{
			p=new int;
			*p=v;
		}
		int dis()
		{
			return (*p);
		}
		
};
main()
{
	dyncons o,o1(9);
	cout<<"The value of object o's p is : "<<o.dis()<<endl;
	cout<<"The value of object o1's p is : "<<o1.dis();
}
