import java.io.*;
class Concat{
String s;
public static void main(String ar[]) throws IOException
{
	FileInputStream fi=new FileInputStream(ar[0]);
	FileInputStream fo=new FileInputStream(ar[1]);
	FileOutputStream fn=new FileOutputStream(ar[3]);
	int i=fi.read();
	int x=0;
	while(i>0)
	{
	fn.write((char)i);
	i=fi.read();
	}
	fi.close();
	i=fo.read();
	while(i>0)
	{
	fn.write((char)i);
	i=fo.read();
	}
	fo.close();
	fn.close();
}
	
}