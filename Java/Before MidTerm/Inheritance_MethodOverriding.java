class Super
{
	void method()
	{
		System.out.println("Super class MEthod");
	}
}
class Sub extends Super
{
	void method()
	{
		//super.method();                           //calling the method of super class without overriding
		System.out.println("Sub Class MEthod");
	}
	void method2(){}
}
class Inheritance_MethodOverriding
{
	public static void main(String ar[])
	{
		Sub s1=new Sub();
		s1.method();
		Super s2=new Super();
		s2=s1;                        //we can change reference of super class to sub...coz we are not loosing anything....everything in super class is also in sub class   
	    //s1=s2;                     //this cannot be done ..coz we will be loosing info from sub class  
		Super sup =new Sub();          //the reference is SUPER but object is SUB...this can only access members of SUB if its in both....
        sup.method();
		//sup.method2();             //this is not accessable coz its not in SUPER..and SUPER doesnot know METHOD2 Exists.......		
		
 	}
}