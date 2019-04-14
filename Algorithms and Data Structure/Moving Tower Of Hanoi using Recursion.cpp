#include<iostream>
#include<stdlib.h>
using namespace std;
void tower(int num,char Beg,char Aux,char End)
{

if(num>=1)
{
tower(num-1,Beg,End,Aux);
cout<<"Move disk "<<num<<" from "<<Beg<<" to "<<End<<endl;
tower(num-1,Aux,Beg,End);
}
}
int main()
{

int N;
cout<<"Enter the number of disk: ";
cin>>N;
tower(N,'B','A','E');
}
