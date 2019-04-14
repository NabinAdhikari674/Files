#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main ()
{
	enum seasons{ spring ,summer,autumn,winter};
	seasons s1,s2,s3,s4;
	
	s1=spring;
	
	s2=summer;

	s3=autumn;

	s4=winter;

	if (s1<s2)
	{
		cout<<"\n\nSummer comes after Spring";
		
	}
else
{
	cout<<"Spring comes after Summer";
}
if (s2<s3)
	{
		cout<<"\n\nAutumn comes after Summer";
		
	}
else
{
	cout<<"Summer comes after autumn";
}
if (s3<s4)
	{
		cout<<"\n\nWinter comes after Autumn";
		
	}
else
{
	cout<<"autumn comes after winter";
}

}

