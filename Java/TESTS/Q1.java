interface NumericTest
{
	boolean test(int n);
}
class Q1 implements NumericTest
{
	public boolean test(int n)
	{System.out.println("The Interface NumericTest is Implemented\n");return true;}
	public static void main(String ar[])
	{
	NumericTest o1=n->
	{
		if(n%2==0)
			return true;
		else 
			return false;
	};
	boolean t1=o1.test(3);
	boolean t2=o1.test(2);
	if(t1==true)
	{System.out.println("The number t1 is EVEN");}
	else
	{System.out.println("\nThe number t1 is ODD");}
	
	if(t2==true)
	{System.out.println("The number t2 is EVEN");}
	else
	{System.out.println("\nThe number t2 is ODD");}
/*........................................................*/
	NumericTest o2=new NumericTest()
	{
		public boolean test(int n)
		{
		if (n>0)
			return true;
		else 
			return false;
		};
	};
	boolean t3=o2.test(-3);
	boolean t4=o2.test(2);
	if(t1==true)
	{System.out.println("The number t3 is Positive");}
	else
	{System.out.println("\nThe number t3 is Negative");}
	
	if(t2==true)
	{System.out.println("The number t4 is Positive");}
	else
	{System.out.println("\nThe number t4 is Negative");}

	
	
	
	};
	
};