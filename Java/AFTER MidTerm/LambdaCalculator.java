interface calculate{int oper(int a,int b);}
class LambdaCalculator
{
	public static void main(String ar[])
	{
		calculate add=(a,b)->a+b;
		calculate sub=(a,b)->a-b;
		calculate mul=(a,b)->a*b;
		calculate div=(a,b)->a/b;
		
		System.out.println(add.oper(10,20));
		System.out.println(sub.oper(10,20));
		System.out.println(mul.oper(10,20));
		System.out.println(div.oper(10,20));
	}
}