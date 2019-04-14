#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;

int arr[]={3,2,1,5,4};
int main()
{
	sort(arr,arr+5);
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	getch();
	return 0;
}
