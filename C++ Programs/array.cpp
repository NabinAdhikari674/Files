#include<iostream>
using namespace std;
main()
{
	int i=0,a[5];
	
	cout<<"Enter The Elements For your array\n";
	for(i=0;i<5;i++)
	{ 
		cin>>a[i];
	}
	cout<<"\n\nThe elements of the array are";
	for(i=0;i<5;i++)
	{
		cout<<"\t";
	cout<<a[i];
    }
	
}
