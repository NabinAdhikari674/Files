#include<iostream>
using namespace std;
int main()
{
	int i=0,a[5],t;
	cout<<"Enter the elements in a array : \n";
	for (i=0;i<5;i++)
	{
		cin>>a[i];
	}
		for (i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			if (a[i]>a[i+1])
			{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;	
			}
		}
	}
	cout<<"The elements After SORTING Are : \n"; 
	for (i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}
}
