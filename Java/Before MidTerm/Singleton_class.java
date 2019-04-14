class Test
{
	private static Test obj;
	private Test()
	{}
	public static Test getInstance()
	{
		if(obj==null)
			obj=new Test();
		return obj;
	}
	
}
class Singleton_class
{
	public static void main(String ar[])
	{
		Test t1=Test.getInstance();
		Test t2=Test.getInstance();
		
		if(t1==t2)
		{
			System.out.println("The test objects are SAME");
		}
	}
}