#include<iostream>
#include<conio.h>

using namespace std;

class marks
{
  int *m1,*m2,*m3;
  public :
  marks(int a,int b,int c)
  {
  	m1=&a;
  	m2=&b;
  	m3=&c;
  	cout<<"\n\nConstructor called\n\n";
  	cout<<"\nThe marks are : \nm1:"<<*m1<<"\nm2:"<<*m2<<"\nm3:"<<*m3;
  }
  ~marks()
  {
  	cout<<"\n\nDestructor called\n";
    cout<<"\nThe marks are : \nm1:"<<*m1<<"\nm2:"<<*m2<<"\nm3:"<<*m3;
  }
  void total()
  {
  	int t;
  	t=(*m1)+(*m2)+(*m3);
  	cout<<"\n\t\tThe total is : "<<t;
  }
  
};
int main()
{ 
  marks *o1;
  o1=new marks(20,30,40);
  o1->total();
  cout<<"\n\nEnd of main\n\n";
  delete o1;
	
	
getch();	
}


