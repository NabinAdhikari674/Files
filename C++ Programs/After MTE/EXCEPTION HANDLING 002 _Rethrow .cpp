#include<iostream>
using namespace std;

class A
{
	int x;
	public :
		void read()
		{
			cin>>x;
			try
			{
				if (x>0)
				{
					throw x ;
				}
			}
			catch(int p)
			{
				cout<<" The Value of the data x is more than zero : "<<p;
				throw;
			}
		}
};
int main()
{
	A a;
	try
	{
		a.read();
	}
	catch (int q)
	{
		q=q+10;
		cout<<"\n\nInside main() catch is running and it is modifying the value of q :"<<q;
	}
	return 0;
}
