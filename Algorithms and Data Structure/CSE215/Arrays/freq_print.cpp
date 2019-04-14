#include<iostream>
#include<conio.h>
using namespace std;
main()
{
int i,j,n, arr[10];
int occ_v[7];  //to store distinct elements
int occ_in[7]; //to store starting index of distinct elements
int freq[7];   //to store frequency of each distinct elements
int index=0;   // number of disting elements

cout<<"\nEnter the size of array: ";
cin>>n;
//Input
printf("Enter elements in array: ");
for(i=0; i<n; i++)
  {
   cin>>arr[i];
  }

//Finding distinct elements
for(i=0;i<n;i++)
{
      for (j=0; j<i; j++)
      { if (arr[i] == arr[j])
            break;           }
            
          if (i == j)
           { occ_v[index]=arr[i];  // store distinct elements
             occ_in[index]=i;      // store index of distinct elements
             index++;        }
}

//finding frequency of each elements
for(j=0;j<index;j++)
{ int count=0;
   
     for(i=0;i<n;i++)               
    	{
         if(occ_v[j]==arr[i])
		   { count++;}
        }
     freq[j]=count;
}

//Sorting acc. to decreacing frequency
for(int i=0;i<index;i++)
	{int tmp;
		for(int j=0;j<index-1;j++)
		{
			if(freq[j]<freq[j+1])
			{
				tmp=freq[j];
				freq[j]=freq[j+1];
				freq[j+1]=tmp;
				
				tmp=occ_v[j];
				occ_v[j]=occ_v[j+1];
				occ_v[j+1]=tmp;
				
				tmp=occ_in[j];
				occ_in[j]=occ_in[j+1];
				occ_in[j+1]=tmp;
			}
		}
	}

//Elements in decreasing frequency 
cout<<endl;		
for(i=0;i<index;i++)
{  
cout<<occ_v[i]<<" "
;
}

//Display 
cout<<"\nDetailed Output\n";    
for(i=0;i<index;i++)
{  
cout<<endl<<"Value "<<occ_v[i]<<" at "<<occ_in[i]<<" index having "<<freq[i]<<" freq"<<endl;
}
    getch();
}
