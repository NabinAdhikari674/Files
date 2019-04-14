#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

template <class T>
class sample 
{
	T m1,m2,m3,reg,roll,name;
	public :
		void getdetails();
		void getmarks();
		void show();
		void sum();
		

};
int main()
{
	sample <int> ob1;
	sample <string> ob2;
	ob2.getdetails();
	ob1.getmarks();
	ob2.show();
	ob1.sum();
	getch();
	return 0; 	
}

template <class T>

void sample<T>::getdetails()
{
	cout<<"\nEnter Your Name : ";
  cin>>name;	
}
template <class T>

void sample<T>::getmarks()
{
  cout<<"\n\tEnter Your Reg NO. : ";
  cin>>reg;
  cout<<"\n\tEnter Your Roll NO. : ";
  cin>>roll;	
  cout<<"\n\tEnter Your Marks : \n";
  cin>>m2>>m3;	
}
template <class T>
void sample<T> :: show()
{
	cout<<"\n\n\tYour Name :"<<name;
}
template <class T>
void sample<T> :: sum()
{
	T m1;
	m1=m2+m3;
	cout<<"\n\tYour Details :"<<"\tREG NO. :"<<reg<<"\tRoll NO. :"<<roll;
	cout<<"\n\tThe Total Marks is = "<<m1;
}

