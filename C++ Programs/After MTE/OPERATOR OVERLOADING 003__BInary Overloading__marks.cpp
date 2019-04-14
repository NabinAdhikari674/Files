#include<iostream>
#include<conio.h>
using namespace std;

class marks 
{
	int th,pr;
	public :
		
		void get()   {cout<<" \n\tEnter Marks : \nTheory :";cin>>th;  cout<<" \nPractical : ";cin>>pr; }
		void show()  {cout<<th<<" \t"<<pr;}
		friend marks operator+ (marks op1,marks op2);
};
marks operator+ (marks op1,marks op2)
{
	marks temp;
	temp.th=op1.th+op2.th;
	temp.pr = op1.pr+op2.pr;
	return temp;
}
int main()
{
	marks ob1,ob2,ob3;
	ob1.get(); ob2.get();
	ob3=ob1+ob2;
	ob3.show();
	
	getch();
	return 0;
}
