#include<iostream>
#include<conio.h>

using namespace std;

class student
{
	public :
	int reg;
	void getnumber()
	{
		cout<<"\n\n\tEnter Your Registration NO. :";
		cin>>reg;
	}
	void putnumber()
	{
		cout<<"\n\n\nThe Registration No is : "<<reg;
	}
};
class test :virtual public student
{
	public :
	int part1,part2;
	void getmarks()
	{
	   cout<<"\n\n\nEnter The marks :";
	   cout<<"\n\tPart 1 : ";
	   cin>>part1;
	   cout<<"\n\tPart 2 : ";
	   cin>>part2;	
	}
	void putmarks()
	{
	   cout<<"\n\n\nThe Marks Obtained Are :\n"<<"\nPart 1 : "<<part1<<"\nPart 2 : "<<part2; 	
	}	
};
class sports: public virtual student
{
	public :
		int score;
		void getscore()
		{
			cout<<"\n\n\n\tEnter The Sport Score";
			cin>>score;
		}
		void putscore()
		{
			cout<<"\n\n\nThe Sports Mark Secured IS : "<<score;
		}
};
class result :public test,public sports
{
	int total;
	public :
		void display()
		{
			total=part1+part2+score;
			putnumber();
			putmarks();
			putscore();
			cout<<"\n\n\tThe Total marks Is : "<<total;
		}
};

int main ()
{
	result obj;
	obj.getnumber();
	obj.getmarks();
	obj.getscore();
	obj.display();
	getch();
}

