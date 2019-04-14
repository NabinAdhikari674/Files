#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;
int main()
{
	int i;
	
	ofstream fin;   
	fin.open("New_for_Integer.txt");
	for (i=1;i<101;i++)
	{
		fin.put(i);
	}
	fin.close();
	
		cout<<"Contents Added";
		getch();
	
}
