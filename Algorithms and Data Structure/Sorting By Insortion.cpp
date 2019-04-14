#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,n,t;
	cout<<"Enter The numbers of element you want to enter in the ARRAY : ";
	cin>>n;
	cout<<"Enter The Elements In the Array :\n";
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (i=0;i<n;i++)
	{
	j = i;
	while (j > 0 && a[j] < a[j-1])
	{
	t=a[j];
    a[j] = a[j-1];
	a[j-1] = t;
	j--;
	}	
	}
cout<<"The Elements In the Array After SORTING Are :\n";
	for (i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}	
}
