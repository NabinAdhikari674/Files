#include<iostream>
#include<conio.h>

using namespace std;

class count
{
	public :
  static int c1;
  int c2;
  void input()
  {
  	cin>>c1;
  	cin>>c2;
  }
 static void output()
 {
 	cout<<"\n\n\n\nThe value of static int c1 is : "<<c1;
 	cout<<"\n\n\n\nThe value of non-static int c2 is : "<<c1;
 	
 }
  
  
};
int main()
{
	count cn1;
	cn1.input();
	cn1.output();
	getch();
}
