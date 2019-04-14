#include<iostream>
using namespace std;
  class hello
 {
 	int a;
 	public :
 	friend void display(hello);
 }h;
 void display(hello)
 {  
 	cin>>h.a;
 	cout<<endl<<h.a;
 }
 int main()
 {
 	display(h);
 }
 
