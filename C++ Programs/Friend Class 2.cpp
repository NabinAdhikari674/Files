#include<iostream>
using namespace std;

class frnd1;
class frnd2
{
	public :
	void fxn(frnd1);
	
};

class frnd1
{
	int x,y;
    public:
	friend void frnd2 :: fxn(frnd1);
};

void frnd2::fxn(frnd1 f)
{
	cin>>f.x;
	cin>>f.y;
	cout <<f.x<<f.y;
};

int main ()
{
	frnd1 a;
	frnd2 b;
	b.fxn(a);
}
