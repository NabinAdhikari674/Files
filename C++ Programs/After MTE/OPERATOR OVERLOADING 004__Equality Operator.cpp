#include<iostream>
#include<conio.h>

using namespace std;

class calculator
{
	int a,b;
	public :
	void input()
	{
	cout<<"\n\tEnter A : ";
	cin>>a;
	}
	
	bool operator ==(calculator x)
	{
		if (this->a==x.a)
		return 1;
		else 
		return 0;
	}
	
};

int main()
{ int x;
   calculator ob1,ob2;
   cout<<"\n\nEnter for object1";
   ob1.input();
   cout<<"\n\nEnter for object2";   
   ob2.input();
   if (ob1==ob2)
   {
   	cout<<"ob1 is EQUAL to ob2";
   }
   else 
   {
   	cout<<"ob2 and ob1 are NOT EQUAL";
   }
   getch();
   
   
	
}
