class RegionMatcher
{
	public static void main(String ar[])
	{
		String s1="Test STRIng";
		String s2="STRingMAtCh";
		String s3="demo in class";
		String s4="this is demo";
		String s5="demo";

		boolean b1=s1.regionMatches(5,s2,0,6);
		boolean b2=s1.regionMatches(true,5,s2,0,6);
		System.out.println(b1);
		System.out.println(b2);

		System.out.println(s3.startsWith(s5));
		System.out.println(s4.endsWith(s5));
	}
}