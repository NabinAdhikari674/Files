#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

int main()
{       
        
		int a[10],i,j,n,temp;
	    cout<<"Enter Size of array : \n";
	    cin>>n;
	     cout<<"Enter Elements of array : \n";
		for (int i=0;i<n;++i)
		{
		cin>>a[i];
	    }
	    for (i=0;i<n;i++)
	    {
	    	for (j=0;j<n;j++)
	    	{
	    		if (a[j]<a[j+1])
	    		{
	    			temp=a[j];
	    			a[j]=a[j+1];
	    			a[j+1]=temp;
				}
			}
		}
	cout<<"Array after Bubble Sort : ";
	
	 	for (int i=n-1;i>=0;i--)
		{
		cout<<"\t"<<a[i];
	    }   
}
