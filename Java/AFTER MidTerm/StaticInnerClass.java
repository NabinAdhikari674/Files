class Outer
{
	static int x=10;
	int x1=20;
	
	static class Inner
	{
		static int i=30;
		int i2=40;
		void meth()
		{
			System.out.println(x);
			Outer obj =new Outer();
			System.out.println(obj.x1);
		}
	}
}
class StaticInnerClass
{
	public static void main(String ar[])
	{
		Outer.Inner ob=new Outer.Inner();
		System.out.println(Outer.Inner.i);
		ob.meth();
		
	}
}