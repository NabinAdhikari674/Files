class StaticVar
{
   int x,y;
   static int z=999;
   public static void main(String ar[])
   {
      StaticVar t1=new StaticVar();
	  StaticVar t2=new StaticVar();
	  t1.x=10;
	  t1.y=20;
	  t1.z=30;
	  System.out.println(t1.x+" "+t1.y+" "+t1.z);
	  System.out.println(t2.x+" "+t2.y+" "+t2.z);
	  z=50;
	  System.out.println(z+" "+t1.z+" "+t2.z);
   }
}