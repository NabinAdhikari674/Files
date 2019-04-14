#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("text.txt");
	cout<<"File is opened or created....\n\n";
	fout.close();
	const int N=100;
	char line[N];
	ifstream fin;
	fin.open("text.txt");
	cout<<"\n\nContents of the file are : \n\n";
	while (fin)
	{
		fin.getline(line,N);
		cout<<line<<endl;
		
	}
	fin.close();
	getch();
}
