class Super
{
	int x,y;
	Super()
	{
		x=10;y=20;
		System.out.println("Super CLass");
	}
}
class Sub extends Super
{
	int z;
	Sub()
	{
		z=30;
		System.out.println("Sub Class");
	}
}
class Inheritance
{
	public static void main(String ar[])
	{
		Sub s1=new Sub();
		System.out.println("x="+s1.x+" y="+s1.y+" z="+s1.z);
	}
}