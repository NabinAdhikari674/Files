class PassbyREF
{
	int x,y;
	PassbyREF(int x,int y)
	{
		this.x=x;
		this.y=y;
	}
	void meth(PassbyREF o)
	{
		x=o.x+10;                //here ob2 is passed reference as o
		y=o.y+10;                //
	}
	public static void main(String ar[])
	{
		PassbyREF ob1=new PassbyREF(10,20);
		PassbyREF ob2=new PassbyREF(1,2);
		ob1.meth(ob2);
		System.out.println(ob1.x+" "+ob1.y);
		System.out.println(ob2.x+" "+ob2.y);
	}
}