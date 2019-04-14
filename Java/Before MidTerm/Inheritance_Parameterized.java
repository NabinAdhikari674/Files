class Super
{
	int x,y;
	Super(int x,int y)
	{
		this.x=x;this.y=y;
		System.out.println("Super CLass");
	}
}
class Sub extends Super
{
	int z;
	Sub(int z)
	{
		super(10,20);            //super constructor needs to be in first line...as this constructor....so both cannot be used at same time
		this.z=z;
		System.out.println("Sub Class");
	}
}
class Inheritance_Parameterized
{
	public static void main(String ar[])
	{
		Sub s1=new Sub(30);
		System.out.println("x="+s1.x+" y="+s1.y+" z="+s1.z);
	}
}