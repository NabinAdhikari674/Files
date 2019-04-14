//Program to return two or more values from a method or function
class GenericDemo{
	static int i=0;
	static int [] returncheck(){
		int [] array = {1,2,3};
		return array;
	}
	public static void main(String[] args) {
		int [] arr;
		arr = returncheck();
		for(int i=0;i<3;i++)
		{System.out.println(arr[i]);}
	}
}