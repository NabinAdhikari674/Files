abstract class Figure   //suppose FIGURE class........abstract class coz of use of ABSTRACT METHOD
{
	int d1,d2;
	Figure()
	{
		d1=10;d2=20;
	}
	abstract void area();          //abstract method....
}
class Rect extends Figure
{
	void area()
	{
		System.out.println("Area from RECT CLASS : "+d1*d2);
	}
}
class Inheritance_Abstract
{
	public static void main(String ar[])
	{
		Rect r=new Rect();
		r.area();
	}
}
