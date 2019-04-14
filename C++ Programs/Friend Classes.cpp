#include<iostream>
#include<conio.h>
using namespace std;
class ONE;
class TWO
{
	 public:
	 	void print(ONE);
	 	
};
class ONE
{
	int a,b;
	friend void TWO :: print (ONE x);
	public :
		
};
void TWO::print(ONE x)
{
	cin>>x.a>>x.b;
	cout<<"a is "<<x.a<<endl;
	cout<<"\n\nb is "<<x.b<<endl;
  }  
  
  int main()
  {
  	ONE xobj;
  	TWO yobj;
  	yobj.print(xobj);  
  }
