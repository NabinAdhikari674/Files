#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
    char *p; 
	int i,v=0,n;
	puts("\nEnter The No Of Elements You Want To Input");
	scanf("%d",&n);
	p=(char*)malloc(n);
	if (p==NULL)
	{
		puts("\n\nMemory Cannot Be Allocated");
		return 0;
	}
	puts("\nENTER The Name");

	for (i=0;i<n;i++)
	
{
	scanf("%c",(p+i));
}
	puts("\n\nThe Vowels Are: ");
	for (i=0;i<n;i++)
	{
		if (*(p+i)=='a' || *(p+i)=='e' || *(p+i)=='i' || *(p+i)=='o' || *(p+i)=='u' || *(p+i)=='A' || *(p+i)=='E' || *(p+i)=='I' || *(p+i)=='O' || *(p+i)=='U')
		{
			v++;
			printf("\t%c",*(p+i));
		}
	}
	printf ("\n\n\t\tThe Total No Of Vowels Are : %d",v);
	
}
