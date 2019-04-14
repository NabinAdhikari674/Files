#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class a;
class b
{
	public:
		void hello(a);
 };
 class a
 {
 	int var;
 	friend void b::hello(a);
 };
 void b::hello(a x)
 {  float c=5.886595455545;
 	cin>>x.var;
 	cout<<setw(10)<<setprecision(2)<<c<<"\t\t\t"<<x.var;
 };
 
 int main ()
 {  
    a o1;
    b o2;
 	o2.hello(o1);
 } 
