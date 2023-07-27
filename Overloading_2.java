import java.lang.*;		// he nahi lihila tari chalel 
class Demo 
{
	//Overloading by changing the data type
	public int Add(int no1, int no2)
	{
		System.out.println("Inside first Add");
		return no1 + no2;

	}
	public float Add(float no1, float no2)
	{
		System.out.println("Inside second Add");
		return no1 + no2;
	}

	//overloading by changing the sequence of arguments
	public int Add(int no1, int no2, int no3)
	{
		return no1 + no2 + no3;
	}

	//Overloading by changing the sequnce of argumnets
	public void fun(int i, float f)
	{
		System.out.println("Inside first fun");
	}

	public void fun(float f, int i)
	{
		System.out.println("Inside Second fun");
	}
}

class Overloading_2
{
	public static void main(String arg[])
	{
		System.out.println("Inside main");
		//Demo obj;
		//obj = new Demo();


		Demo obj = new Demo();
		int iret = 0;
		float fret = 0.0f;

		iret = obj.Add(10,11);
		System.out.println("Addition of 2 integer :" +iret);

		fret = obj.Add(10.5f, 11.3f);
		System.out.println("Addition of 2 float :" +fret);

		iret = obj.Add(10,11,30);
		System.out.println("Addition of 3 integer :" +iret);


		obj.fun(10, 11.3f);	//first fun
		obj.fun(11.3f, 10);	//second fun
	}
}