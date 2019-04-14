/*generic class that contains a method that returns the avg of an array of numbers of any type 
 including integers,float,doubles*/
 class GenDemo<T>   //use <T extends Number>...to extend the generic Type for NUMERIC type only
 {                  //THIS USE of <...> is called BOUNDED GENERIC TYPE...  
    T[]nums;
    GenDemo(T o[])
	{
	    nums=o;
	}
    double average()
	{
		double sum=0.0; 
		for(int i=0;i<nums.length;i++)
		{
			sum=sum+nums[i].doubleValue();
		}	
		return sum/nums.length;
	}
 }
 
 class GenericForAvgInArray
 {
	public static void main(String ar[])
	{
		Integer []i={1,2,3,4};
		GenDemo<Integer> g1=new GenDemo<Integer>(i);
		Double []d={1.3,2.3,14.2,2.6};
		GenDemo<Double> g2=new GenDemo<Double>(d);
		
		System.out.println(g1.average());
		System.out.println(g2.average());
		
	}
 }