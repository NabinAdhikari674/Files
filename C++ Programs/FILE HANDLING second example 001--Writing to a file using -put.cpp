#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

int main()
{
	ofstream fin("New.txt",ios::out); // OR : ofstrean fin;   fin.open("New.txt",ios::out);
	char ch;
	cout<<"Enter any string. Use q to quit\n\n";
	cin>>ch;
	while (ch!='q')
	{
		fin.put(ch);
		cin>>ch;
	}
	fin.close();
	cout<<"Contents Added";
	getch();
	
	
}
