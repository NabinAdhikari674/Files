//create a class OUTER that further contains a inner member class A..one static nested class B..and one static integer variable X..
//Each inner class has DISPLAY() method that prints the value of X declared and initialized in the class OUTER..create a MAIN class 
//that instantiates the object of both the inner classes and calls their display method. 

class Outer
{
	static int x=10;
	class A
	{
		void display()
		{
			System.out.println("Member Inner Class :"+x);
		}
	}
	static class B
	{
		void display()
		{
			System.out.println("Nested Inner Class : "+Outer.x);
		}
	}
	
}
class March20
{
	public static void main(String ar[])
	{
		Outer obj=new Outer();
		Outer.B o2=new Outer.B();
		Outer.A o1=obj.new A();
		o1.display();
		o2.display();
		
		
	}
}