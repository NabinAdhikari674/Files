#include<iostream>
#include<conio.h>
using namespace std;

class Measure
{
	int kg;
	int gm;
	public:
		Measure(int k,int g):kg(g),gm(g) {}
		Measure (int k)
		{
		kg =k/1000;
		gm=k%1000;
		}
		void output()
		{
			cout<<"\n The Value is : "<<kg<<"kg \t"<<gm<<"gm\n";
		}
			operator int ()
			{
				int val=(kg*1000)+gm;
				return val;
			}
};
int main()
{
	int i;
	Measure m1(3,700);
	m1.output();
	int val=3400;
	m1=val;
	m1.output();
	
	i=m1;
	cout<<i<<endl;
	getch();
	return 0;
}
