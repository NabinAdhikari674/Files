/*employee class details Employee Id,name,salaryand department of each employee.
keeping salary transitory.write a program to store a details of 5 
employees in a file .test the program by reading the content of file used for 
storing data and displaying them on console in java*/
import java.io.*;
class Employee
{
	int emp_id,salary;
	String name,department;
	public static void main(String ar[]) throws IOException
	{
		int i;
	    Employee[] emp=new Employee[5];
		for(i=0;i<5;i++)
			emp[i]=new Employee();
        for(i=0;i<5;i++)
		{
			emp[i].emp_id=258+i;
			emp[i].salary=2999+i;
			emp[i].name="sad"+i;
			emp[i].department="cse";
		}
		System.out.println("\nThe details are punched into the file....\n");
		
		
		FileOutputStream fi=new FileOutputStream("File.txt");
		int x,y,z=0;
		for(x=0;x<5;x++)
		{   z=0;
			fi.write(emp[x].emp_id);
			fi.write(emp[x].salary);
			y=emp[x].name.length();
			while(z<y)
			{
			fi.write(emp[x].name.charAt(z));
			z++;
			}
			z=0;
			y=emp[x].department.length();
			while(z<y)
			{
				fi.write(emp[x].department.charAt(z));
				z++;
			}
			
		}
		fi.close();
		
		FileInputStream fo=new FileInputStream("File.txt");
		int j=fo.read();
		/*while(j>0)
		{
			System.out.println((char)j);
			j=fo.read();
		}*/
		
		
		fo.close();
		
	}
	
}