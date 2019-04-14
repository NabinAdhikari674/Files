#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;
int main()
{
    int a[3][3];
    for (int i=0;i<3;i++)
    {
    for (int j=0;j<3;j++)
    {
    	cin>>a[i][j];
	};
	}
	for (int i=0;i<3;i++)
    {
    for (int j=0;j<3;j++)
    {
   	cout<<"\t"<<a[i][j];
	} cout<<"\n";
	}
}
