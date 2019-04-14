import java.util.*;
class AssertTest
{
	public static void main(String ae[])
	{
		Scanner sc=new Scanner(System.in);
		int age=sc.nextInt();
		assert age>18:"Not Approved";
		System.out.println("Welcome Adult..");
	}
}
// while running use  -ea after java