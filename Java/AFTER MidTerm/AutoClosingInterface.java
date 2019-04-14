import java.io.*;
class AutoClosingInterface implements AutoCloseable
{
	public void close() throws Exception
	{
		System.out.println("Closing..");
	}
	public static void main(String ar[])
	{
		int a=10,b=0;
		try(AutoClosingInterface a=new AutoClosingInterface():AutoClosingInterface a1=new AutoClosingInterface())
		{
			System.out.println("With In the try block...");
			int c=a/b;
			System.out.println("With try 2..");
		}
		catch(Exception e);
		System.out.println("Catched...");
		finally{System.out.println("Finally");}
	}
}