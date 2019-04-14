#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

class marks
{
	int m1,m2,m3;
	public:
		marks(int x,int y,int z)
		{
			m1=x;
			m2=y;
			m3=z;
		}
		marks(marks &h)
		{
			m1=h.m1; m2=h.m2; m3=h.m3;
		}
	void total()
	{
	int t=m1+m2+m3;
	int p;
	p=(t/3);
	cout<<"\n\n\n The Total marks is : "<<t<<" \n\n\nThe percentage is : "<<p<<"%";	
	}
};

int main()
{
	marks r1(10,20,30);
	marks r2(r1);
	marks r3(r1);
	r1.marks();
	r2.marks();
	r3.marks();
}
