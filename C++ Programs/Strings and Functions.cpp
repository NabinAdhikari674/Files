#include<iostream>
using namespace std;
int main()
{
	string a,b;
	cout<<"Input a string : \t";
	cin>>a;
	int x=a.length();
	cout<<"The reverse of the string is : \n";
	for(int i=x;i>=0;i--)
	{
		for (int z=0;z<x;z++)
		{
			b[z]=a[i];
	    }
	    cout<<a[i];
	}
	if(a==b)
	    cout<<"\nThe string is palindrome\n";
	else
	    cout<<"\n\nThe string is not a palindrome\n";
	    getch();
}
