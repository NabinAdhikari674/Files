#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

int main()
{
	int a[2][2],b[2][2],c[2][2];
	
	cout<<"\n\n\tEnter The Elements for A : \n";
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
cout<<"\n\n\t THE Elements of A are :\n";
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			cout<<a[i][j]<<"\t";
		}cout<<"\n";
	}
	cout<<"\n\n\tThe Tranpose of A is (Reverse loop): \n\n\n";
	for (int j=0;j<2;j++)
	{
		for (int i=0;i<2;i++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	
}
