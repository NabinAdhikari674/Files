#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a=10,*p,**q,*r1,*r2;
	r1=r2=&a;
	cout<<r1<<endl;
	cout<<r2<<endl;
	delete r1;
	cout<<r1;
	
	
}
