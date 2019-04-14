class Thiscalls
{
int x,y,z;
Thiscalls()
{this(10);System.out.println("No Para");}        //this...call to other constructors..must be in the first line of the constructor..else error
Thiscalls(int x)
{this(x,20);System.out.println("One para");}
Thiscalls(int x,int y)
{this(x,y,30);System.out.println("Two para");}
Thiscalls(int x,int y,int z)
{
this.x=x;this.y=y;this.z=z;
System.out.println("Three para");
}
public static void main(String ar[])
{
Thiscalls t1=new Thiscalls();
Thiscalls t2=new Thiscalls(22);
Thiscalls t3=new Thiscalls(2,3);
Thiscalls t4=new Thiscalls(9,8,7);
System.out.println(t1.x+" "+t1.y+" "+t1.z);
System.out.println(t2.x+" "+t2.y+" "+t2.z);
System.out.println(t3.x+" "+t3.y+" "+t3.z);
System.out.println(t4.x+" "+t4.y+" "+t4.z);
}
}