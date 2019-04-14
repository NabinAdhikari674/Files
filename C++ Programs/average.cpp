#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;
class student
{ 
public :
	int m1,m2,m3,t,a;
	
	void total();

	void average()
	{
		a=t/3;
		cout<<"\nThe average of the marks is : "<<a;
	}

}x;
void student :: total()
{
	cout<<"Enter The marks for m1,m2,m3\n";
	cin>>m1>>m2>>m3;
	t=m1+m2+m3;
}
int main ()
{
	x.total();
	x.average();
	getch();
}
