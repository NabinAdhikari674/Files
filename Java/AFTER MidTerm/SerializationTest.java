import java.io.*;
class Car implements Serializable{
	String model;
	double price;
	double mileage;
	int makeyear;
	Car(String m1,double p1,double mi1,int my){
		model = m1;
		price = p1;
		mileage = mi1;
		makeyear = my;
	}
}
class SerializationTest{
		static public void getCars(double price1) throws IOException,ClassNotFoundException
	{
		ObjectInputStream ois = new ObjectInputStream(new FileInputStream("Cars.doc"));
		Car cc1;
		for(int i=0;i<5;i++)
		{
			cc1 = (Car) ois.readObject();
			int age = 2018-cc1.makeyear;
			if(cc1.price<=price1 && age<10)
			System.out.println(cc1.model+" "+cc1.price+" "+cc1.mileage+ " age: "+age);
		}
		ois.close();
	}
	public static void main(String[] args) throws IOException, ClassNotFoundException{
		ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("Cars.doc"));
		Car c1 = new Car("K213435",12323,34,2017); oos.writeObject(c1);
		Car c2 = new Car("K213435",12332,32.4,2015); oos.writeObject(c2);
		Car c3 = new Car("K213438",12323,32.34,2013); oos.writeObject(c3);
		Car c4 = new Car("K213435",12323,34.45,2010); oos.writeObject(c4);
		Car c5 = new Car("K213435",12343,34.67,2008); oos.writeObject(c5);
		oos.close();
		getCars(12323);
			}
}