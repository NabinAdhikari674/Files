class NameFinder
{
	public static void main(String ar[])
	{
		String s1[]={"naibn","hello","this","hello Singh","robert downey","this Singh"};
		int x=6;
		for(int i=0;i<x;i++)
		{
			if(s1[i].endsWith("Singh"))
			{
				System.out.println(s1[i]);
			}
		}
	}
}