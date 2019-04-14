import java.io.*;
class TryWithInstantiated implements AutoCloseable
{
	public void close() throws Exception
	{
		System.out.println("\nClose...");
	}
	public static void main(String ar[])
	{
		int x=10;
	    int y=0;
		try(TryWithInstantiated t1=new TryWithInstantiated())
		{
			x=9;
			System.out.println("\nThe Instance is created and running...");
			System.out.println("\nTHe value of x is  : "+x);
			System.out.println("\nInstace is Closing...");
			int a=x/y;
		}
		catch(Exception e)
		{
			System.out.println("\nThis Is catch block...");
		}
		finally
		{
			System.out.println("\nThis is Finally Block...");
		}
	}
}