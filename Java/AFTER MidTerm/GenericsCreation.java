class GenDemo<T>
{
	T ob;
	GenDemo(T o){ob=o;}
	T get(){return ob;}
}
class GenericsCreation
{
	public static void main(String ar[])
	{
		GenDemo<String> g1=new 
		GenDemo<String>("Hello");
		String s=g1.get();
		System.out.println(s);
		GenDemo<Integer> g2=new Gendemo<Integer>(10);
		int x=g2.get();
		System.out.println(x);
	}
}