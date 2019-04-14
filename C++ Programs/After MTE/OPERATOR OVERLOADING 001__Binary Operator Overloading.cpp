#include<iostream>
#include<conio.h>
using namespace std;

class s
{
	public :
		int i,j;
		s()
		{
			i=j=0;  
		}
		void disp() { cout<<"\nI="<<i<<"\t"<<"J="<<j; }
		void getdata() { cin>>i>>j; }
		friend s operator +(int,s);
};
s operator+(int a,s s1)
{
	s k;
	k.i=a+s1.i;
	k.j=a+s1.j;
	return k;
}
int main()
{
	s s2;
	cout<<"\n\nEnter Values For i and j respectively :\n";
	s2.getdata();
	s s3=10+s2;
	s3.disp();
	getch();	
}
