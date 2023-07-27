public class UnamedFinal
{

	public static void main(String arg[])
	{

		Demo dobj = new Demo();
		System.out.println("Value of i is :"+dobj.i);			// +obj -> concatination operator ; yaat 2 string join hotat;
																// unamed block ani demo constructor join hota 

		Demo dobj2 = new Demo(11, 21);							// parametrised constructor print hon -> 2 constructor eka veli call nahi hota mhanun 2 object create karave lagtat

	}
}
class Demo
{

	public int i,j;
	public static int x,y;
																//unamed block
	{
		System.out.println("Inside unamed block");
		i = 20;
		j = 30;

	}
	Demo()
	{
			System.out.println("Inside default constructor ");
	}

	Demo(int a, int b)
	{
		System.out.println("Inside parameterised constructor ");
		System.out.println(+a);										//parameterised constructor chya value call hotil;
		System.out.println(+b);

	}
}
