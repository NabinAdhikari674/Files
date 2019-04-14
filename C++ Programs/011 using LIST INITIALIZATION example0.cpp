#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

class rec
{   public:
	int l,b;
	
	rec(int x,int y):l(x),b(y){}
	//for default constructor :
	//rec():l(10),b(20){}
	void area()
	{
		cout<<" Area is :"<<l*b;
	}
	
};
int main()
{
	rec r1(10,12);
	r1.area();
	
}
