import java.util.Scanner;
class MyException extends Exception
{
	MyException(String s)
	{super(s);}
}
class ExceptionMyOwn
{
	public static void main(String ar[]) throws MyException
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter A Number Greater than 5");
		int x=sc.nextInt();
		
		if(x>5)
			throw new MyException("The Number is Too large");
	}
}