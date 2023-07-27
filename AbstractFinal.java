public class AbstractFinal
{
	public static void main(String arg[])
	{

			Base dobj = new Derived();

	}
}

abstract class Base
{
	public int i, j;

	public Base()
	{
		System.out.println("Inside Demo constructor");
	}
	public void fun()
	{
		System.out.println("Inside fun");
	}

	public abstract void gun();
}

class Derived extends Base 
{
	public int x,y;

	public Derived()
	{
		System.out.println("Inside derived constructor");
	}

	public void gun()
	{
		System.out.println("inside gun constructor");
	}


}

