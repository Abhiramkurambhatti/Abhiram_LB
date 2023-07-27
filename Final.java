class Final 
{
	public static void main(String arg[])
	{
		
		Derived dobj = new Derived();
		System.out.println(dobj.bobj.i);		//10
		dobj.gun();	//Inside base fun
		
	}
}
final class Base 
{
	public final int i = 10;
	public int j;

	public Base()
	{
		System.out.println("Inside base constructor");
		j = 15;

	}
	public void fun()
	{
		System.out.println("Inside base fun");
	}
}

class Derived 
{

	public int x;
	public Base bobj;

	public Derived()
	{
		bobj = new Base();
	}

	public void gun()
	{
		bobj.fun();
	}
}