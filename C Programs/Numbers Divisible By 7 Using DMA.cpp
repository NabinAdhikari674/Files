#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,i,c=0;
	int *p;
	puts(" Enter the value for n");
	scanf("%d",&n);
	p=(int*)malloc(n*4);
	if (p==NULL)
	{
		puts("\n\nMemory Cannot Be Allocated");
		return 0;
	}
	puts("Enter the elements");
	for (i=0;i<n;i++)
    {   scanf("%d",(p+i));
    	if (*(p+i)%7==0)
       {
         c++;
	   }   
    }  
    printf("\n\tTOTAL No. Of Elements Divisible By 7 are: %d\n",c);
    puts("\nThe No. Divisible By 7 Are :");
    for (i=0;i<n;i++)
    {
    	if (*(p+i)%7==0)
       {
          printf("\t%d",*(p+i));
       }
    }
free(p);
return 0;
}
