#include<iostream>
#include<conio.h>

using namespace std;

class details
{ 
 	public :
		virtual void display()
		{
			cout<<"\n\nThe Content Of Base class :";
			cout<<"\n\tGrandFather's Name : Dharma  "	;
	        cout<<"\n\tAge : 78";
}
};
class detail01 :public details
{
	public :
		virtual void display()
		{
			cout<<"\n\nThe Content Of First Derived class :";
			cout<<"\n\tFather's Name : Narahari "	;
	        cout<<"\n\tAge : 38";
}};
class detail02 : public details
{
	public :
		virtual void display()
		{
			cout<<"\n\nThe Content Of Base class :";
			cout<<"\n\tMy Name : Nabin "	;
	        cout<<"\n\tAge : 18";
}};

int main()
{
	
	details   *b;
		
	b=new details;
	b->display();
	
	b= new detail01;
	b->display();
	
	b=new detail02;       
	b->display();
	
	getch();
	return 0;
}
