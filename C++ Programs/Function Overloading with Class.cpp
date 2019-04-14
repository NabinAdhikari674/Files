#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

class fxn
{   public:
	int a,b;
	float c,d;
	char e,f;
	void display(int a)
	{
		cout<<"Integer : "<<a<<endl;
	}
	void display(float c)
	{
		cout<<"Float : "<<c<<endl;
	}
	void display(char e)
	{
		cout<<"Char : "<<e<<endl;
	}
	
};
 
 
int main()

{
  fxn f;
  cin>>f.a; f.display(f.a);
  cin>>f.c; f.display(f.c);
  cin>>f.e; f.display(f.e);
 
  
  
}
