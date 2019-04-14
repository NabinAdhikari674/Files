#include<iostream>
#include<string.h>


using namespace std;

class account
{
	public :
		int no;
		static int bal;
		string nam;
		void input()
		{
			cout<<"\n\n\tEnter the name and ac no\n";
			cin>>nam;
			cin>>no;
			bal=bal+200;
		}
		void output()
		{
			cout<<"The Name is "<<nam<<endl<<"The Ac No is "<<no<<endl<<"The Balance is :"<<bal;
		}
}s1,s2,s3;
 int account::bal=100;
main()
{


	s1.input();
	s1.output();
	s2.input();
	s2.output();
	s3.input();
	s3.output();
	
	
}

