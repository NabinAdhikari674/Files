class Enum
{
	public enum Section
	{
		K1604(5),K1605(10),K1606(15);
		private int value;
		private Section(int value)
		{
			this.value=value;
		}
	}
	
	public static void main(String ar[])
	{
		Section s1=Section.K1605;
		System.out.println(s1);
		for(Section s:Section.values())
		{
			System.out.println(s+" "+s.value);
		}
	}
}