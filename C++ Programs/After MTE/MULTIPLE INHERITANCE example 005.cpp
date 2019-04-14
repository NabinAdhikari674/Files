//Multiple Inheritance--Many base classes and a single derived class

#include<iostream>
#include<conio.h>

using namespace std;

class area
{
	public :
		void a11()
		{   int l,b;
		    cout<<"Enter L and B respictively :\n";
		    cin>>l>>b;
			cout<<"the Area is : "<<l*b<<"\n\n";
		}
};
class perimeter
{
	protected :
		void p11()
		{   int l,b;
		cout<<"Enter L and B respictively :\n";
		    cin>>l>>b;
			cout<<"The perimeter is : "<<2*(l+b);
		}
};
class rec:public area,public perimeter
{
	public :
		void r11()
		{
			a11();
			p11();
		}
};
int main()
{
	rec r;
	r.r11();
	getch();
}
