class MethodOvrAmbiquity
{
	int x,y;
	MethodOvrAmbiquity(int x,int y)
	{
		this.x=x;
		this.y=y;
	}
	void meth(double a,int b)
	{
		System.out.println("double  int");
	}
	void meth(int s,double b)
	{
		System.out.println("int double");
	}
	public static void main(String ar[])
	{
		MethodOvrAmbiquity ob1=new MethodOvrAmbiquity(10,20);
		ob1.meth(4,6);  //here the reference to METH method will be ambiguous due to the values passed here i.e int can also be treated as double...
	}
}