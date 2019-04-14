//WAP..define an abstract class A Containing a non abstract method demo() and an integer x with value 10....define an interface B and double with value 20.0....Create Class TEst which
//inherits A,B and Override the demo() method.Invoke the demo() method of Interface B and the class.Test both and Print the value of x.Explain the output....

abstract class A
{
	int x=10;
	void demo()
	{System.out.println("Demo in A");}
}
interface B
{
	double x=20.0;
	default void demo()
	{System.out.println("Demo in B");}
}
class Test1 extends A implements B
{
	public void demo()                                              //now we cannot invoke default definition from INTERFACE B
	{
		super.demo();                                              //B.super.demo()....references to DEMO in INTERFACE B
		B.super.demo();
		System.out.println("OverRidden Demo Method in TEST1");
	}
	public static void main(String ar[])
	{
		Test1 obj=new Test1();
		obj.demo();		//X cannot be printed coz its OVERRIDDEN....		
        System.out.println(" "+B.x);		
	}
}