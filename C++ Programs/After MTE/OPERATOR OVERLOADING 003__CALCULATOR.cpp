#include<iostream>
#include<conio.h>
using namespace std;


class calculator
{
	int a,b;
	public :
	void input()
	{
	cout<<"\n\tEnter A and B : \nA : ";
	cin>>a;
	cout<<" \nB : ";  cin>>b;	
	}
	
	void output()
	{ 
	cout<<" The Values are \tA : "<<a<<"\tB : "<<b;	
	}
	
	calculator operator+ (calculator &b1)
	{
		calculator temp;
		temp.a = (this->a)+b1.a;
		temp.b = (this->b)+b1.b;
		return temp;
	}
	calculator operator- (calculator &b1)
	{
		calculator temp;
		temp.a = (this->a)-b1.a;
		temp.b = (this->b)-b1.b;
		return temp;
	}
	calculator operator* (calculator &b1)
	{
		calculator temp;
		temp.a = (this->a)*b1.a;
		temp.b = (this->b)*b1.b;
		return temp;
	}
	calculator operator/ (calculator &b1)
	{
		calculator temp;
		temp.a = (this->a)/b1.a;
		temp.b = (this->b)/b1.b;
		return temp;
	}
};

int main()
{ int x;
   calculator ob1,ob2,ob3;
   ob1.input();   
   ob2.input();
   ob3=ob1+ob2;
   cout<<"\n\tBY Addition ";
   ob3.output();
   ob3=ob1-ob2;
   cout<<"\n\tBY Subtraction ";
   ob3.output();
   ob3=ob1*ob2;
   cout<<"\n\tBY Multiplication ";
   ob3.output();
   ob3=ob1/ob2;
   cout<<"\n\tBY Division ";
   ob3.output();
   
   getch();
   
   
	
}
