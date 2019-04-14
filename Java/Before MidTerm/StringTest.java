import java.util.Scanner;
class StringTest
{
	public String readString()
	{
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter A String : ");
		String str;
		str=scan.nextLine();
		return str;
	}
	public String readString(String s)
	{
		String s3=s;
		String s6;
		int c=0;
		int a=100;
		String[] s4 = s3.split(" ");
		for(String s5:s4)
		{
			c=s5.length();
			if(c<a)
				a=c;
		}
		for(String s5:s4)
		{
			c=s5.length();
			if(c==a)
				s3=s5;
		}
		return s3;
		
	}
	public int countCharacter(String s,char c)
	{
		String s2=s;
		char ch=c;
		int count=0,i=-1;
		while((i=s2.indexOf(c,i+1))>=0)
			count++;
		return count;
	}
	public static void main(String ar[])
	{
		StringTest s1=new StringTest();
		String st;
		String lim;
		st=s1.readString();
		System.out.println("The Entered String is : "+st);
		int n;
		n=s1.countCharacter(st,'n');
		System.out.println("The occurrence of "+'n'+" in this string is : "+n);
		lim=s1.readString(st);
		System.out.println("The Word with least no of character is : "+lim);
	}
	
}