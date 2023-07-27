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

}

class Overloading
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

	}
}