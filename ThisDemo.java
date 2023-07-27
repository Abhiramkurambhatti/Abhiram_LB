class ThisDemo
{
	public static void main(String arg[])
	{

		Demo obj = new Demo(10,20);
	}
}

class Demo
{
	public int x,y;

	public Demo()
	{

		//this(10,20)
		System.out.println("Default constructor");
	}

	public Demo(int a, int b)
	{
		this();													//Use no 1	// this() call the constructor this is new in java;
		System.out.println("Parametrised constructor");
		this.x = a;
		this.y = b;

	}

	public void fun()
	{
		System.out.println("Insdide fun");
		System.out.println("Value of x :"+this.x);				//use no 2

	}

	public void gun()
	{
		System.out.println("Inside gun");						//Use no 3
		this.fun();

	}
}