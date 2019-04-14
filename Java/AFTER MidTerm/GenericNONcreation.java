import java.util.*;
class NonGen
{
	object ob;
	NonGen(Object o){ob=o;}
	Object get(){return ob;}
}
class GenericNONcreation
{
	public static void main(String ar[])
	{
		NonGen g1=new NonGen("Hello");
		String s=(String)g1.get();
		System.out.println(s);
		
		NonGen g2=new NonGen(20);
		int x=(Integer)g2.get();
		System.out.println(x);
	}
}