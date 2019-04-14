#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

int main()
{
    ifstream fin;
	fin.open("New_Copy");
    if (fin.fail())            //or : (fin.good())  :  (fin.eof())
	cout<<"\n\n\t\t\tGood";
	else cout<<"\n\n\t\t\tBad";
	getch();

}
