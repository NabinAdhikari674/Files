#include<iostream>
using namespace std;
main()
{
	int n,c=0,p=0,a[5]={1,2,3,4,5};
	cout<<"\tEnter the element you are looking for : ";
	cin>>n;
	for(int i=0;i<5;i++)
	{
		if (a[i]==n)
		{c++;
		 p=i;
		 break;
		}
	}
	if (c>0)
	{
		cout<<"\n\n\t\tThe Element is found "<<c<<" time(s) in the location "<<p+1<<"!! \n\n";
	}
	else if (c==0)
	cout<<" \n\n\t\tThe element is not found in the array !!\n\n";
}
