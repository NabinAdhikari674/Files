#include<iostream>
#include<conio.h>
using namespace std;

template <class T>
T Addition(T n1,T n2)
{
	return (n1+n2);
}
int main()
{
	int i1,i2;
	float f1,f2;
	char c1,c2;
	cout<<"Enter Two Integers :\n";
	cin>>i1>>i2;
	cout<<Addition(i1,i2)<<" is addition";
	cout<<"\n\nEnter Two Float numbers\n";
	cin>>f1>>f2;
	cout<<Addition(f1,f2)<<" is addition";
	cout<<"\n\nEnter Two Characters : \n";
	cin>>c1>>c2;
	cout<<Addition(c1,c2)<<" is addition ASCII Value";
	
	getch();
	return 0;
}
