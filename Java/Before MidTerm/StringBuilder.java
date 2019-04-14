class StringBuilder
{
	public static void main(String a[])
	{
		StringBuilder s=new StringBuilder("abcde");
		System.out.println(s.length());
		System.out.println(s.capacity());
		
		s.append("abcdefghijklmnopqrst");
		System.out.println(s.length());
		System.out.println(s.capacity());
		
		s.append("123456789123456789123456789");
		System.out.println(s.length());
		System.out.println(s.capacity());
		
		s.setLength(10);
		s.ensureCapacity(50);
		System.out.println(s.length());
		System.out.println(s.capacity());
		
	}
}