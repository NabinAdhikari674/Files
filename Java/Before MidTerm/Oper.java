class Oper
{
public static void main(String [] ar)
{
int x=0;
int y=0;
for (int z=0;z<5;z++)
{
if ((++x>2)&&(++y>2))
{
x++;
}
}
System.out.println("x="+x+" "+"y="+y);

////////////////////////////////

x=0;y=0;
do 
{
	y=x++;     //if y is declared here in the loop...then y will not be identified outside the loop..y would be a local variable  
	System.out.println(y);
}while(y<5);

/////////////////////////////////
x=11 & 9;
y=x^3;
System.out.println("The value is : "+(y|12));
/////////////////////////////////

}
}