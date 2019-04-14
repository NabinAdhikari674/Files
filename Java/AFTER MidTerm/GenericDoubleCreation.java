class GenDemo<T,V>
{
   T ob1;
   V ob2;
   GenDemo(T o1,V o2)
   { 
      ob1=o1;ob2=o2;
   }
   T getP1(){return ob1;}
   V getP2(){return ob2;} 
   void showTypes()
   {
      System.out.println("Type of T is : "+ob1.getClass().getName());
	  System.out.println("Type of V is : "+ob2.getClass().getName());
   }
}
class GenericDoubleCreation
{
   public static void main(String ar[])
   {
       GenDemo<String,Integer>g1=new GenDemo<String,Integer>("YO!!Whats Up!!",20);
           String s=g1.getP1();
	   System.out.println(s);
	   int x=g1.getP2();
	   System.out.println(x);
	   g1.showTypes();
	   
       GenDemo<Integer,Double>g2=new GenDemo<Integer,Double>(50,25.32);
	   int j=g2.getP1();
	   System.out.println(j);
	   double d=g2.getP2();
	   System.out.println(d);
	   g2.showTypes();
   }
}