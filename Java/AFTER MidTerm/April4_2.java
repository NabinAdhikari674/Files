class ArraysizeException extends Exception
{
	ArraysizeException(String s,int q,int w)
	{super(s+""+q+" and "+w);}
}
class April4_2
{
	int adder(int[] x,int[] y)
	{
		
		if(x.length!=y.length)
			throw new ArraysizeException("Size are Different :",x.length,y.length);
		else return int[] z=x+y;
	}
	public static void main(String ar[]) throws ArraysizeException
	{
		int a[]={1,2,3,4};
		int b[]={5,6,7,8,9};
		April4_2 a1=new April4_2();
		a1.adder(a,b);
		
	}
}