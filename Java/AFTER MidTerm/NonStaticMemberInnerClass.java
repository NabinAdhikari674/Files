class Outer
{
	static int x=10;
	int x1=20;
	void methout()
	{
		Inner o =new Inner();
		o.meth();
	}
	
	class Inner
	{
		//static int i=30;  //cannot have static members in NON static class
		int i2=40;
		void meth()
		{
			System.out.println(x);
			System.out.println(x1);
		}
	}
}
class NonStaticMemberInnerClass
{
	public static void main(String ar[])
	{
		Outer ob=new Outer();
		ob.methout();
		Outer.Inner io=ob.new Inner();
		io.meth();
		
	}
}