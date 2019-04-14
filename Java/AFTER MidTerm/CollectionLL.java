import java.util.*;
class CollectionLL
{
	public static void main(String ar[])
	{
		Deque<String> t1= new LinkedList<String>();
		t1.addFirst("YO");
		t1.offerFirst("This is");
		t1.addLast("Awesome");
		t1.offerLast("And BYE");
		while(t1.size()>0)
			System.out.println(t1.remove());
	}
}