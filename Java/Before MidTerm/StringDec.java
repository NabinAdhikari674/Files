class StringDec
{
	public static void main(String ar[])
	{
		String s1="hello";
		String s2=new String ("hello");
		String s3=new String(s1);
		char ch[]={'h','e','l','l','o'};
		String s4=new String(ch);
		System.out.println("s1= "+s1);
		System.out.println("s2= "+s2);
		System.out.println("s3= "+s3);
		System.out.println("s4= "+s4);
		
		System.out.println(s1==s2);
		System.out.println(s3==s2);
		System.out.println(s2==s4);
		System.out.println(s1==s4);
		System.out.println(s3==s4);
		
		System.out.println(s1.equals(s3));
		System.out.println(s1.equalsIgnoreCase(s2));    //Ignores the case of the letters while comparing
		s1=s2;
		System.out.println(s1==s2);
		
		s1=s1+"THis is concat";     //a new object memory is created where concat is done then the memory is referenced with a object in JAVA
		System.out.println(s1);
	}
}