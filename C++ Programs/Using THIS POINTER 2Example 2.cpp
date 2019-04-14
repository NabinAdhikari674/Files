#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>

using namespace std;
class marks
{
	public:
		
		student(int m1=20 ,int m2=50,int m3=80)
		{
			cout<<"Constructor is Called"<<endl;
			marks1=m1;
			marks2=m2;
			marks3=m3;
		}
		int total()
		{
			return (marks1+marks2+marks3);
		}
		
		int compare(marks,marks)
		{
			return this->total() > marks.total();
		}
		
		private:
			int marks1,marks2,marks3;
			
			
		};
  


int main()
{  

marks stu1(30,92,95);
marks stu2(85,60,90);

if (stu1.compare(stu2))
{
	cout<<"Student2 has smaller TOTAL than Student1"<<endl;
}
else
{
	cout<<"Student2 has equal TOTAL or larger TOTAL than Student1";
}
	
}
