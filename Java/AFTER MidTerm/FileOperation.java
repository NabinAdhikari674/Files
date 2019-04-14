import java.io.*;
class Demo
{
	public static void main(String ar[]) throws IOException
	{
	File f=new File("f1.txt");
	System.out.println(f.exists());
	System.out.println(f.isFile());
	System.out.println(f.canRead());
	System.out.println(f.canWrite());
	System.out.println(f.isDirectory());
	System.out.println(f.getName());
	System.out.println(f.getParent());
	}
}
	
	