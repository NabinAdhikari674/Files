class CharFromString
{
	public static void main(String ar[])
	{
		String s1="Hellothis is string";
		char ch[]=new char[];	
		for (int i=0;i<s1.length();i++)
		{
			char ch[i]=s1.charAt(i);
		}
		for(char c:ch)
		{
			System.out.println(c);
		}
	}
}