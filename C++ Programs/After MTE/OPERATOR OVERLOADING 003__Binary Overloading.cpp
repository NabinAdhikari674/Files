#include<iostream>
#include<conio.h>
using namespace std;

class Point 
{
	int x,y;
	public :
		
		void get()   {cin>>x>>y;}
		void show()  {cout<<x<<y;}
		friend Point operator+ (Point op1,Point op2);
};
Point operator+ (Point op1,Point op2)
{
	Point temp;
	temp.x=op1.x+op2.x;
	temp.y = op1.y;
	return temp;
}
int main()
{
	Point ob1,ob2,ob3;
	ob1.get(); ob2.get();
	ob3=ob1+ob2;
	ob3.show();
	getch();
	return 0;
}
