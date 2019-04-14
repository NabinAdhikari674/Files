import java.util.*;
class DataDrive implements AutoCloseable 
{
	void consumeData(String s)
	{
		System.out.println("\nThis is consumeData method within DataDrive...\n");
		System.out.println("\tTHE given string is : "+s);
	}
	public void close() throws Exception
	{
		System.out.println("\nClosing...");
	}
	public static void main(String ar[])
	{
		String str;
		try(DataDrive d1=new DataDrive())
		{
			System.out.println("Enter A String For the Drive : ");
			Scanner scn=new Scanner(System.in);
			str=scn.nextLine();
			d1.consumeData(str);
		}
		catch(Exception e)
		{
			System.out.println("\nThis Is catch block...");
		}
	}
}