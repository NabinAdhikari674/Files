#include<iostream>
#include<conio.h>
using namespace std;

class first
{
	public :
	int a;
	void message()
	{
		cout<<"This is Class first";
	}
};
class second 
{   public :
	int a;
	void message()
	{
		cout<<"This message Is from Class Second";
	}
};
class third :public first,public second
{
	public :
	int a;
/*	void message()
	{
		cout<<"This Is The Message Shown From Class Third";
	}
*/
};
int main()
{
	third t1;
	cout<<"\n\n\t\tCALLING FIRST FUNCTION....\n\n";
	t1.first :: message();
	cout<<"\n\n\t\tCALLING SECOND FUNCTION ...Press Enter...\n\n";
	getch();
	t1.second :: message();
	getch();
	
}









