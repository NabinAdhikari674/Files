#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

class marks
{public:
	int m1,m2,m3; 
	marks(int x, int y, int z)
	{
		m1=x;
		m2=y;
		m3=z;
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
	marks k1(50,60,80);
	marks k2(90,80,80);
	marks k3(10,20,30);
	k1.total();
	k2.total();
	k3.total();
}
