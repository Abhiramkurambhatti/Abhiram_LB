class Demo
{
	public int i;

	public final int j;
	
	public Demo()
	{
		i = 11;
		j = 20;
	}

}
class FinalChar
{
	public static void main(String arg[])
	{
		{


			Demo obj = new Demo();
			System.out.println("Value of j : "+obj.j);
			//obj.j++;
		}
	}
}