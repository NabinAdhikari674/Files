#include<stdio.h>
#include<conio.h>
#include<string.h>

main ()
{
	struct student
{
	char nme[20];
    int ca[3];	
}st[100];
	int i,n,j,w,res;

	puts("Enter n");
	scanf("%d",&n);
		puts ("\n\n\t\t\t\t\t***Enter The Details Of The Student***");
	for(i=0;i<n;i++)
	{
	puts("\n\n\n\n\tName :");
	scanf("%s",st[i].nme);
	puts("\n\tMarks In CA1:");
	scanf("%d",&st[i].ca[0]);
	puts("\n\tMarks In CA2:");
	scanf("%d",&st[i].ca[1]);
	puts("\n\tMarks In CA3:");
	scanf("%d",&st[i].ca[2]);
    w=st[i].ca[0];
    for(j=0;j<3;j++)
    {
    	if (w>st[i].ca[j])
    	{
    		w=st[i].ca[j];
    		printf("\t%d",&w);
		}
	}
	res=((st[i].ca[0]+st[i].ca[1]+st[i].ca[2]-w)/60)*100;
    
    puts("\n\n\t\t\t                         !!! SUCESS !!!");
    
		puts("\n\n\n\tName :");
	    puts(st[i].nme);
		puts("\nPercentage :");
		printf("%d",res);	
		
	}	
	
	
	
	
	
}
