#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;
class array
{   
  public :
    int a[3][3];
   
    void input()
    {
    	cout<<"\n\n\nEnter the elements : ";
    	for (int i=0;i<3;i++)
       {
           for (int j=0;j<3;j++)
           {
     	      cin>>a[i][j];
           }
      	}
    };

	void output()
	{
		cout<<"\n\n\n The Elements are : ";
		for (int i=0;i<3;i++)
    {
    for (int j=0;j<3;j++)
    {
   	cout<<"\t"<<a[i][j];
	} cout<<"\n";
	};
	}
}a1;

int main()
{
	a1.input();
	a1.output();
}
