#include<dos.h>
#include<iostream>
#include<conio.h>
#include<process.h>
#include<time.h>
using namespace std;
/* This Class is used for generating calendar */
class calen
{
 int days; /* Will have no. of days a month has */
 int mm; /* Month Iterator variable [1-12] */
 int k; /* Days Iterator [ 0 till the days in month ] */
 int z; /* Iterator Variable */
 int p; /* Start day of every month e.g. 5 for friday */
 int yy; /* User Entered year */
 int r; /* Year Iterator variable */
 int calen[5][7]; /* The Matrix stores all required dates */
 int i,j; /* Iterator Variables */
 int mon; /* User entered month */
 public:
 void calen_call(void);
 void display(void);
};

int main()
{

 calen c;
 c.calen_call();
 c.display();
 getch();
}

void calen::calen_call(void)
{

 int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};

 time_t t;
 time(&t);
 cout<<"\n\n\n\t\t\tCALENDAR FROM YEAR 2000...\n\n\n";
 cout<<"\n\nTODAY'S DATE AND TIME: "<<ctime(&t);
 repeat:

 cout<<"\n\nENTER YEAR [2000 ...] : ";
 cin>>yy;

 if(yy<=1999)
 {
    cout<<"\n\nWRONG ENTRY";

    goto repeat;
 }

 if(yy%4==0)
 {
    if(yy%100==0)
    {
     if(yy%400==0)
     month[1]=29;
     else
     month[1]=28;
    }
    else
    month[1]=29;
 }

 again:
 cout<<"\nENTER MONTH [1-12] :";
 cin>>mon;

 if(mon>12||mon<1)
 {
    cout<<"\nWRONG ENTRY";

    goto again;
 }

 cout<<"\n\n\t\t\t\tYEAR "<<yy<<"\n\n";

 switch(mon)
 {
    case 1:cout<<"\n\n\t\t\t\tJANUARY\n\n";break;
    case 2:cout<<"\n\n\t\t\t\tFEBRUARY\n\n";break;
    case 3:cout<<"\n\n\t\t\t\tMARCH\n\n";break;
    case 4:cout<<"\n\n\t\t\t\tAPRIL\n\n";break;
    case 10:cout<<"\n\n\t\t\t\tOCTOBER\n\n";break;
    case 11:cout<<"\n\n\t\t\t\tNOVEMBER\n\n";break;
    case 5:cout<<"\n\n\t\t\t\tMAY\n\n";break;
    case 6:cout<<"\n\n\t\t\t\tJUNE\n\n";break;
    case 7:cout<<"\n\n\t\t\t\tJULY\n\n";break;
    case 8:cout<<"\n\n\t\t\t\tAUGUST\n\n";break;
    case 9:cout<<"\n\n\t\t\t\tSEPTEMBER\n\n";break;
    case 12:cout<<"\n\n\t\t\t\tDECEMBER\n\n";break;
    default:cout<<"\n\nWRONG ENTRY";exit(0);
 }
 /* Start day of year 1999 i.e. Friday 1st January 1999 */
 p=5;
 /* Determination of start day of entered year [Calculating from 1999] */
 for(r=1999;r<yy;r++)
 {
    if(r%4==0)
    {
     if(r%100==0)
     {
        if(r%400==0)
        p=p+2;
        else
        p++;
     }
     else
     p=p+2;
    }
    else
    p++;
    /* Resseting of start variable if last day is reached */
    if(p==7)
    p=0;
    if(p==8)
    p=1;
 }
 /* Start of Month iteration for entered year */
 for(mm=0;mm<12;mm++)
 {
    /* Number of days a month has. Takes from the array defined above */
    days=month[mm];
    /* Start of days from */
    k=0;
    /* Setting all values in first row to 0 */
    for(z=0;z<7;z++)
    calen[0][z]=0;
    /* Looping through the rows and columns of calen */
    for(i=0;i<5;i++,p=0)
    for(j=p;j<7&&k<days;j++)
    {
     /* Adding of days to the matrix */
     calen[i][j]=k+1;
     k++;
     /* Checking for finish of days */
     if(k==days&&i==4&&j<7)
     {
        /* Setting of remaining values to 0 */
        for(p=j+1;p<7;p++)
        calen[i][p]=0;
     }
     /* Putting values on first row if matrix is finished */
     if(k<days&&i==4&&j==6)
     {
        for(p=0;p<7&&k<days;p++,k++)
        calen[0][p]=k+1;
        j=p-1;
     }
     /* Setting of j to -1 when days are finished */
     if(k==days&&i==4&&j==6)
     {
        j=-1;
     }
     /* Special Check if days finish in 4th row e.g. 2009 february */
     if(k==days&&i==3&&j==6)
     {
        /* Setting of final row to 0 */
        for(p=0;p<7;p++)
        calen[4][p]=0;
     }
    }
    /* Resetting of start day for next month */
    p=j;
    /* Returning of loop if desired month is found */
    if(mm+1==mon)
    return;
 }
}
/* Displays the values of Calen array */
void calen::display()
{
 /* Printing of day names */
 cout<<"\n\tSUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n\n";
 /* Start of loop of rows */
 for(i=0;i<5;i++)
 {
    /* Start of loop of columns */
    for(j=0;j<7;j++)
    cout<<"\t"<<calen[i][j];
    cout<<"\n\n";
 }

 getch();
}
