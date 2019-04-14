class ChangeCase
{
	public static void main(String ar[])
	{
		String sb="This IS DEmo";
		char c[]=sb.toCharArray();
		StringBuilder s=new StringBuilder(sb);    //use either StringBuilder or toCharArray to check the case and change it....
		int i=0;
		for (char ch:c)
		{
			if (Character.isUpperCase(ch))
				s.setCharAt(i,Character.toLowerCase(s.charAt(i)));
			else
				s.setCharAt(i,Character.toUpperCase(s.charAt(i)));
			i++;
		}
		System.out.println(s);
	}
}