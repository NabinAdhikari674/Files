#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
class frnd
{
		public :
	int a;

		friend void display(frnd);
};
void display(frnd f)
{
	cout<<f.a;
	
}
int main()
{
	//frnd d;
	//cin>>d.a;
	//display(d);
	cout<<"Hello"<<endl<<"How are you";
}
