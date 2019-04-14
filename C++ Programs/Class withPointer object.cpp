#include<iostream>
#include<string.h>
using namespace std;
class nabin

{   public:
  
   int regn;
   string name;
	void input();

	void output()
	{
		cout<<name<<endl<<regn;
	}
}*n;
  void  nabin ::input()

		{
		cin>>name;
		cin>>regn;
		
	}


int main()
{
	n->input();
	n->output();
}
