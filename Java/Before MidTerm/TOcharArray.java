class TOcharArray
{
	public static void main(String ar[])
	{
		String s1="Testig Strng";
		char c[]=s1.toCharArray();
		String s2="ThIS IS SECOND";
		s2.getChars(2,7,c,4);
		for(char i:c)
			System.out.println(i);
		System.out.println("\n");

		String s3=s1.toUpperCase();
		String s4=s2.toLowerCase();
		System.out.println(s1+"-->"+s3);
		System.out.println(s2+"-->"+s4);
	}
}