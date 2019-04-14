#include<iostream>
#include<conio.h>

using namespace std;
class rectangle
{  public:
  int l,b,a,p;
  void input()
  {
  	cout<<" Enter The Value for length : ";
  	cin>>l;
  	cout<<"\n Enter The Value for breadth : ";
  	cin>>b;
  	 
  }
  void output()
  {
  	
  	cout<<"The Area Of the rectangle is : "<<a<<" square centimeters";
  }
	
}r1;

class area:public rectangle
{
    public:
	void area11()
    {
	a=l*b;
	}	
}a1;

class parameter:public rectangle
{
	public: 
    void para()
    {
	cout<<"\nThe parameter is : "<<(l+b);
    }
}p1;
int main()
{
	a1.input();
	a1.area11();
	a1.output();
    a1.para(); 
	getch();
}
