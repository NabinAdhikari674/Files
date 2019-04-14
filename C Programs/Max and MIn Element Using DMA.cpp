#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,i,max,min;
	int *p;
	puts("Enter Value For n");
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
    if (max<(*(p+i)))
    {
	    max=*(p+i);
	}    
    
	}
	min=*p;
	max=*p;
	for (i=0;i<n;i++)
	{

    if (max<(*(p+i)))
    {
	    max=*(p+i);
	}   
	else if (min>(*(p+i)))
	{
		min=*(p+i);
	 } 
    
	}
	printf("\tThe Maximum Element is: %d\n\tThe Minimum Element is: %d",max,min);
	
    free(p);
    return 0;
}
