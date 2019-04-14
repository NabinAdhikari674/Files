#include<iostream>
#include<conio.h>
using namespace std;


class Kilos
{
	int kg;
	public :
	int getkg()
	{
		cout<<"Enter The Value in Kilo Grams : ";
		cin>>kg;
		return kg;	
	}
	Kilos (): kg(1000) {}
};
class Grams
{
	int gm;
	public :
	Grams():gm(1) {}
	Grams (Kilos k)
	{
	gm=k.getkg()*1000;
	}
    void output ()
    {
	cout<<"\n The Value is "<<gm<<" g";
	}
		
};

int main()
{
	Kilos kobj;
	Grams gobj;
	gobj=kobj;
	gobj.output();
	getch();
	
}

