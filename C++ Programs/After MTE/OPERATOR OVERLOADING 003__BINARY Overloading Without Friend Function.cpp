#include<iostream>
#include<conio.h>
using namespace std;

class bin
{
	int a,b;
	public :
	void input()
	{
	cout<<" \n\tEnter A and B : \nA : ";
	cin>>a;
	cout<<" \nB : ";  cin>>b;	
	}
	
	void output()
	{ 
	cout<<" The Values are \tA : "<<a<<"\tB : "<<b;	
	}
	
	bin operator+ (bin &b1)
	{
		bin temp;
		temp.a=this->a+b1.a;
		temp.b=this->b+b1.b;
		return temp;
	}
};

int main()
{ 
   bin ob1,ob2,ob3;
   ob1.input();   
   ob2.input();
   ob3=ob1+ob2;
   ob3.output();
   getch();
   
   
	
}
