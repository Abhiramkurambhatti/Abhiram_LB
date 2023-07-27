import java.lang.*;

class Marvellous
{
	// Characteristics
	public int no1;
	public int no2;

	public Marvellous()				//Default constructor
	{
		this.no1 = 0;
		this.no2 = 0;

	}
	public Marvellous(int x, int y)	//Parametrised
	{
		this.no1 = x;
		this.no2 = y;

	}
	public int Addition()				//Behavior
	{
		int ans = 0;
		ans = this.no1 + this.no2;
		return ans;
	}
	public int Substraction()			//Behavior
	{
		int ans = 0;
		ans = this.no1 - this.no2;
		return ans;
	}

}
class Arithematic
{
	public static void main(String[] args) 
	{
		System.out.println("Inside main");

		Marvellous obj;						//Reference
		obj = new Marvellous();				//Dynamic memory allocation 
		Marvellous obj1 = new Marvellous(21,11);

		int ret = 0;

		ret = obj1.Addition();
		System.out.println("Addition is : "+ret);

		ret = obj1.Substraction();
		System.out.println("Substraction is: "+ret);
		
	}
}