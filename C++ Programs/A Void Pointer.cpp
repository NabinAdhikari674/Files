#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
		int a=10;
		
		void *k;
		k=&a;
		cout<<k<<endl;
		//typecasting of void pointer...(int *)ptr..(char *)ptr...
		cout<<*(int*)k<<endl;
		float n=3.25;
		k=&n;
		cout<<*(float *)k;
}
