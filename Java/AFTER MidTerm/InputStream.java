import java.io.*;
class InputStream
{
	public static void main(String ar[]) throws IOException
	{
		InputStreamReader ir=new InputStreamReader(System.in);
		BufferedReader br=new BufferedReader(ir);
		String s=br.readLine();
		System.out.println(s);
		int a=br.read();
		int b=br.read();
		System.out.println((char)a+" "+(char)b);     
		String s1=br.readLine();
		System.out.println(s1);
	}
}