#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;
int main()
{
	string line;
	ifstream myfile("Exam.txt");
	if (myfile.is_open())
	{
		while(getline(myfile,line))
		{
			cout<<line<<"\n";
		}
		myfile.close();
	}
	else
	cout<<"Unable to open the file";
	getch();
}
