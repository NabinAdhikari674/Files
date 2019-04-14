//program to count the occurrence of "is" in given string... 
class PatternCounter
{
	public static void main(String ar[])
	{
		String s1="This is an issueless issue";
		String s="is";
		int count=0,i=-1;
		while((i=s1.indexOf(s,i+1))>=0)
			count++;
		System.out.println(count);
	}
}