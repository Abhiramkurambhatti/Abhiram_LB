#include<iostream>
using namespace std;

class Demo
{

public:

	int i;
	int j;			
	Demo() 
	{
		i = 0; j = 0;
		cout<<"Default\n";

	}

	Demo(int x,int y)
	{
		i = x; i = y;
		cout<<"parametrised\n";
	
	}
};
int main()
{
	Demo obj1(10,20);
	
	const Demo obj2(10,20);

	obj1.i++;			
	//obj2.i++;			//error

	return 0;
}