public class StaticFinal
{
	public static void main(String arg[])
	{
		System.out.println("Static j is : "+Demo.j);
		Demo.sfun();									// static fun call kartana obj lagat nahi
	/*
		Demo dobj = new Demo();							//non static with obj call karta
		dobj.fun();
	*/
		Demo dobj = new Demo();
		Demo dobj2 = new Demo();
		


	}

}

class Demo
{
	public int i;
	public static int j;
	public static int x,y;

	static    																
	{
		//System.out.println("Inside static block");				//it's wrong method 
		j =11;
		x =12;
		y =13;
	}

/*    											// unamed block/ anonymous block																
	{
		j =11;
		x =12;
		y =13;
	}

*/

	Demo()
	{
		
		System.out.println("Inside Constructor of demo");

	}
	public void fun()
	{

		System.out.println("Inside fun");

	}

	public static void sfun()
	{

		System.out.println("Inside static method");
	
	}
}

