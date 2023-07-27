#include<iostream>
using namespace std;

class Demo
{
public:
	//charcatristics
	int x,y,z;				//non static characteristics
	static int no;			//static characteristics

	//Behaviour
	//void fun(Demo * const this )

	void fun()				//non-static behaviour
	{
		cout<<"Inside non static fun"<<"\n";

	}

	//static void gun()
	static void gun()		// static behavior
	{
		cout<<"Inside static gun\n";
	}
	Demo(int a=10, int b = 20, int c  = 30)		//constructor
	{
		this -> x = a;
		this -> y = b;
		this -> z = c;

	}
};
int Demo::no=51;
int main()
{
	cout<<"Value of no:"<<Demo::no<<"\n";
	Demo::gun();
	Demo obj1(1,2,3);
	Demo obj2(11,22,33);
	obj1.fun();
	cout<<"size of object is:"<<sizeof(obj1)<<"\n";
	return 0;
}