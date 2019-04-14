#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

class rec
{
	int l,b;
	public:
		rec(int x,int y)
		{
			l=x;
			b=y;
		}
		rec(rec &h)
		{
			l=h.l; b=h.b;
		}
		void area()
		{
			cout<<" \n\nArea is : "<<l*b;
		}
};

int main()
{
	rec r1(10,20);
	rec r2(r1);
	r1.area();
	r2.area();
	
}
