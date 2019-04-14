import java.io.*;
class FileStream
{
	public static void main(String ar[]) throws IOException
	{
		FileOutputStream fi=new FileOutputStream("File.txt");
		
		fi.write('Y');
		
		String s="Yo!! Whats UP?";
		int i=s.length();
		int x=0;
		while(x<i)
		{
			fi.write(s.charAt(x));
			x++;
		}
		
		fi.close();
		
		FileInputStream fo=new FileInputStream("File.txt");
		int j=fo.read();
		while(j>0)
		{
			System.out.println((char)j);
			j=fo.read();
		}
		
		fo.close();
	}
}