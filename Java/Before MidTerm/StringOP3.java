class StringOP3
{
	public static void main(String r[])
	{
		String s1="this is a issueless issue";
		String s2=s1.replace('s','z');
		System.out.println(s2);
		String s3="    Test String   this   is ";
		System.out.println(s3);
		String s4=s3.trim();
		System.out.println(s4);
		System.out.println(s3.length());
		System.out.println(s4.length());
		
		String s5=s1.substring(3,9);
		System.out.println(s5);
	}
}