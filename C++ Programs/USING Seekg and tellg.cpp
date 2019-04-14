#include<iostream>
#include<conio.h>
#include<fstream>

using namespace std;

int main()
{
	ifstream file;
	file.open("New.txt");
	if (!file)
	{
		cout<<"File Cannot open Correctly";
	//exit(1);	
	}
	file.seekg(3,ios::beg);
	int x1=file.tellg();
	cout<<"\n\nSize of file is : "<<x1;
	
	
	file.seekg(-2,ios::cur);
	int x=file.tellg();
	cout<<"\n\nSize of File is : "<<x;
	getch();
	
}
