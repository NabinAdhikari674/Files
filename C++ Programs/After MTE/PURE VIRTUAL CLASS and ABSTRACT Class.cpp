#include<iostream>
#include<conio.h>
using namespace std;

class student
{
	public:
	int x;
	virtual void studentype()=0;
	void details()
	{
		cout<<"Enter The Value : \n";
		cin>>x;
		cout<<"The Value Is : \n";
		cout<<x;
	}	 
};
class students1 :public student
{
	public :
	void studentype()
	{
		cout<< "The student Type is MajorCSE";
	}
};
int main()
{
	student *s1;
	s1->details();
	s1=new students1;
	s1->studentype();
	getch();
	return 0;
}
