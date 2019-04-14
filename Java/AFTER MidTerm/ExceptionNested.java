class ExceptionNested
{
	public static void main(String ar[])
	{
		int x=10,y=0,a[]={1,2,3,4,5};
		try
		{
			a[2]=10;
			try                                                //Inner Try Must have its own Catch
			{
			    int z=x/y;	
			}
			catch(ArrayIndexOutOfBoundsException e)
			{
				System.out.println("ArrayIndexOutOfBoundsException Raised");
			}
		}
		catch(ArithmeticException e)
		{
			System.out.println("Divide by 0");
		}
	}
}