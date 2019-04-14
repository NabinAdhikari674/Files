#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;
int main()
{
	ifstream fin;
	fin.open("New.txt");
	char str[100];
	int count=0;
	while(!fin.eof())
	{
		fin.getline(str,100);
		cout<<str<<endl;
		count++;
	}
	cout<<"\n\nThe NO. of lines is :"<<count;
	fin.close();
	getch();
}
