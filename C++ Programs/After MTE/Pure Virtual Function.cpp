#include<iostream>
#include<conio.h>
using namespace std;
                        
class base                       //Abstract Class--Class containing pure virtual function
{
	public :
		
	virtual	void show()=0;    //also {}//   //pure virtual function
};
class derived:public base
{
	public :
		void show()
		{
			cout<<"Implementation Of Virtual Function In Derived Class";
		}
};
int main()
{
//	base obj;  //this will not work because base class is the Abstract class
	base *b;
	derived d;
	b=&d;
	b->show();
	getch();
	return 0;
}
