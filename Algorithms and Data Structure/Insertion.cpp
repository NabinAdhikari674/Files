#include<iostream>
using namespace std;
main()
{
	int n,p,a[5]={1,2,3,4};
	cout<<"\n\tEnter a INTEGER for Insertion : ";
	cin>>n;
	cout<<"\n\tEnter The POSITION for Intertion : ";
	cin>>p;
	for (int i=4;i>p-1;i--)
	{
		a[i]=a[i-1];
	}
	a[p-1]=n;
	cout<<"\n\tThe array after Intertion Is : ";
	for (int i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}
}
