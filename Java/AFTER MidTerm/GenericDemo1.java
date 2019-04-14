class DemoMethod{
	public static void main(String[] args) {
		Integer [] ar = {17,12,114,21,18,9,23,14};
		int x = FindSmallest.min(ar);
		System.out.println("Smallest Element is " +x);
	}
}
class FindSmallest{
	public static <T extends Comparable>T min(T [] x)
	{
		T m = x[0];
		for(int i = 1; i<x.length;i++)
		{
			if(x[i].compareTo(m) < 0)
				m = x[i];
		}
		return m;
	}
}