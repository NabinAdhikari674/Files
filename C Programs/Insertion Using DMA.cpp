#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,i,e,w;
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
   puts("Enter The Position Of Your New Element");
   scanf("%d",&e);
   puts("Enter The ELement You Want To Insert");
   scanf("%d",&w);
   e=e-1;
   for (i=n-1;i>=e;i--);
   {
   	*(p+i)=*(p+(i-1));
   	puts("s");
   }
   *(p+e)=w;
   
    for (i=0;i>n;i++);
    {
    	printf("\t%d",*(p+i));
    	
	}
}
