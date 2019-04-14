#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;
class abc
{  
public:
int a[5],c;
void input()
{		
        cout<<"Enter Details : \n";
		for (int i=0;i<5;i++)
		{
		
     	cin>>a[i];
	    }
	    cout<<"Enter the item for search\t";
	    cin>>c;
	    for (int i=0;i<5;i++)
	{ if (c==a[i])
		{
		cout<<"\t!! FOUND !! at : "<<i+1<<"th position";
		break;
	    }
	}
};
void output()
{

	cout<<"\n\n\tDetails are : ";
	for (int i=0;i<5;i++)
	{
		cout<<"\t"<<a[i];
	}
};

}r1;
int main()
{
		r1.input();
	    r1.output();
}
