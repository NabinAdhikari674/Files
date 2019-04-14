class StringOP2
{
	public static void main(String ar[])
	{
		String s1="abcde";
		String s2="afgr";
		System.out.println(s1.compareTo(s2));
		String s3="THis is an text issue";
		String s4="is";
		char c='t';

		System.out.println(s3.indexOf(s4));
		System.out.println(s3.indexOf(c));
		System.out.println(s3.lastIndexOf(s4));
		System.out.println(s3.lastIndexOf(c));
		System.out.println(s3.indexOf(s4,4));
		System.out.println(s3.indexOf(c,11));
	}
}