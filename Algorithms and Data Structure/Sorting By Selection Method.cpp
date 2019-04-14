#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,t,n;
	cout<<"Enter The Size Of the Array : ";
	cin>>n;
	cout<<"Enter The Elements For Array : \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int pos_min;
	for (int i=0; i < n-1; i++)
	{
	pos_min = i;
	for (int j=i+1; j < n; j++)
	{
	if (a[j] < a[pos_min])
    pos_min=j;
	}
    if (pos_min != i)
    {
    t=a[i];
    a[i]=a[pos_min];
    a[pos_min] =t;
    }
	}
	cout<<"The Elements OF The Array After SORTING IS: \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
