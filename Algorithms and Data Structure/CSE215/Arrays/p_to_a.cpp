#include<stdio.h>
#include<conio.h>
main()
{
      int ar[12]={1,2,3,4,5,6,10,20,2,22,222,2222};
      int *p;
      p=ar;
      
      for(int i=0;i<12;i++){
    
      
      printf("add=%d  value=%d\n",(p+i),*(p+i) );
      }
         
              getch();
              }
