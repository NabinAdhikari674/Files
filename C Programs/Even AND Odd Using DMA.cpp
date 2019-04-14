#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,i,e=0,o=0;
	int *p;
	puts("\nEnter The No Of Elements You Want To Input");
	scanf("%d",&n);
	p=(int*)malloc(n*4);
	if (p==NULL)
	{
		puts("\n\nMemory Cannot Be Allocated");
		return 0;
	}
	puts("\nENTER The Elements");
	for (i=0;i<n;i++)
	{
	scanf("%d",(p+i));
    }
    for (i=0;i<n;i++)
    {
    	if (*(p+i)%2==0)
       {
         e++;
	   }    
	else
	o++;
	}
	printf("\n\t\t*TOTAL Even No. Are:%d\n\t\t*TOTAL Odd  No. Are:%d",e,o);
	puts(" \nEven No. Are:");
	for (i=0;i<n;i++)
	{
		if (*(p+i)%2==0)
		{
			printf("\t%d",*(p+i));
		}
	}
	puts("\nOdd No. Are:");
	for (i=0;i<n;i++)
	{
		if (*(p+i)%2!=0)
		{
			printf("\t%d",*(p+i));
		}
	}
	free(p);
	return 0;
}
