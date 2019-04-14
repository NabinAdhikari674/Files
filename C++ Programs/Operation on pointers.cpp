#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
		int a=10,b=20,*p,*q,*r1,*r2;
		p=&a;
		q=&b;
		  
		  
		cout<<"Pointer Values:\n"<<*p-*q<<endl;
	      cout<<*p+*q<<endl;
	      cout<<*p*(*q)<<endl; 
		  cout<<*p/(*q)<<endl<<"Now pointers:\n";
		//cout<<p+q<<endl;//addition of pointers cannot be done
		cout<<p-q<<endl;
		//cout<<p*q<<endl;//Multiplication of pointers cannot be done
		//cout<<p/q<<endl;//Division of pointers cannot be done
		  cout<<"Now values:\n"<<*p-b<<endl;
		  cout<<*p+b<<endl;
		  cout<<*p*b<<endl;
		  cout<<*p/b<<endl;
		 
}
