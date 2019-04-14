#include<iostream>
#include<conio.h>
using namespace std;

template <class T>
class sample 
{
	T v1,v2,v3;
	public :
		void getdata();
		void sum();

};
int main()
{
	sample <int> ob1;
	sample <float> ob2;
	ob1.getdata();
	ob1.sum();
	ob2.getdata();
	ob2.sum();
	
	getch();
	return 0; 	
}

template <class T>

void sample<T>::getdata()
{
  cin>>v2>>v3;	
}
template <class T>
void sample<T> :: sum()
{
	T v1;
	v1=v2+v3;
	cout<<" The Sum is = "<<v1;
}

