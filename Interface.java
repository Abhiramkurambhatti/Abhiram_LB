public class Interface
{
	 public static void main(String arg[]) 
	{
		Derived obj = new Derived();


	}
}

interface Demo
{

	int i,j;		//charachteristics

	void fun();
}

class Derived implements Demo
{

	public int x, y;
	public Derived()
	{

		System.out.println("Inside Derived constructor");
	
	}
	public void fun()
	{
		System.out.println("Inside fun defination");
	}

}