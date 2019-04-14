#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

class rec
{
	int l,b;
	public:
		rec()
		{
			l=10;
			b=5;
		}
		void area()
		{
			cout<<" Area is : "<<l*b;
		}
};

int main()
{
	rec r1;
	r1.area();
	
}
