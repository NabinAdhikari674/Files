import java.time.*;
class DateTimeAPI
{
	public static void main(String ar[])
	{
		LocalDate d=LocalDate.now();
		LocalTime t=LocalTime.now();
		System.out.println(d+" time= "+t);
		
		LocalDate l1=LocalDate.of(2018,Month.JANUARY,23);
		LocalTime t1=LocalTime.of(22,2,15);
		System.out.println(l1+" time="+t1);
		
		LocalDate l2=LocalDate.of(2017,6,21);
		LocalTime t2=LocalTime.of(5,55,23,235);
		System.out.println(l2+" Time="+t2);
		
		LocalDate l3=LocalDate.parse("2018-01-23");
		LocalTime t3=LocalTime.parse("12:02:05");
		System.out.println(l3+" Time="+t3);
		
		LocalDateTime ldt=LocalDateTime.now(ZoneId.of("Europe/Paris"));
		System.out.println("DateTime in Paris :"+ldt);
	}
	
}