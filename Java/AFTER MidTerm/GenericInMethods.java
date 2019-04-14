class Gendemo
{
	static <T,V>boolean isIn(T x,V[] y)
	{
		for(int i=0;i<y.length;i++)
			if(x.equals(y[i])) return true;
		return false;
	}
}
class GenericInMethods
{
	public static void main(String ar[])
	{
		Integer nums[]={1,2,3,4,5};
		if(Gendemo.isIn(2,nums))
			System.out.println("YES!!!");
		Double nums1[]={1.2,3.4,5.6,7.8,9.1};
		if(Gendemo.isIn(7.8,nums1))
			System.out.println("...YES...!!!");
	}
}