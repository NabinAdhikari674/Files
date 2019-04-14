#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n;
	cout<<"Enter The Total Number of The Students : ";
    cin>>n;
    int *ptr;
    int a[10];
    ptr=new int [10];
    cout<<"Enter The GPA of the Students : \n";
    for (int i=0;i<n;++i)
    {
    	cout<<"\n\tStudent "<<i+1<<": ";
    	cin>>*(ptr+1);
	}
	cout<<"\n\n\tTh GPA Of The students ARE :\n";
	for (int i=0;i<n;++i)
    {
    	cout<<"\n\tStudent "<<i+1<<": "<<*(ptr+1);
	}
	delete []ptr;
	getch();
	return 0;
}
