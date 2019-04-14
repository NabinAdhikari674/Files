interface A
{
	void meth1();
	static void meth2()
	    {System.out.println("Static method in Interface A");}
    default void meth3()
	    {System.out.println("Default Method in Interface A");} 	
}
class InterfaceMethods implements A
{
	public void meth1()
	{
		System.out.println("Method 1");
	}
	public static void main(String ar[])
	{
		InterfaceMethods obj=new InterfaceMethods();
		obj.meth1();
		obj.meth3();
		A.meth2();
	}
}