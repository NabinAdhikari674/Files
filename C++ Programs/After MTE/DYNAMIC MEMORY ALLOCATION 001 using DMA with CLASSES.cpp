#include<iostream>
#include<conio.h>

using namespace std;

class test
{
	int n;
	float *ptr;
	public :
	test()
{
		cout<<"Enter the Total Number of the students :\n";
		cin>>n;
		ptr=new float[n];
		cout<<"Enter The GPA OF the students : \n";
	for (int i=0;i<n;i++)
    {
    	cout<<"\n\tStudent "<<i+1<<": ";
    	cin>>*(ptr+i);
	}
}
	~test()
	{
		delete [] ptr;
	}
		
	void display()
	{
    cout<<"\n\n\tTh GPA Of The students ARE :\n";
	for (int i=0;i<n;i++)
    {
    cout<<"\n\tStudent "<<i+1<<": "<<*(ptr+i);
	}		
	}	
	
};

int main()
{
	test t1;
	t1.display();
	getch();
	return 0;
}
