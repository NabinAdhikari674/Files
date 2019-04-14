#include<iostream>


using namespace std;

class ss
{
	public :
		int val;
		static int num;
		void input()
		{
			cin>>num;
			cin>>val;
		}
		void output()
		{
			cout<<num<<endl<<val<<endl;
		}
};
 int ss::num=0;
main()
{
	ss s1,s2,s3;

	s1.input();
    s2.input();
	s3.input();
	s1.output();
	s2.output();
	
	s3.output();
	
}

