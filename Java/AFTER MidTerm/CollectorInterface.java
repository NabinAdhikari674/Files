import java.util.*;
class Rect{
	int l,b;
	Rect(int l,int b)
	{
		this.l=l;
		this.b=b;
	}
	int Area()
	{
		return l*b;
	}
	int peri()
	{return 2*(l+b);}
}
class RectComparePeri implements Comparator<Rect>
{
	public int compare(Rect r1,Rect r2)
	{
		if(r1.peri()>r2.peri())
		return 1;
		else if(r1.peri()<r2.peri())
		return -1;
		else
		return 0;
	}
}
class RectCompareArea implements Comparator<Rect>
{
	public int compare(Rect r1,Rect r2)
	{
		if(r1.Area()>r2.Area())
		return 1;
		else if(r1.Area()<r2.Area())
		return -1;
		else
		return 0;
	}
}
class ReectCompareLen implements Comparator<Rect>
{
	public int compare(Rect r1,Rect r2)
	{
		if(r1.l>r2.l)
		return 1;
		else if(r1.l<r2.l)
		return -1;
		else
		return 0;
	}
}
class ReectCompareBre implements Comparator<Rect>
{
	public int compare(Rect r1,Rect r2)
	{
		if(r1.b>r2.b)
		return 1;
		else if(r1.b<r2.b)
		return -1;
		else
		return 0;
	}
}
class CollectorInterface
{
	public static void main(String ar[])
	{
		TreeSet<Rect> t1=new TreeSet<Rect>(new RectComparePeri());
		t1.add(new Rect(4,5));
		t1.add(new Rect(2,5));
		t1.add(new Rect(4,3));
		t1.add(new Rect(4,1));
		Iterator i=t1.iterator();
		while(i.hasNext())
		{
			System.out.println(((Rect)i.next()).peri());
		}
		/*ArrayList<Rect> t1=new ArrayList<Rect>(new RectComparePeri());
		t1.add(new Rect(4,5));
		t1.add(new Rect(2,5));
		t1.add(new Rect(4,3));
		t1.add(new Rect(4,1));
		for(Rect r:t1)
		{
			
		}*/
		TreeSet<Rect> t2=new TreeSet<Rect>(new RectCompareArea());
		t2.add(new Rect(4,5));
		t2.add(new Rect(2,5));
		t2.add(new Rect(4,3));
		t2.add(new Rect(4,1));
		Iterator i1=t2.iterator();
		while(i1.hasNext())
		{
			System.out.println(((Rect)i1.next()).Area());
		}
	}
}