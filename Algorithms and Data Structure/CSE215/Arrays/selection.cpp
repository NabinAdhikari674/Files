#include<iostream>
#include<conio.h>
using namespace std;
main()
{      int ar[5],i,in=0,min,t;

for(i=0;i<5;i++)
{
                cin>>ar[i];
                }
 /*min=ar[0];               
     for(i=1;i<5;i++)
{
   if(ar[i]<min)
   {
   min=ar[i];
   in=i;
}}
   cout<<endl<<in<<"  "<<min<<endl;
t=ar[0];
ar[0]=min;
ar[in]=t;
*/
for(int i=1; i<5; i++)
{
        int ptr=i-1;
        int t=ar[i];
        while(ptr>=0 && t<ar[ptr])
        {
                     ar[ptr+1]=ar[ptr];
                     ptr=ptr-1;
        }
        ar[ptr+1]=t;
}


for(i=0;i<5;i++)
{
                cout<<ar[i]<<"  ";
                }
    
      
      getch();
      }
