#include<iostream>
#include<conio.h>
using namespace std;
template <typename T>
void Swap(T &n1,T &n2)
{
	T temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
int main()
{
	int i1=1,i2=2;
	float f1=1.2,f2=2.2;
	char c1='a',c2='b';
	cout<<"\tBefore passing data to function template  :";
	cout<<"\n\ni1 = "<<i1<<"\ti2 = "<<i2;
	cout<<"\n\nf1 = "<<f1<<" f2 = "<<f2;
	cout<<"\n\nc1 = "<<c1<<"\tc2 = "<<c2;
	Swap(i1,i2);
	Swap(f1,f2);
	Swap(c1,c2);
	cout<<"\n\n\tAFTER passing data to function template  :";
	cout<<"\n\ni1 = "<<i1<<"\ti2 = "<<i2;
	cout<<"\n\nf1 = "<<f1<<" f2 = "<<f2;
	cout<<"\n\nc1 = "<<c1<<"\tc2 = "<<c2;
	
	getch();
	return 0;
}

