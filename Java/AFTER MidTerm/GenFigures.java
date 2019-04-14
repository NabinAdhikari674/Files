/*A 2D Figure has 2 dimentions and an Area method extended from figure class.3D figure extends
the properties of 2D and 4D Extends the 3D figure*/

/*Generic class with a variable bounded to the Figure class and test its object with
all the subclass types*/


class Figure
{ 
    void area()
	{}
}
 
class TwoD extends Figure
{
    int d1,d2;
}
class ThreeD extends TwoD  {int d3;}
class FourD extends ThreeD {int d4;}

class GenDemo<T extends Figure>{}
class GenFigures
{
    public static void main(String ar[])
	{
	    GenDemo<TwoD> g1=new Gendemo<TwoD>();
		GenDemo<ThreeD> g2=new Gendemo<ThreeD>();
		GenDemo<FourD> g3=new Gendemo<FourD>();
		GenDemo<Figure> g4=new Gendemo<Figure>();
	}
}