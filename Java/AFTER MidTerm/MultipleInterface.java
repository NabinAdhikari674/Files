interface A
{
	void meth1();
	static void meth0()
	{
		System.out.println("Hello Static");
	}
}
interface B
{
    void meth2();
}
class Test
{
	public void meth3()
	{
		System.out.println("MEth 3");
	}
}
class MultipleInterface extends Test implements A,B    //An interface will extend another Interface
{
	public void meth1()
	{
		System.out.println("Meth 1");
	}
	public void meth2()
	{
		System.out.println("Meth 2");
	}
	
	public static void main(String ar[])
	{
		MultipleInterface o1=new MultipleInterface();
		o1.meth1();
		o1.meth2();
		o1.meth3();
		A.meth0();
	}
}