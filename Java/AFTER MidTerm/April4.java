import java.util.Scanner;
class IllegalTriangleException extends Exception
{
	IllegalTriangleException(String s)
	{super(s);}
}
class April4
{
	April4(int a,int b,int c) throws IllegalTriangleException
	{
		if(a+b<c || a+c<b || c+b<a)
		{throw new IllegalTriangleException("The Triangle IS created with Illegal Sides");}
	}
	public static void main(String ar[]) throws IllegalTriangleException
	{
		int x,y,z;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter The Three Sides of the triangle Respectively");
		x=sc.nextInt();
		y=sc.nextInt();
		z=sc.nextInt();
		April4 a1=new April4(x,y,z);
	}
}