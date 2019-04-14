#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;
class stu
{   
  public :
    string nam;
    int regn;
    void input()
    {
    	cin>> nam;
    	cin>>regn;
	}
}s;

int main()
{
  s.input();
  cout<<endl;
  int stu:: *p=&stu::regn;
  //cin>>s.*p;
  cout<<s.*p<<endl;
  string stu::*n=&stu::nam;
  //cin>>s.*n;
  cout<<s.*n;
  
}
