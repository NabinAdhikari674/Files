#include<iostream>
#include<fstream>

using namespace std;

class abc
{
	 public :
  int a,b;
  abc()
    {
    	char ch;
   	 ifstream fin("New.txt");
	 while(!fin.eof())
    {
    	fin.get(ch);
    	a=ch;
    	cout<<ch;//to view in integer : printf("%d",&ch);
	}
    }
   void input()
    {
   	ofstream fin("New.txt",ios::out);
	cout<<"\n\n\nEnter any Number. Use 13 to quit\n\n";
	cin>>a;
	while (a!=13)
	{
		fin.put(a);
		cin>>a;
	}
	fin.close();
	cout<<"Contents Added";
    } 	
};

int main()
{   
    abc a1;
	cout<<"\n\n\n\n\t\tInput To the file";
	a1.input();
	
}
