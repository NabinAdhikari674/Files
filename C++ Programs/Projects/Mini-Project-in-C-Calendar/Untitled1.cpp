#include<iostream>
#include<conio.h>
#include<iomanip.h>

using namespace std;
int main()


{
	
	int month,year,first_day, n_days;
    int r;    
	cout << "\n\n\tEnter the year : ";
    cin >> year;

	cout << "\n\n\tEnter the month : ";
	cin >> month;
	cout << endl;
 
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
switch (month)
{
case 2:  

if((year%400==0) || (year%4==0 && year%100 !=0))

	n_days = 29;

else
    n_days = 28;
    
break;
    case 4:
    case 6:
    case 9:
    case 11:
	n_days = 30;
	break;
	case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    n_days = 31;
    break; 
}
	
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

