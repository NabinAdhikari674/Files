#include<iostream>
#include<conio.h>
using namespace std;
class Measure
{
	int ft;
	int inc;
	public:
		Measure(int f,int i):ft(f),inc(f) {}
		Measure (int f)
		{
		ft =f/12;
		inc=f%12;
		}
		void output()
		{
			cout<<"\n The Value is : "<<ft<<"Ft \t"<<inc<<"inches\n";
		}
			operator int ()
			{
				int val=(ft*12)+inc;
				return val;
			}
};
int main()
{
	int j;
	Measure m1(1,2);
	m1.output();
	int val=14;
	m1=val;      //basic to class conversion
	m1.output();
	
	j=m1;         //class to basic conversion
	cout<<j<<endl;
	getch();
	return 0;
}
