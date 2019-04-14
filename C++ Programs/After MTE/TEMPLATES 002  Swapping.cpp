#include<iostream>
#include<conio.h>
using namespace std;
template  <class T,class U>
void Large(T n1,U n2)
{
	if (n1>n2)
	return n1;
	else 
	return n2;
}
int main()
{
	int i1,i2;
	float f1,f2;
	char c1,c2;
	cout<<" Enter two integers ";
	cin>>i1,i2;
	Large(i1,i2);
	cout<<"Enter two floats ";
	cin>>f1>>f2;
	Large(f1,f2);
	cout<<"Enter Two Character";
	cin>>c1>>c2;
	Large(c1,c2);
	getch();
	return 0;
}
