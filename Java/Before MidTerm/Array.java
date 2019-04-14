import java.util.Scanner;
class Array
{
  public static void main(String[] ar)
  {
	int [] a;                 //declaring an array reference variable
	a=new int[10];            //creating an array
	int[] b=new int[10];      //declaring and Creating an array
	Scanner s=new Scanner(System.in);
    System.out.println("\nEnter the elements for the array\n");
	for(int i=0;i<10;i++)
	{
		a[i]=s.nextInt();
	}
    System.out.println("\nThe values in the A array are :\n");
    for(int x:a)
	{
		System.out.println(x);
	}
    int c[]={1,2,3,4,5};     //declaring,creating and initializing an Array	
	System.out.println("The elements in array C are:");
	for(int y:c)
	{
		System.out.println(y);
	}
	System.out.println("\n\tCreating new 2D array\n\n");
	System.out.println("Enter the number of rows and columns :");
	int r=s.nextInt();
	int col=s.nextInt();
	int d[][]=new int[r][col];
	System.out.println("\nEnter array elements: \n");
	Scanner scan=new Scanner(System.in);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<col;j++)
		{
			d[i][j]=scan.nextInt();
		}
	}
	for(int z[]:d)
	{
		for(int q:z)
		{
			System.out.println(q);
		}
		System.out.println("\n");
	}
	
  }
}