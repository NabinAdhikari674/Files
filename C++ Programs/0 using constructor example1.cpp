#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

class marks
{public:
	int m1,m2,m3; 
	marks()
	{
		m1=50;
		m2=80;
		m3=90;
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
	marks k1;
	k1.total();
}
