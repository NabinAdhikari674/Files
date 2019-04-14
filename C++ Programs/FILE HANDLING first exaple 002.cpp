#include<iostream>
#include<fstream>
#include<conio.h>
 using namespace std;
 
 int main()
 {
 	char c;
	ofstream out;
	out.open("Fille.txt");
	cout<<"\n\nEnter The contents to store in the file\n";
	while((c=getchar())!='#')
	{
		out<<c;
	}
	out.close();
	getch();
 }
