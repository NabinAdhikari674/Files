import java.io.*;
class FileCopy
{
	public static void main(String ar[]) throws IOException
	{
		if (ar[2].length()!=0)
		{
			FileInputStream fi1=new FileInputStream(ar[0]);
			FileInputStream fi2=new FileInputStream(ar[1]);
			FileOutputStream f01=new FileOutputStream(ar[2]);
			int k=fi1.read();
		    while(k!=-1)
		    {
				fo1.write((char)k);
				k=fi.read();
            }
			int x=fi2.read();
		    while(x!=-1)
		    {
				fo1.write((char)x);
				x=fi2.read();
            }
		}
		else
		{
		FileInputStream fi=new FileInputStream(ar[0]);
		FileOutputStream fo=new FileOutputStream(ar[1]);
		int j=fi.read();
		while(j!=-1)
		{
			fo.write((char)j);
			j=fi.read();
		}
		
		}
	
	fi.close();
	fo.close();
	}
}