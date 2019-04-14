class ExceptionAndThrowing
{
	public static void main(String ar[]) throws Exception 
	{
		int x=10,y=20;
		int a[]={1,2,3,4,5};
		try
		{
			a[2]=90;
			int z=x/y;
			System.out.println("Try executed");
		}
		catch(RuntimeException e)
		{
			System.out.println("RuntimeException Raised");
		}
		catch(Exception e)
		{
			System.out.println("Second Exception block Raised");
		}
		finally
		{
			System.out.println("Finally Exception block Raised");
		}
	}
}