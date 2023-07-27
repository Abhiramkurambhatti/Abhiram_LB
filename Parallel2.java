class Demo implements Runnable	//extends Thread
{
	public void run()
	{
		for(int i = 1; i< 1000; i++)
		{
			System.out.println("Inside :"+Thread.currentThread().getName() +":"+i);
		}
	}
}
class Parallel2
{
	public static void main(String std[])
	{
		System.out.println("thread name is :"+Thread.currentThread().getName());

		Demo obj1 = new Demo();
		Demo obj2 = new Demo();
		obj1.setName("First");
		obj2.setName("Second");

		obj1.start();
		obj2.start();
	}
}