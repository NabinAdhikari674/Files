interface A
{
	void meth1();
	void meth2();
}
class Interface implements A
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
		Interface o1=new Interface();
		o1.meth1();
		o1.meth2();
	}
}