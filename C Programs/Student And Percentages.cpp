#include<stdio.h>
#include<conio.h>
#include<string.h>

main ()
{
	struct student
{
	char nme[20];
    int mth,cse,ece,per;	
}st[100];
	int i,n;

	puts("Enter n");
	scanf("%d",&n);
		puts ("\n\n\t\t\t\t\t***Enter The Details Of The Student***");
	for(i=0;i<n;i++)
	{
	puts("\n\n\tName :");
	scanf("%s",st[i].nme);
	puts("\n\tMarks In Math:");
	scanf("%d",&st[i].mth);
	puts("\n\tMarks In Computer Science:");
	scanf("%d",&st[i].cse);
	puts("\n\tMarks In ECE:");
	scanf("%d",&st[i].ece);
    st[i].per=((st[i].cse+st[i].ece+st[i].mth)/3);
    puts("\n\n\t\t\t                         !!! SUCESS !!!");
    
		puts("\n\n\n\tName :");
	    puts(st[i].nme);
		puts("\nPercentage :");
		printf("%d",st[i].per);	
		
	}	
	
	
	
	
	
}
