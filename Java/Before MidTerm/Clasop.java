class Clasop
{
int x,y;
Clasop()
{
	x=10;y=20;
	System.out.println("initialized !!");
}
Clasop(int x,int y)
{
this.x=x;this.y=y;  //Due to clash in naming..this.. is used to differentiate betn instance variable x,y..and local variable x,y
System.out.println("Initialized with Parameters!!");	
}
public static void main(String ar[])
{
Clasop c1=new Clasop();
Clasop c2=new Clasop(2,3);
//c1.x=20;
//c1.y=30;
System.out.println(c1.x+" "+c1.y);
System.out.println(c2.x+" "+c2.y);
c1=c2;  //c1 is now referring to c2.....that means that every change made in c2 is reflected in c1..since c1 is pointing to c1
c2.x=90;
System.out.println(c1.x+" "+c1.y);
System.out.println(c2.x+" "+c2.y);
}

}