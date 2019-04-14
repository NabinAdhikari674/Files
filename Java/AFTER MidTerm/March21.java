//Given a functional interface with the method "String concatMe(String s1,String s2)"....
//Show the implementation of the method through ...an Implementing concrete class...an anonymous inner class...lambda expression..
interface Con
{
	String ConcatMe(String s1,String s2);
} 
class A implements Con
{
	public String ConcatMe(String s1,String s2)
	{
		return s1+s2;
	}
}
class March21
{
	public static void main(String ar[])
	{
		Con ob2=new Con()
		{
			public String ConcatMe(String s1,String s2)
			{
				System.out.println(s1+s2);
			}	
		};
		Con ob3=(s1,s2)->{return(s1+s2);};
		System.out.println(ob3.ConcatMe("Hello","World!!!"));
	}
}