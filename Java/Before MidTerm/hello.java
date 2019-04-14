import java.util.Scanner;
public class calculator
{
public static void main(String[] args)
{

int x;
System.out.println("Enter Your Choice : ");
System.out.println("1.Add \t2.Subtract \t3.Divide \t4.Multiply");
Scanner scan=new Scanner(System.in);
x=scan.nextInt();
switch(x)
{
case 1:add();
       break;
case 2:subtract();
       break;
case 3:divider();
       break;
case 4:multipy();
       break;
}
}
public static void add()
{
int a,b,c;
Scanner scan=new Scanner(System.in);
System.out.println("Enter Two numbers :");
a=scan.nextInt();
b=scan.nextInt();
c=a+b;
System.out.println("The Addition of the two numbers is : "+c);
}
public static void subtract()
{
int a,b,c;
Scanner scan=new Scanner(System.in);
System.out.println("Enter Two Numbers :");
a=scan.nextInt();
b=scan.nextInt();
c=a-b;
System.out.println("The Subtraction of the two numbers is :"+c);
}
public static void divider()
{
int a,b,c;
Scanner scan=new Scanner(System.in);
System.out.println("Enter Two Numbers :");
a=scan.nextInt();
b=scan.nextInt();
c=a/b;
System.out.println("The Division of the two numbers is :"+c);
}
public static void multipy()
{
int a,b,c;
Scanner scan=new Scanner(System.in);
System.out.println("Enter Two Numbers :");
a=scan.nextInt();
b=scan.nextInt();
c=a*b;
System.out.println("The Multiplication of the two numbers is :"+c);
}
}