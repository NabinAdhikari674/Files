//import java.util.Random;
import java.time.*;
class Voter
{
	LocalDate today=LocalDate.parse("2018-03-27");
	LocalDate date_of_birth;
	int[] voter_id=new int[10];
	String name;
	static int a;
	Voter()
	{
		System.out.println("Constructor Running\n");
		System.out.println("The voter details are given Below :\n");
		date_of_birth=LocalDate.parse("1969-09-19");
		a= Period.between(date_of_birth,today).getYears();
		if (a>=18)
		{
			voter_id[3]=1;
		}
		else voter_id[3]=0;
		name="Nabin";
		System.out.println("DOB : "+date_of_birth);
	}
	static class VoterCard
	{
		int voter_id;
		boolean voter_card()
		{
			if (a>=18)
				return true;
			else
				return false;
		}
	}
	public static void main(String ar[])
	{
		Voter v1=new Voter();
		Voter.VoterCard v2=new VoterCard();
		boolean vote=v2.voter_card();
		
	    if (vote==true)
		{
		System.out.println("The Voter is Valid.SO Voter Card is Created");	
		System.out.println("Name : "+v1.name);
		System.out.println("Age : "+v1.a);
		System.out.println("Voter ID : "+v1.voter_id[3]);
		}
		if (vote==false)
		{
			v1.name=null;
			
		}
		
		
	}
}