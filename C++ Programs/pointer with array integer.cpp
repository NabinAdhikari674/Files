#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;
class result
{  
public:
int m[3];
void input()
{
	cout<<"\n\n\nEnter the Details : ";
		for (int i=0;i<3;i++)
		{
		
     	cin>>m[i];
	    }
};
void output()
{
	cout<<"\n\n\nThe Details are: ";
	for (int i=0;i<3;i++)
	{
		cout<<m[i];
	}
};

}*r1;
int main()
{  r1=new result;
		r1->input();
	r1->output();
}
