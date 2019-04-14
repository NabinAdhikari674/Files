#include<iostream>
using namespace std;

int main()
{
	int a[5],b[5],c[5];
    cout<<"\n\n\tENTER the array elements of A :\n";
	for (int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\n\n\tENTER the array elements of B :\n";
	for (int i=0;i<5;i++)
	{
		cin>>b[i];
	}
	cout<<"\n\n\t The array elements of C are :\n";
	for (int i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		cout<<"\t"<<c[i];
	}
}
