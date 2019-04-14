class Arrays_Objects
{
	int x,y;
	Arrays_Objects(int x,int y)
	{
		this.x=x;
		this.y=y;
	}
	public String toString()
	{
		String s="X is : "+x+" And Y is : "+y;
		System.out.println("This is Overriding of DEFAULT Object Class");
		return s;
	}
	public static void main(String ar[])
	{
		Arrays_Objects ob1=new Arrays_Objects(10,20);
		Arrays_Objects ob2=new Arrays_Objects(5,6);
		System.out.println(ob1);
		System.out.println(ob2);
		
        int[] a=new int[10];
		System.out.println(a);
	}
	
}