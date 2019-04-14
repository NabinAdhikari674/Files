class MethodOvr
{
	int x,y;
	MethodOvr(int x,int y)
	{
		this.x=x;
		this.y=y;
	}
	void meth(int x,int y)
	{
		x=x+10;                //this would only affect the LOCAL x and y
		y=y+10;                //since x,y is not specified as object variables using "this"
	}
	void meth()
	{
		x=x+10;                //this would only affect the OBJECT variables x and y
		y=y+10;                //since LOCAL x,y is not declared in this method 
	}
	public static void main(String ar[])
	{
		MethodOvr ob1=new MethodOvr(10,20);
		ob1.meth(4,6);
		System.out.println(ob1.x+" "+ob1.y);
		ob1.meth();
		System.out.println(ob1.x+" "+ob1.y);
	}
}