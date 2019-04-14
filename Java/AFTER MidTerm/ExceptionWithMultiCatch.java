class ExceptionWithMultiCatch
{
	public static void main(String ar[])
	{
		int a[]={1,2,3,4},x=10,y=0;
		try 
		{
			a[2]=20;
			int z=x/y;
		}
		catch (ArithmeticException | ArrayIndexOutOfBoundsException e)
		{
			System.out.println("Exception CAught");
			System.out.println(e.getMessage());
		}
		catch (Exception e){System.out.println("yo");}
	}
}