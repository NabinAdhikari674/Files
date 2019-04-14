class PassbyREFinCLASStype
{
	int x,y;
	PassbyREFinCLASStype(int x,int y)
	{
		this.x=x;
		this.y=y;
	}
	PassbyREFinCLASStype meth()
	{
		PassbyREFinCLASStype o= new PassbyREFinCLASStype(x+10,y+20);
		return o;
	}
	public static void main(String ar[])
	{
		PassbyREFinCLASStype ob1=new PassbyREFinCLASStype(10,20);
		PassbyREFinCLASStype ob2=new PassbyREFinCLASStype(1,2);
		ob2=ob1.meth();
		System.out.println(ob1.x+" "+ob1.y);
		System.out.println(ob2.x+" "+ob2.y);
	}
}