import java.util.*;
class CollectionTreeset
{
	public static void main(String a[])
	{
		TreeSet<String> t1=new TreeSet<String>();
		t1.add("Yo");
		t1.add("Whats Up?");
		t1.add("Hows it Goin?");
		Iterator<String> i=t1.iterator();
		while(i.hasNext())
			System.out.println(i.next());
	}
}