#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	int a=10,*p,**q;
	p=&a;
	q=&p;
	cout<<"hello"<<p<<endl<<"hello"<<q;
	cout<<*p<<endl;
	cout<<*(*q);
}
