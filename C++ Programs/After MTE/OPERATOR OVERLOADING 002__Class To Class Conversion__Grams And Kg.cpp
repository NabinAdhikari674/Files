#include<iostream>
#include<conio.h>
using namespace std;


class Grams
{
	int gm;
	public :
		int getgram()
		{
			cout<<"Enter The Value in Grams";
			cin>>gm;
			return gm;
		}
		Grams (): gm(1000) {}
};
class Kilos
{
	int kg;
	public :
		Kilos():kg(1) {}
		Kilos (Grams g)
		{
			kg=g.getgram()/1000;
	    }
	    void output ()
	    {
	    	cout<<"\n The Value is "<<kg<<" Kg";
		}
};
int main()
{
	Kilos kobj;
	Grams gobj;
	kobj=gobj;
	kobj.output();
	getch();
	
}
