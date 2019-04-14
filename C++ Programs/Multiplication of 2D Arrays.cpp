#include<iostream>

using namespace std;

int main()
{
	int a[2][2];
	int b[2][2],c[2][2];
	int i=0,j=0;
	
	
	cout<<"\n\nEnter The Elements Of Array A :\n";
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
      	{
		    cin>>a[i][j];
	    }
    } 
    cout<<"\n\nEnter The Elements Of Array B :\n";
    for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
      	{
		    cin>>b[i][j];
	    }
    } 
    for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
      	{ if (i=2)
      	  {
      		i=0;
		  }
      		
		    c[i][j]=( (a[i][j]) * (b[i][j]) ) + ( (a[i+1][j]) * (b[i][j+1]) ) ;
	    }
    } 
    cout<<"\n\n\nThe Multiple of array A and B is :\n";
     for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
      	{
		    cout<<c[i][j];
		    cout<<"\t";
	    }
	    cout<<"\n";
    } 


}
