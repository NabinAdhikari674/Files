#include<iostream>
#include<conio.h>
using namespace std;

class frnd
{
	int x;
	public:
		friend void print(frnd);
};
void print (frnd f)
{
	cin>>f.x;
	cout<<endl<<f.x;
}
int main()

{
	frnd z;
	print(z);
	
}
