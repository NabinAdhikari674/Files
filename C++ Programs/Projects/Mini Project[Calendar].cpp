#include <iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
#include<fstream>
#include<time.h>
using namespace std;

class calendar
{
	public:
	int month,year,first_day, n_days;
    int r;

void input()    
{
	cout << "\n\n\tEnter the year : ";
    cin >> year;
if (year<1999)
{
cout<<"\n\n\t\t!!!!! Please Enter Year Ahead Than 1999 !!!!!\n";
cin>>year;
}
	cout << "\n\n\tEnter the month : ";
	cin >> month;
if(month>12||month<1)
{
cout<<"\n\n\t\t!!!!! Please Enter Valid Month !!!!!\n";
cin>>month;
}	
	cout << endl;
}
void firstday()
{ 
 for(r=1999;r<year;r++)
 {
    if(r%4==0)
    {
     if(r%100==0)
     {
        if(r%400==0)
        first_day=first_day+2;
        else
        first_day++;
     }
     else
     first_day=first_day+2;
    }
    else
    first_day++;
    if(first_day==7)
    first_day=0;
    if(first_day==8)
    first_day=1;
 } 
}
void monthswitch()
{
switch (month)
{

case 2:  
if((year%400==0) || (year%4==0 && year%100 !=0))
	n_days = 29;
else
    n_days = 28;
break;

    case 4:case 6:case 9:case 11:
	n_days = 30;
	break;
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    n_days = 31;
    break; 
	}
            
}
void display()
{
	
    cout << endl << "Sun\tMon\tTue\tWed\tThr\tFri\tSat\n";
    for (int i = 1; i < first_day; i++)
    {
        cout << " \t";
    }
    for (int j = 1; j <= n_days; j++)
    {
        if (((j + first_day - 2) % 7 == 0) && (j != 1))
            cout << endl;
        cout << j  << "\t";
    }
    cout << endl << endl;
}
	
}c11;




class noteclass
{
	public :
	struct notes
	{
		int month,year,date;
		char notestring[200];
	}n99;
	void inputnote()
{
	cout<<"\n\n\tENTER THE DATE FOR PLAN/NOTE :\n"<<"\n\tDate : ";
	cin>>n99.date;
	cout<<"\n\tMonth : ";
	cin>>n99.month;
	cout<<"\n\tYear : ";
	cin>>n99.year;
	cout<<"\n\tEnter Your Plan/Note : \n\t";
	cin>>n99.notestring;
	ofstream outnote("calendar.txt",ios::app);
    if(!outnote) 
	{
    cout<<"\n\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  File is not Opened  !!!!!!!!!!!!!!!!!!!!!!!!!!";
    outnote.close();
    }

    outnote.write((char *) &n99,sizeof(struct notes));
    outnote.close();
}
 
    void displaynote()
{
	int i=1;
  ifstream innote("calendar.txt", ios::in);
  if(!innote) 
  {
    cout <<"\n\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  File is not Opened  !!!!!!!!!!!!!!!!!!!!!!!!!!";
    innote.close();
  }
  cout<<"\n\n\t\t#####  All The PLANS/NOTES Saved  #####\n";
  while((innote.read((char *) &n99, sizeof(struct notes))));
  {
  cout<<"\n\n.......................................................................................................................\n\n";
  cout<<"\n\t"<<i<<")";	
  cout<<"\n\tDATE OF PLAN/NOTE : ";
  cout<<"\n\t\tDate: "<<n99.date<<"\n\t\tMonth: "<<n99.month<<"\n\t\tYear: "<<n99.year;
  cout<<"\n\n\tPLAN/NOTE : "<<"\n\n\t "<<n99.notestring;
  cout<<"\n\n.......................................................................................................................\n\n";
  i++;
  }
  innote.close();
}
	
	
}not11;





class choice :public calendar
{
public:
	void menufunction()
	{
	cout<<"\n\n\t\t\t\t\t\t\t    CHOOSE A OPTION\n";
	cout<<"\n\t\t\t1. View Current Date And Time";
	cout<<"\n\t\t\t2. View Calender Of Any Month";
	cout<<"\n\t\t\t3. ADD A New Plan/Note";
	cout<<"\n\t\t\t4. View All Plannings/Notes";
    cout<<"\n\t\t\t5. EXIT";
	cout<<"\n\n...............................................Enter Your Choice.....................................................\n\t";
	}
	void choosing()
	{
	choice co11;
	int cho;
	cho=getch();
	int c;
	c=cho;	
	switch(c)		
	{
	case 49:
	time_t t;
    time(&t);
    cout<<"\n\n\tTODAY'S DATE AND TIME : "<<ctime(&t)<<"\n\n\n";
    cout<<"\n\n\t\t\t\t\t\t\t******* CHOOSE A OPTION *******\n";
    cout<<"\n\t\t\t1. View Main Menu";
    cout<<"\n\t\t\t2. Exit";
	int chos;
	chos=getch();
	int co;
	co=chos;	
	switch(co)
	{
		case 49 :
			co11.menufunction();
	        co11.choosing();
	        break;
	    case 50:
	    	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t!!!!!  EXITING  !!!!!\n\n";
		    cout<<"PRESS ENTER";
	    	break;
	}
	        break;
	case 50:
	        c11.input();
	        c11.firstday();
            c11.monthswitch();
	        c11.display();
	cout<<"\n\n\t\t\t\t\t\t\t******* CHOOSE A OPTION *******\n";
    cout<<"\n\t\t\t1. View Main Menu";
    cout<<"\n\t\t\t2. Exit";
	chos=getch();
	co=chos;	
	switch(co)
	{
		case 49 :
			co11.menufunction();
	        co11.choosing();
	        break;
	    case 50 :
	    	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t!!!!!  EXITING  !!!!!\n\n";
		    cout<<"PRESS ENTER";
	    	break;
	}
	        break;
	        break;
	case 51:
	        not11.inputnote();
	cout<<"\n\n\t\t\t\t\t\t\t******* CHOOSE A OPTION *******\n";
    cout<<"\n\t\t\t1. View Main Menu";
    cout<<"\n\t\t\t2. Exit";
	chos=getch();
	co=chos;	
	switch(co)
	{
		case 49 :
			co11.menufunction();
	        co11.choosing();
	        break;
	    case 50 :
	    	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t!!!!!  EXITING  !!!!!\n\n";
		    cout<<"PRESS ENTER";
	    	break;
	}
	        break;
	        break;
	case 52:
	        not11.displaynote();
	cout<<"\n\n\t\t\t\t\t\t\t******* CHOOSE A OPTION *******\n";
    cout<<"\n\t\t\t1. View Main Menu";
    cout<<"\n\t\t\t2. Exit";
	chos=getch();
	co=chos;	
	switch(co)
	{
		case 49 :
			co11.menufunction();
	        co11.choosing();
	        break;
	    case 50 :
	    	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t!!!!!  EXITING  !!!!!\n\n";
		    cout<<"PRESS ENTER";
	    	break;
	}
	        break;
	        break;
	case 53:
		    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t!!!!!  EXITING  !!!!!\n\n";
		    cout<<"PRESS ENTER";
	        break;	
	

}}
}choice11;








void mainmenu()
{
	
}
int main()
{
	cout<<"\n\t\t\t\t\t############# ACADEMIC CALENDER cum PLANNER #############  ";
	choice11.menufunction();
	choice11.choosing();
	
	
	getch();
    return 0;
}
