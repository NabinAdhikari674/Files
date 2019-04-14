#include<stdio.h>
#include<stdlib.h>
main ()
{
	int n,i,s=0;
	int *p;
	puts(" Enter the value For n");
	scanf("%d",&n);
	p=(int*)malloc(n*4);
	if (p==NULL)
	{
		puts(" NO MEMORY IS AVAILABLE");
	}
	puts("Enter The Elements");
	for (i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	    s=s+(*(p+i));
	}
	printf(" The sum of all Elements: %d",s);
	free(p);
	return 0;
	
}
 
