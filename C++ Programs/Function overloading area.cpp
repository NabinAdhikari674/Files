#include<iostream>

using namespace std;
 
 void area(int,double);
 void area(int,int);
 void area(int);
 
 void area(int a, double b)
 {
 	double c=(a*a)*b;
 	cout<<c<<endl;
 }
 void area(int a,int b)
 {
 	int c=a*b;
 	cout<<c<<endl;
 }
 void add(int a)
{
	int c=a*a;
	cout<<c<<endl;

}
int main()
{
	area(10,3.14);
	area(2,2);
	area(8);
}


