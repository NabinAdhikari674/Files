interface GenInt<T>
{
	T meth();
}
class GenDemo<T> implements GenInt<T>
{
	T ob;
	GenDemo(T o){ob=o;}
	public T meth()
	{
		System.out.println("THE Meth is Running\n");
		return ob;
	}
}
class GenericInInterface
{
	public static void main(String ar[])
	{
		GenDemo<String> g1=new GenDemo <String>("HELLOOO\n");
		String s=g1.meth();
		System.out.println(s);
	}
}