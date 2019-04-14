import java.io.*;
class A implements Serializable{
	int x=10;
	transient int y=20;
}
class Test{
	public static void main(String ar[]) throws Exception{
	A ob=new A();
	ob.x=90;
	FileOutputStream fo=new FileOutputStream("abc.txt");
	ObjectOutputStream oo=new ObjectOutputStream(fo);
	oo.writeObject(ob);
	FileInputStream fi=new FileInputStream("abc.txt");
	ObjectInputStream oi=new ObjectInputStream(fi);
	A o=(A)oi.readObject();
	System.out.println(o.x+" "+o.y);

	}
}