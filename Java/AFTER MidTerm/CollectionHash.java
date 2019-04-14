import java.util.*;
class CollectionHash
{
	public static void main(String ar[])
	{
		HashMap<Integer,String>map=new HashMap<Integer,String>();
		map.put(101,"Yo WHats up");
		map.put(102,"this is goin well");
		map.put(103,"Ok bye bye");
		
		System.out.println("Values before Remove "+map);
		map.remove(102);
		System.out.println("\nAfter : "+map);
		//for(map.Entry m:map.entrySet())
		//	  System.out.println(m.getKey()+" "+ m.getValue());
	}
}