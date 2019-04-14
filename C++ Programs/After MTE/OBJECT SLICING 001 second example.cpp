#include<iostream>
#include<conio.h>

using namespace std;

class details
{ 
 	public :
 		int x;
 		
		 void display1()
		{
			x=18;
			cout<<"\n\nThe Content Of Base class :";
			cout<<"\n\tGrandFather's Name : Dharma  "	;
	        cout<<"\n\tAge : "<<x+50;
}
};
class detail01 :public details
{
	public :
		 void display2()
		{
			cout<<"\n\nThe Content Of First Derived class :";
			cout<<"\n\tFather's Name : Narahari "	;
	        cout<<"\n\tAge : "<<(x+20);
}};
class detail02 : public details
{
	public :
		void display3()
		{
			cout<<"\n\nThe Content Of Base class :";
			cout<<"\n\tMy Name : Nabin "	;
	        cout<<"\n\tAge : "<<(x);
}};

int main()
{
	details o1;
	detail01 o2;
	detail02 o3;
	
	o1.display1();
	o1=o2;
	o2.display2();
	o1=o3;
	o3.display3();
	getch();
	return 0;
}
