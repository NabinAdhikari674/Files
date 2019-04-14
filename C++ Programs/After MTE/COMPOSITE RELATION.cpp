#include<iostream>
#include<conio.h>

using namespace std;

class A
{
	private:
		int roll;
		char name[20];
	public :

class DOB
{
	int mm,yy,dd;
	public :
	void getdob()
	{
	cout<<"\n\nEnter Your DOB [mm/yy/dd]: \n";
	cin>>mm>>yy>>dd;
	}
	void putdob()
	{
	cout<<"\n\nThe DOB is [mm/yy/dd] : "<<mm<<"/"<<yy<<"/"<<dd;
	}
}o2;


void getinfo()
{
  	cout<<"\nEnter Your Roll NO : ";
	cin>>roll;
	cout<<"\n\nEnter Your Name : ";
	cin>>name;					
}
void putinfo()
{
	cout<<"\n Roll No : "<<roll<<"\n Name : "<<name;
}

}o1;

int main()
{
	o1.getinfo();
	o1.o2.getdob();
	o1.putinfo();
	o1.o2.putdob();
	
	getch();
	return 0;
}
