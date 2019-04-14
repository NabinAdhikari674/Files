#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

int main()
{int a[5],c,b=0,e=4,m;
	     cout<<"Enter Details : \n";
		for (int i=0;i<5;i++)
		{
		
     	cin>>a[i];
	    }
	    cout<<"Enter the item for search\t";
	    cin>>c;
	    m=(b+e)/2;
	    while(b<e)
	    {
	    	 if (c=a[m])
	    	 {
	    	 		cout<<"\t!! FOUND !! at : "<<m<<"th position";
	    	 		break;
			 }
			 else if(c<a[m])
			 e=m-1;
			 else
			 b=m+1;
		}
}
