#include<iostream>
using namespace std;
main()
{
	int a[5]={1,2,3,4,5},b=0,e=4,m,n,c=0,p=0,i=0;
	cout<<"\n\tEnter The Element You Want To Search For : ";
	cin>>n;
	m=(b+e)/2;
	while(b<=e)
	{
		if (a[m]==n)
		{c=c+1;
	    p=m;
	    break;}
		else if(a[m]<n)
		{b=m+1;}
		else if(a[m]>n)
		{e=m-1;}
		m=(b+e)/2;
	}
	if(c>0)
	cout<<"\n\tElement found at "<<p+1<<" position !!\n\n";
	else if(c==0)
	cout<<"\n\t Element NOT found !!\n\n";
	
}
