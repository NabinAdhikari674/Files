#include<iostream>
#include<string.h>
using namespace std;
 void add(int,int);
 void add(int,double);
 void add(double,double);
 void add(char,char);
 
 void add(int a,int b)
 {
 	int c=a+b;
 	cout<<c<<endl;
 }
 void add(int a,double b)
 {
 	double c=a+b;
 	cout<<c<<endl;
 }
 void add(double a,double b)
{
	double c=a+b;
	cout<<c<<endl;

}
void add(char a,char b)
{
	int c=a+b;
	cout<<c<<endl;
}
int main()
{
	add(10,20);
	add(22,40.5);
	add(22.5,33.2);
	add('a','b');
}


