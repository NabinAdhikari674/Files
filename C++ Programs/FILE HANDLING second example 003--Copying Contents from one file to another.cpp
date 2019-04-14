#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;
int main()
{
	ifstream fin;
	fin.open("New.txt");
	
	ofstream fout;
	fout.open("New_Copy.txt");
	char ch;
	while (!fin.eof())
	{
		fin.get(ch);
		fout<<ch;
	}
	fin.close();
	fout.close();
	return 0;
}
