import java.io.*;
class TooManyCharacters extends Exception
{ 
        TooManyCharacters(String s)
		{super(s);}
}
class Q2
{
	public static void main(String ar[]) throws TooManyCharacters,IOException
	{	
        int n=1;	
		FileInputStream fo=new FileInputStream("File.txt");
		System.out.println("\nOpening file...\n");
		int j=fo.read();
		while(j>0)
		{
			System.out.print((char)j);
			j=fo.read();
			n++;
		}
		fo.close();
		System.out.println("\n\n\tThe no is : "+n);
		if(n>100)
			throw new TooManyCharacters("\nThere Are Too many Characters in the file...");
	}
}