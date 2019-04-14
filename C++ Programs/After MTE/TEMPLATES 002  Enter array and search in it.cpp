#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
void search(T arr[],int size)
{
	T no;
	int c=0;
	cout<<"\n\tEnter To Search\n";
	cin>>no;
	for(int i=0;i<size;i++)
	{
		if(no==arr[i])
		c++;
	}
	if (c>0)
	{
		cout<<" Found";
	}
	else
	cout<<" NOT";
}
int main()
{
	float a[5];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	search(a,5);
	getch();
	return 0;
}

