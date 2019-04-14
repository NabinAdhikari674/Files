#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;
class stu
{
  public :
  char name[20];
  int rn;
  void get()
    {
  	cin>>name>>rn;
    } 
	
	void display()
	{
		cout<<name<<rn;
	}	
};
int main()
{
	ofstream of("student1.doc",ios::app);
	stu s1;
	s1.get();
	s1.display();
	of.write((char*)&s1,sizeof(s1));
	cout<<"\n\nRecord Entered\n\n";
	of.close();
	
	ifstream ifs("student1.doc");
	while (!ifs.eof())
	{
		ifs.read((char*)&s1,sizeof(s1));
		s1.display();
	}
	getch();
	
}
