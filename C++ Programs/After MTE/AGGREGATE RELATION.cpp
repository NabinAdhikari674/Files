#include<iostream>
#include<conio.h>

using namespace std;
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
			cout<<"\n\nThe DOB is : "<<mm<<yy<<dd;
		}
};
class A
{
	private:
		int roll;
		char name[20];
		public :
			DOB b;
			void getinfo()
			{
				cout<<"\nEnter Your Roll NO : ";
				cin>>roll;
				cout<<"\n\nEnter Your Name : ";
				cin>>name;
				b.getdob();
			}
			void putinfo()
			{
				cout<<"\n Roll No : "<<roll<<"\n Name : "<<name;
				b.putdob();
			}
}o1;

int main()
{
	o1.getinfo();
	o1.putinfo();
	DOB b1;
	b1.getdob();
	b1.putdob();
	
	getch();
	return 0;
}
