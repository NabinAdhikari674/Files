#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>

using namespace std;
class box
{
	public:
		
		box(double l=2.0 ,double b=2.0,double h=2.0)
		{
			cout<<"Constructor Called"<<endl;
			length=l;
			breadth=b;
			height=h;
		}
		double volume()
		{
			return length*breadth*height;
		}
		
		int compare(box box)
		{
			return this->volume() >box.volume();
		}
		
		private:
			double length,breadth,height;
			
			
		};
  


int main()
{  

box box1(3.3,1.2,1.5);
box box2(8.5,6.0,2.0);

if (box1.compare(box2))
{
	cout<<"Box2 is smaller than box1"<<endl;
}
else
{
	cout<<"box2 is equal to or larger than box1";
}
	
}
