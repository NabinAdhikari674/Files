class Outer
{
	void meth()
	{
		class Inner
	    {
		    int i2=40;
	    }
		Inner o=new Inner();
		System.out.println(o.i2);
	}
	void meth2()
	{
		class Inner
	    {
		    int i2=30;
	    }
		Inner o=new Inner();
		System.out.println(o.i2);
	}
}
class NonStaticLOCALInnerClass
{
	public static void main(String ar[])
	{
		Outer ob=new Outer();
		ob.meth();
		ob.meth2();
	}
}