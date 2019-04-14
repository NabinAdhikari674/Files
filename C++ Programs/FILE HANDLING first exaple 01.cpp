#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
	char c,fname[10];
	ofstream out;
	cout<<"\nEnter the file name\n";
	cin>>fname;
	out.open(fname);
	cout<<"\n\nEnter The contents to store in the file\n";
	while((c=getchar())!='#')
	{
		out<<c;
	}
	out.close();
	getch();
	
}
