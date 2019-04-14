interface A
{
	void meth(int x);
}
class LambdaExpressions
{
	public static void main(String ar[])
	{
		A show= x-> {System.out.println("The value of x is :"+x);};
		A add= x->  {System.out.println("The added vaue of x is : "+(x+10));};
		show.meth(10);
		add.meth(10);
	}
}