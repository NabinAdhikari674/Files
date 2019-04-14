//Write A generic Method "sortme()" that accepts a numeric type array and sorts the elements of the array
import java.util.*;
class Gendemo
{
	static <T extends Number>void Sortme(T[] y)
	{
	int a;
		/*for(int j=0;j<y.length;j++)
		  for(int i=0;i<y.length;i++)
			if(y[i].doubleValue()>y[i+1].doubleValue())
			{
			    T a=y[i];
				y[i]=y[i+1];
				y[i+1]=a;
			}
		*/
        Arrays.sort(y);	
        //return y[];		
	}
}
class April23
{
	public static void main(String ar[])
	{
		Integer nums[]={5,2,4,3,1};
		Integer num1[];
		num1=Gendemo.Sortme(nums);
		System.out.println(nums);
	}
}

///////////////////WRONGGGGGGGGGGGGGGGGGGGGG