#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;
class nabin
{
	public :
	int ht,wt;
	void input()
	{
		cout<<"\n\n\nEnter Your Height : ";
		cin>>ht;
		cout<<"Enter Your Weight : ";
		cin>>wt;
	}
	void output()
	{
		
		cout<<"Height :"<<ht<<"\tWeight :"<<wt;
	}
	
}n1,*p;
int main()
{   p=&n1;          //or, use (p=new nabin;)
	n1.input();
	n1.output();
	p->input();
	p->output();
}
	
